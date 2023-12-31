SET(OPENBLAS_PREFIX "OpenBLAS-OpenMP: ")
SET(OPENBLAS_LIB_NAME OpenMP)
SET(OPENBLAS_GET_PARALLEL 2)

IF ( EXISTS /etc/debian_version )
    # We are on debian
    MESSAGE(STATUS "${OPENBLAS_PREFIX} ${CMAKE_LIBRARY_ARCHITECTURE} ")
    SET(SEARCH_PATH /usr/lib/${CMAKE_LIBRARY_ARCHITECTURE}/openblas-openmp)
    SET(SEARCH_NAME openblas)
ELSE()
    SET(SEARCH_PATH /usr/lib/ /usr/lib64)
    SET(SEARCH_NAME openblaso openblas)
ENDIF()

FIND_LIBRARY(OpenBLAS${OPENBLAS_LIB_NAME}_LIBRARY NAMES ${SEARCH_NAME} HINTS ${SEARCH_PATH}   DOC "OpenBLAS-Serial Location")

IF (OpenBLAS${OPENBLAS_LIB_NAME}_LIBRARY)
    MESSAGE(STATUS "${OPENBLAS_PREFIX} Candidate: ${OpenBLAS${OPENBLAS_LIB_NAME}_LIBRARY}")

    SET(TEST_CODE "
    #ifdef NDEBUG
    #undef NDEBUG
    #endif

    #include<assert.h>
    extern int openblas_get_parallel()\;
    int main() { assert(openblas_get_parallel() == ${OPENBLAS_GET_PARALLEL})\; return 0\;}
    ")

    FILE(WRITE ${CMAKE_BINARY_DIR}/otest.c ${TEST_CODE})
    TRY_RUN(_RUN_RES _COMPILE_RES ${CMAKE_BINARY_DIR} ${CMAKE_BINARY_DIR}/otest.c LINK_LIBRARIES ${OpenBLAS${OPENBLAS_LIB_NAME}_LIBRARY}
        COMPILE_OUTPUT_VARIABLE COMPILE_OUT
        RUN_OUTPUT_VARIABLE RUN_OUT)
    IF(FIND_DEBUG)
        MESSAGE(STATUS "_RUN_RES : ${_RUN_RES}")
        MESSAGE(STATUS "_COMPILE_RES: ${_COMPILE_RES}")
        MESSAGE(STATUS "COMPILE_OUT: ${COMPILE_OUT}")
        MESSAGE(STATUS "RUN_OUT: ${RUN_OUT}")
    ENDIF()
    FILE(REMOVE ${CMAKE_BINARY_DIR}/otest.c)

    IF ( NOT (_RUN_RES EQUAL 0 AND _COMPILE_RES) )
        MESSAGE(STATUS "${OPENBLAS_PREFIX} ${OpenBLAS${OPENBLAS_LIB_NAME}_LIBRARY} does not contain the ${OPENBLAS_LIB_NAME} version of OpenBLAS.")
        SET(OpenBLAS${OPENBLAS_LIB_NAME}_LIBRARY FALSE)
    ENDIF()
    UNSET(_RUN_RES)
    UNSET(_COMPILE_RES)
    UNSET(COMPILE_OUT)
    UNSET(RUN_OUT)
ELSE()
    SET(OpenBLAS${OPENBLAS_LIB_NAME}_FOUND FALSE)
ENDIF()

include(FindPackageHandleStandardArgs)

# INCLUDE(find_package_handle_standard_args)
find_package_handle_standard_args(OpenBLAS${OPENBLAS_LIB_NAME} REQUIRED_VARS OpenBLAS${OPENBLAS_LIB_NAME}_LIBRARY)

UNSET(TEST_CODE)
UNSET(SEARCH_NAME)
UNSET(SEARCH_PATH)
UNSET(OPENBLAS_PREFIX)
UNSET(OPENBLAS_LIB_NAME)
UNSET(OPENBLAS_GET_PARALLEL)
