#include "gsl_math.h"
#include "gsl_cblas.h"
#include "gsl_cblas__cblas.h"

void
cblas_dsyrk (const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
             const enum CBLAS_TRANSPOSE Trans, const int N, const int K,
             const double alpha, const double *A, const int lda,
             const double beta, double *C, const int ldc)
{
#define BASE double
#include "gsl_cblas__source_syrk_r.h"
#undef BASE
}
