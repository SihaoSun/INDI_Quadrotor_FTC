#include "rtwtypes.h"
#include "multiword_types.h"
#include "xscal_d9mznQDv.h"

void xscal_d9mznQDv(real_T a, real_T x[16], int32_T ix0)
{
  int32_T k;
  for (k = ix0; k <= ix0 + 3; k++) {
    x[k - 1] *= a;
  }
}
