#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "URTrajCalc_6eliAit3.h"

real_T URTrajCalc_6eliAit3(real_T theta0, real_T w0, real_T accMax)
{
  real_T t;
  real_T A;
  real_T B;
  real_T D;
  A = accMax / 4.0;
  B = w0 / 2.0;
  D = w0 / (2.0 * accMax);
  D = B * B - ((-theta0 - w0 * w0 / (2.0 * accMax)) + D * D) * (4.0 * A);
  if (D > 0.0) {
    D = muDoubleScalarSqrt(D);
    t = muDoubleScalarMax((-B - D) / (2.0 * A), (-B + D) / (2.0 * A));
  } else {
    t = -1.0;
  }

  return t;
}
