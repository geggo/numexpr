// -*- c-mode -*-
/*********************************************************************
  Numexpr - Fast numerical array expression evaluator for NumPy.

      License: MIT
      Author:  See AUTHORS.txt

  See LICENSE.txt for details about copyright and rights to use.
**********************************************************************/

/* These #if blocks make it easier to query this file, without having
   to define every row function before #including it. */
#ifndef FUNC_FF
#define ELIDE_FUNC_FF
#define FUNC_FF(...)
 #endif
FUNC_FF(FUNC_SQRT_FF,    "sqrt_ff",     sqrtf,  sqrtf2,  vsSqrt,  vvsqrtf)
FUNC_FF(FUNC_SIN_FF,     "sin_ff",      sinf,   sinf2,   vsSin,   vvsinf)
FUNC_FF(FUNC_COS_FF,     "cos_ff",      cosf,   cosf2,   vsCos,   vvcosf)
FUNC_FF(FUNC_TAN_FF,     "tan_ff",      tanf,   tanf2,   vsTan,   vvtanf)
FUNC_FF(FUNC_ARCSIN_FF,  "arcsin_ff",   asinf,  asinf2,  vsAsin,  vvasinf)
FUNC_FF(FUNC_ARCCOS_FF,  "arccos_ff",   acosf,  acosf2,  vsAcos,  vvacosf)
FUNC_FF(FUNC_ARCTAN_FF,  "arctan_ff",   atanf,  atanf2,  vsAtan,  vvatanf)
FUNC_FF(FUNC_SINH_FF,    "sinh_ff",     sinhf,  sinhf2,  vsSinh,  vvsinhf)
FUNC_FF(FUNC_COSH_FF,    "cosh_ff",     coshf,  coshf2,  vsCosh,  vvcoshf)
FUNC_FF(FUNC_TANH_FF,    "tanh_ff",     tanhf,  tanhf2,  vsTanh,  vvtanhf)
FUNC_FF(FUNC_ARCSINH_FF, "arcsinh_ff",  asinhf, asinhf2, vsAsinh, vvasinhf)
FUNC_FF(FUNC_ARCCOSH_FF, "arccosh_ff",  acoshf, acoshf2, vsAcosh, vvacoshf)
FUNC_FF(FUNC_ARCTANH_FF, "arctanh_ff",  atanhf, atanhf2, vsAtanh, vvatanhf)
FUNC_FF(FUNC_LOG_FF,     "log_ff",      logf,   logf2,   vsLn,    vvlogf)
FUNC_FF(FUNC_LOG1P_FF,   "log1p_ff",    log1pf, log1pf2, vsLog1p, vvlog1pf)
FUNC_FF(FUNC_LOG10_FF,   "log10_ff",    log10f, log10f2, vsLog10, vvlog10f)
FUNC_FF(FUNC_EXP_FF,     "exp_ff",      expf,   expf2,   vsExp,   vvexpf)
FUNC_FF(FUNC_EXPM1_FF,   "expm1_ff",    expm1f, expm1f2, vsExpm1, vvexpm1f)
FUNC_FF(FUNC_ABS_FF,     "absolute_ff", fabsf,  fabsf2,  vsAbs,   vvfabsf)
FUNC_FF(FUNC_CONJ_FF,    "conjugate_ff",fconjf, fconjf2, vsConj,  vvconjf) /* veclib misses conj */
FUNC_FF(FUNC_FF_LAST,    NULL,          NULL,   NULL,    NULL,    NULL)
#ifdef ELIDE_FUNC_FF
#undef ELIDE_FUNC_FF
#undef FUNC_FF
#endif

#ifndef FUNC_FFF
#define ELIDE_FUNC_FFF
#define FUNC_FFF(...)
#endif
FUNC_FFF(FUNC_FMOD_FFF,    "fmod_fff",    fmodf,  fmodf2,  vsfmod,  vvfmodf)
FUNC_FFF(FUNC_ARCTAN2_FFF, "arctan2_fff", atan2f, atan2f2, vsAtan2, vvatan2f)
FUNC_FFF(FUNC_FFF_LAST,    NULL,          NULL,   NULL,    NULL,    NULL)
#ifdef ELIDE_FUNC_FFF
#undef ELIDE_FUNC_FFF
#undef FUNC_FFF
#endif

#ifndef FUNC_DD
#define ELIDE_FUNC_DD
#define FUNC_DD(...)
#endif
FUNC_DD(FUNC_SQRT_DD,    "sqrt_dd",     sqrt,  vdSqrt,  vvsqrt)
FUNC_DD(FUNC_SIN_DD,     "sin_dd",      sin,   vdSin,   vvsin)
FUNC_DD(FUNC_COS_DD,     "cos_dd",      cos,   vdCos,   vvcos)
FUNC_DD(FUNC_TAN_DD,     "tan_dd",      tan,   vdTan,   vvtan)
FUNC_DD(FUNC_ARCSIN_DD,  "arcsin_dd",   asin,  vdAsin,  vvasin)
FUNC_DD(FUNC_ARCCOS_DD,  "arccos_dd",   acos,  vdAcos,  vvacos)
FUNC_DD(FUNC_ARCTAN_DD,  "arctan_dd",   atan,  vdAtan,  vvatan)
FUNC_DD(FUNC_SINH_DD,    "sinh_dd",     sinh,  vdSinh,  vvsinh)
FUNC_DD(FUNC_COSH_DD,    "cosh_dd",     cosh,  vdCosh,  vvcosh)
FUNC_DD(FUNC_TANH_DD,    "tanh_dd",     tanh,  vdTanh,  vvtanh)
FUNC_DD(FUNC_ARCSINH_DD, "arcsinh_dd",  asinh, vdAsinh, vvasinh)
FUNC_DD(FUNC_ARCCOSH_DD, "arccosh_dd",  acosh, vdAcosh, vvacosh)
FUNC_DD(FUNC_ARCTANH_DD, "arctanh_dd",  atanh, vdAtanh, vvatanh)
FUNC_DD(FUNC_LOG_DD,     "log_dd",      log,   vdLn,    vvlog)
FUNC_DD(FUNC_LOG1P_DD,   "log1p_dd",    log1p, vdLog1p, vvlog1p)
FUNC_DD(FUNC_LOG10_DD,   "log10_dd",    log10, vdLog10, vvlog10)
FUNC_DD(FUNC_EXP_DD,     "exp_dd",      exp,   vdExp,   vvexp)
FUNC_DD(FUNC_EXPM1_DD,   "expm1_dd",    expm1, vdExpm1, vvexpm1)
FUNC_DD(FUNC_ABS_DD,     "absolute_dd", fabs,  vdAbs,   vvfabs)
FUNC_DD(FUNC_CONJ_DD,    "conjugate_dd",fconj, vdConj,  vvconj)
FUNC_DD(FUNC_DD_LAST,    NULL,          NULL,  NULL,    NULL)
#ifdef ELIDE_FUNC_DD
#undef ELIDE_FUNC_DD
#undef FUNC_DD
#endif

#ifndef FUNC_DDD
#define ELIDE_FUNC_DDD
#define FUNC_DDD(...)
#endif
FUNC_DDD(FUNC_FMOD_DDD,    "fmod_ddd",    fmod,  vdfmod)
FUNC_DDD(FUNC_ARCTAN2_DDD, "arctan2_ddd", atan2, vdAtan2)
FUNC_DDD(FUNC_DDD_LAST,    NULL,          NULL,  NULL)
#ifdef ELIDE_FUNC_DDD
#undef ELIDE_FUNC_DDD
#undef FUNC_DDD
#endif

#ifndef FUNC_CC
#define ELIDE_FUNC_CC
#define FUNC_CC(...)
#endif
FUNC_CC(FUNC_SQRT_CC,    "sqrt_cc",     nc_sqrt,  vzSqrt)
FUNC_CC(FUNC_SIN_CC,     "sin_cc",      nc_sin,   vzSin)
FUNC_CC(FUNC_COS_CC,     "cos_cc",      nc_cos,   vzCos)
FUNC_CC(FUNC_TAN_CC,     "tan_cc",      nc_tan,   vzTan)
FUNC_CC(FUNC_ARCSIN_CC,  "arcsin_cc",   nc_asin,  vzAsin)
FUNC_CC(FUNC_ARCCOS_CC,  "arccos_cc",   nc_acos,  vzAcos)
FUNC_CC(FUNC_ARCTAN_CC,  "arctan_cc",   nc_atan,  vzAtan)
FUNC_CC(FUNC_SINH_CC,    "sinh_cc",     nc_sinh,  vzSinh)
FUNC_CC(FUNC_COSH_CC,    "cosh_cc",     nc_cosh,  vzCosh)
FUNC_CC(FUNC_TANH_CC,    "tanh_cc",     nc_tanh,  vzTanh)
FUNC_CC(FUNC_ARCSINH_CC, "arcsinh_cc",  nc_asinh, vzAsinh)
FUNC_CC(FUNC_ARCCOSH_CC, "arccosh_cc",  nc_acosh, vzAcosh)
FUNC_CC(FUNC_ARCTANH_CC, "arctanh_cc",  nc_atanh, vzAtanh)
FUNC_CC(FUNC_LOG_CC,     "log_cc",      nc_log,   vzLn)
FUNC_CC(FUNC_LOG1P_CC,   "log1p_cc",    nc_log1p, vzLog1p)
FUNC_CC(FUNC_LOG10_CC,   "log10_cc",    nc_log10, vzLog10)
FUNC_CC(FUNC_EXP_CC,     "exp_cc",      nc_exp,   vzExp)
FUNC_CC(FUNC_EXPM1_CC,   "expm1_cc",    nc_expm1, vzExpm1)
FUNC_CC(FUNC_ABS_CC,     "absolute_cc", nc_abs,   vzAbs_)
FUNC_CC(FUNC_CONJ_CC,    "conjugate_cc",nc_conj,  vzConj)
FUNC_CC(FUNC_CC_LAST,    NULL,          NULL,     NULL)
#ifdef ELIDE_FUNC_CC
#undef ELIDE_FUNC_CC
#undef FUNC_CC
#endif

#ifndef FUNC_CCC
#define ELIDE_FUNC_CCC
#define FUNC_CCC(...)
#endif
FUNC_CCC(FUNC_POW_CCC,   "pow_ccc", nc_pow)
FUNC_CCC(FUNC_CCC_LAST,  NULL,      NULL)
#ifdef ELIDE_FUNC_CCC
#undef ELIDE_FUNC_CCC
#undef FUNC_CCC
#endif
