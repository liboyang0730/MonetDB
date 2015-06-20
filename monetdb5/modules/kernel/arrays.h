#ifndef _ARRAYS_H
#define _ARRAYS_H

#ifdef WIN32
#if !defined(LIBMAL) && !defined(LIBATOMS) && !defined(LIBKERNEL) && !defined(LIBMAL) && !defined(LIBOPTIMIZER) && !defined(LIBSCHEDULER) && !defined(LIBMONETDB5)
#define algebra_export extern __declspec(dllimport)
#else
#define algebra_export extern __declspec(dllexport)
#endif
#else
#define algebra_export extern
#endif

algebra_export str dimension_leftfetchjoin(bat *out_bid, ptr *dims, int dimNum) ;
algebra_export str ALGnonDimensionLeftfetchjoin(bat *result, const bat *lid, const bat *rid);
algebra_export str ALGdimensionLeftfetchjoin(bat *result, const bat *lid, const bat *rid);

//algebra_export str ALGdimensionSubselect1(bat *result, const bat *bid, const void *low, const void *high, const bit *li, const bit *hi, const bit *anti);
//algebra_export str ALGdimensionSubselect2(bat *result, const bat *bid, const bat *sid, const void *low, const void *high, const bit *li, const bit *hi, const bit *anti);
//algebra_export str ALGdimensionThetasubselect1(bat *result, const bat *bid, const void *val, const char **op);
//algebra_export str ALGdimensionThetasubselect2(bat *result, const bat *bid, const bat *sid, const void *val, const char **op);

algebra_export str ALGmbrsubselect(bat *result, const bat *bid, const bat *sid, const bat *cid);
algebra_export str ALGmbrsubselect2(bat *result, const bat *bid, const bat *sid);

algebra_export str ALGmbrproject(bat *result, const bat *bid, const bat *sid, const bat *rid);

#endif /* _ARRAYS_H */
