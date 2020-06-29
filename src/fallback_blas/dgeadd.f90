SUBROUTINE DGEADD(M, N, ALPHA, A, LDA, BETA, B, LDB)
    ! B:= alpha * A + beta *B
    IMPLICIT NONE
    INTEGER*4 M, N, LDA, LDB
    DOUBLE PRECISION ALPHA, BETA
    DOUBLE PRECISION A(LDA,*), B(LDB, *)

    ! Locals
    INTEGER*4 COL
    EXTERNAL DAXPBY, XERBLA
    INTRINSIC MAX

    IF (M .LE. 0 ) RETURN
    IF (N .LE. 0 ) RETURN
    IF (MAX(1,LDA) .LT. M) THEN
        CALL XERBLA("DGEADD", 5)
    ENDIF
    IF (MAX(1,LDB) .LT. M) THEN
        CALL XERBLA("DGEADD", 8)
    ENDIF

    DO COL = 1, N
        CALL DAXPBY(M, ALPHA, A(1,COL), LDA,  BETA, B(1,COL), LDB)
    END DO
END SUBROUTINE
