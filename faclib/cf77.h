#ifndef _CF77_H_
#define _CF77_H_ 1

#include "cfortran.h"

     /* interpolation from TOMS */
     PROTOCCALLSFSUB7(UVIP3P, uvip3p, INT, INT, DOUBLEV, DOUBLEV,\
		      INT, DOUBLEV, DOUBLEV)
#define UVIP3P(A1,A2,A3,A4,A5,A6,A7)\
     CCALLSFSUB7(UVIP3P, uvip3p, INT, INT, DOUBLEV, DOUBLEV,\
		 INT, DOUBLEV, DOUBLEV, A1,A2,A3,A4,A5,A6,A7)

     PROTOCCALLSFSUB12(SDBI3P, sdbi3p, INT, INT, DOUBLEV, DOUBLEV,\
		       DOUBLEV, INT, DOUBLEV, DOUBLEV, DOUBLEV,\
		       INTV, DOUBLEV, INTV)
#define SDBI3P(A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12)\
     CCALLSFSUB12(SDBI3P, sdbi3p, INT, INT, DOUBLEV, DOUBLEV,\
		DOUBLEV, INT, DOUBLEV, DOUBLEV, DOUBLEV,\
		INTV, DOUBLEV, INTV, A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12)

     PROTOCCALLSFSUB12(RGBI3P, rgbi3p, INT, INT, INT, DOUBLEV, DOUBLEV,\
		       DOUBLEV, INT, DOUBLEV, DOUBLEV, DOUBLEV,\
		       INTV, DOUBLEV)
#define RGBI3P(A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12)\
     CCALLSFSUB12(RGBI3P, rgbi3p, INT, INT, INT, DOUBLEV, DOUBLEV,\
		  DOUBLEV, INT, DOUBLEV, DOUBLEV, DOUBLEV,\
		  INTV, DOUBLEV, A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12)

     /* quasi-newton optimization routine from TOMS */
     PROTOCCALLSFSUB15(LMQN, lmqn, INTV, INT, DOUBLEV, DOUBLEV, DOUBLEV,\
		       DOUBLEV, INT, ROUTINE, INT, INT, INT, DOUBLE,\
		       DOUBLE, DOUBLE, DOUBLE)
#define LMQN(A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15)\
     CCALLSFSUB15(LMQN, lmqn, INTV, INT, DOUBLEV, DOUBLEV, DOUBLEV,\
		DOUBLEV, INT, ROUTINE, INT, INT, INT, DOUBLE,\
		DOUBLE, DOUBLE, DOUBLE, A1,A2,A3,A4,A5,A6,\
		A7,A8,A9,A10,A11,A12,A13,A14,A15)

     PROTOCCALLSFSUB18(LMQNBC, lmqnbc, INTV, INT, DOUBLEV, DOUBLEV, DOUBLEV,\
		       DOUBLEV, INT, ROUTINE, DOUBLEV, DOUBLEV, INTV,\
		       INT, INT, INT, DOUBLE, DOUBLE, DOUBLE, DOUBLE)
#define LMQNBC(A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18)\
     CCALLSFSUB18(LMQNBC, lmqnbc, INTV, INT, DOUBLEV, DOUBLEV, DOUBLEV,\
		  DOUBLEV, INT, ROUTINE, DOUBLEV, DOUBLEV, INTV,\
		  INT, INT, INT, DOUBLE,\
		  DOUBLE, DOUBLE, DOUBLE, A1,A2,A3,A4,A5,A6,\
		  A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18)

     PROTOCCALLSFSUB12(SUBPLX, subplx, ROUTINE, INT, DOUBLE,\
		       INT, INT, DOUBLEV, DOUBLEV, DOUBLEV,\
		       INTV, DOUBLEV, INTV, INTV)
#define SUBPLX(A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12)\
     CCALLSFSUB12(SUBPLX, subplx, ROUTINE, INT, DOUBLE,\
		  INT, INT, DOUBLEV, DOUBLEV, DOUBLEV, \
		  INTV, DOUBLEV, INTV, INTV,\
		  A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12)

     /* utility routines */
     PROTOCCALLSFFUN2(DOUBLE, ARGAM, argam, DOUBLE, DOUBLE)
#define ARGAM(A1,A2)\
     CCALLSFFUN2(ARGAM, argam, DOUBLE, DOUBLE, A1,A2)

     PROTOCCALLSFFUN1(DOUBLE, DLOGAM, dlogam, DOUBLE)
#define DLOGAM(A1)\
     CCALLSFFUN1(DLOGAM, dlogam, DOUBLE, A1)

     PROTOCCALLSFFUN3(DOUBLE, BESLJN, besljn, INT, INT, DOUBLE)
#define BESLJN(A1,A2,A3)\
     CCALLSFFUN3(BESLJN, besljn, INT, INT, DOUBLE, A1,A2,A3)

     /* hydrogenic routines */
     PROTOCCALLSFSUB9(Y5N, y5n, DOUBLE, DOUBLE, DOUBLE, DOUBLE, DOUBLEV,\
		      DOUBLEV, DOUBLEV, DOUBLEV, INTV)
#define Y5N(A1,A2,A3,A4,A5,A6,A7,A8,A9)\
     CCALLSFSUB9(Y5N, y5n, DOUBLE, DOUBLE, DOUBLE, DOUBLE, DOUBLEV,\
		 DOUBLEV, DOUBLEV, DOUBLEV, INTV,\
                 A1,A2,A3,A4,A5,A6,A7,A8,A9)


     /* dirac coulomb function */
     PROTOCCALLSFSUB9(DCOUL, dcoul, DOUBLE, DOUBLE, INT, DOUBLE, DOUBLEV,\
		      DOUBLEV, DOUBLEV, DOUBLEV, DOUBLEV)
#define DCOUL(A1,A2,A3,A4,A5,A6,A7,A8,A9)\
     CCALLSFSUB9(DCOUL, dcoul, DOUBLE, DOUBLE, INT, DOUBLE, DOUBLEV,\
		 DOUBLEV, DOUBLEV, DOUBLEV, DOUBLEV,\
                 A1,A2,A3,A4,A5,A6,A7,A8,A9)

     PROTOCCALLSFFUN2(DOUBLE, DELTAC, deltac, DOUBLE, DOUBLE)
#define DELTAC(A1, A2)\
     CCALLSFFUN2(DELTAC, deltac, DOUBLE, DOUBLE, A1, A2)

     PROTOCCALLSFSUB8(ACOFZ1, acofz1, DOUBLE, DOUBLE, INT, INT,\
		      DOUBLEV, DOUBLEV, INT, INT)
#define ACOFZ1(A1,A2,A3,A4,A5,A6,A7,A8)\
     CCALLSFSUB8(ACOFZ1, acofz1, DOUBLE, DOUBLE, INT, INT,\
		 DOUBLEV, DOUBLEV, INT, INT, A1,A2,A3,A4,A5,A6,A7,A8)

     PROTOCCALLSFSUB12(PIXZ1, pixz1, DOUBLE, DOUBLE, INT, INT,\
		       DOUBLEV, DOUBLEV, DOUBLEV, DOUBLEV, INT,\
		       INT, INT, INT)
#define PIXZ1(A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12)\
     CCALLSFSUB12(PIXZ1, pixz1, DOUBLE, DOUBLE, INT, INT,\
		  DOUBLEV, DOUBLEV, DOUBLEV, DOUBLEV, INT,\
		  INT, INT, INT, A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12)

     /* minpack routines */
     PROTOCCALLSFSUB24(LMDER, lmder, ROUTINE, INT, INT, DOUBLEV,\
		       DOUBLEV, DOUBLEV, INT, DOUBLE, DOUBLE, DOUBLE,\
		       INT, DOUBLEV, INT, DOUBLE, INT, INTV, INTV,\
		       INTV, INTV, DOUBLEV, DOUBLEV, DOUBLEV,\
		       DOUBLEV, DOUBLEV)
#define LMDER(A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,\
              B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12)\
     CCALLSFSUB24(LMDER, lmder, ROUTINE, INT, INT, DOUBLEV,\
		  DOUBLEV, DOUBLEV, INT, DOUBLE, DOUBLE, DOUBLE,\
		  INT, DOUBLEV, INT, DOUBLE, INT, INTV, INTV,\
		  INTV, INTV, DOUBLEV, DOUBLEV, DOUBLEV,\
		  DOUBLEV, DOUBLEV, A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,\
		  B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12)

     PROTOCCALLSFSUB10(CHKDER, chkder, INT, INT, DOUBLEV, DOUBLEV, DOUBLEV,\
		       INT, DOUBLEV, DOUBLEV, INT, DOUBLEV)
#define CHKDER(A1,A2,A3,A4,A5,A6,A7,A8,A9,A10)\
     CCALLSFSUB10(CHKDER, chkder, INT, INT, DOUBLEV, DOUBLEV, DOUBLEV,\
		  INT, DOUBLEV, DOUBLEV, INT, DOUBLEV,\
		  A1,A2,A3,A4,A5,A6,A7,A8,A9,A10)

     /* BLAS, LAPACK */
     PROTOCCALLSFFUN5(DOUBLE, DDOT, ddot, INT, DOUBLEV, INT, DOUBLEV, INT)
#define DDOT(A1,A2,A3,A4,A5)\
     CCALLSFFUN5(DDOT, ddot, INT, DOUBLEV, INT, DOUBLEV, INT,\
		 A1,A2,A3,A4,A5)

     PROTOCCALLSFSUB4(DSCAL, DSCAL, INT, DOUBLE, DOUBLEV, INT)
#define DSCAL(A1,A2,A3,A4)\
     CCALLSFSUB4(DSCAL, dscal, INT, DOUBLE, DOUBLEV, INT,\
		 A1,A2,A3,A4)

     PROTOCCALLSFSUB11(DGEMV, DGEMV, STRING, INT, INT, DOUBLE, DOUBLEV,\
		       INT, DOUBLEV, INT, DOUBLE, DOUBLEV, INT)
#define DGEMV(A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11)\
     CCALLSFSUB11(DGEMV, dgemv, STRING, INT, INT, DOUBLE, DOUBLEV,\
		  INT, DOUBLEV, INT, DOUBLE, DOUBLEV, INT,\
		  A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11)

     PROTOCCALLSFSUB12(DSPEVD, DSPEVD, STRING, STRING, INT, DOUBLEV,\
		       DOUBLEV, DOUBLEV, INT, DOUBLEV, INT, INTV, INT,\
		       INTV)
#define DSPEVD(A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12)\
     CCALLSFSUB12(DSPEVD, dspevd, STRING, STRING, INT, DOUBLEV,\
		  DOUBLEV, DOUBLEV, INT, DOUBLEV, INT, INTV, INT,\
		  INTV, A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12)

     PROTOCCALLSFSUB8(DGESV, dgesv, INT, INT, DOUBLEV, INT,\
		      INTV, DOUBLEV, INT, INTV)
#define DGESV(A1,A2,A3,A4,A5,A6,A7,A8)\
     CCALLSFSUB8(DGESV, dgesv, INT, INT, DOUBLEV, INT,\
		 INTV, DOUBLEV, INT, INTV, A1,A2,A3,A4,A5,A6,A7,A8)

     PROTOCCALLSFSUB14(DGESDD, dgesdd, STRING, INT, INT, DOUBLEV, INT,\
		       DOUBLEV, DOUBLEV, INT, DOUBLEV, INT, DOUBLEV,\
		       INT, INTV, INTV)
#define DGESDD(A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14)\
     CCALLSFSUB14(DGESDD, dgesdd, STRING, INT, INT, DOUBLEV, INT,\
		  DOUBLEV, DOUBLEV, INT, DOUBLEV, INT, DOUBLEV,\
		  INT, INTV, INTV,\
		  A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14)

     PROTOCCALLSFSUB10(DGBSV, dgbsv, INT, INT, INT, INT, DOUBLEV, INT,\
		       INTV, DOUBLEV, INT, INTV)
#define DGBSV(A1,A2,A3,A4,A5,A6,A7,A8,A9,A10)\
     CCALLSFSUB10(DGBSV, dgbsv, INT, INT, INT, INT, DOUBLEV, INT,\
		  INTV, DOUBLEV, INT, INTV,\
		  A1,A2,A3,A4,A5,A6,A7,A8,A9,A10)

     /* livermore ode solver */
     PROTOCCALLSFSUB17(LSODE, lsode, ROUTINE, INT, DOUBLEV, DOUBLEV,\
		       DOUBLE, INT, DOUBLE, DOUBLEV, INT, INT, INT,\
		       DOUBLEV, INT, INTV, INT, ROUTINE, INT)
#define LSODE(A1,A2,A3,A4,A5,A6,A7,A8,A9,B1,B2,B3,B4,B5,B6,B7,B8)\
     CCALLSFSUB17(LSODE, lsode, ROUTINE, INT, DOUBLEV, DOUBLEV,\
		  DOUBLE, INT, DOUBLE, DOUBLEV, INT, INT, INT,\
		  DOUBLEV, INT, INTV, INT, ROUTINE, INT,\
		  A1,A2,A3,A4,A5,A6,A7,A8,A9,\
		  B1,B2,B3,B4,B5,B6,B7,B8)

     /* quadpack */
     PROTOCCALLSFSUB14(DQAGI, dqagi, ROUTINE, DOUBLE, INT, DOUBLE,\
		       DOUBLE, DOUBLEV, DOUBLEV, INTV, INTV, INT,\
		       INT, INTV, INTV, DOUBLEV)
#define DQAGI(A1,A2,A3,A4,A5,A6,A7,B1,B2,B3,B4,B5,B6,B7)\
     CCALLSFSUB14(DQAGI, dqagi, ROUTINE, DOUBLE, INT, DOUBLE,\
		  DOUBLE, DOUBLEV, DOUBLEV, INTV, INTV, INT,\
		  INT, INTV, INTV, DOUBLEV,\
		  A1,A2,A3,A4,A5,A6,A7,B1,B2,B3,B4,B5,B6,B7)

     PROTOCCALLSFSUB9(DQNG, dqng, ROUTINE, DOUBLE, DOUBLE, DOUBLE,\
		      DOUBLE, DOUBLEV, DOUBLEV, INTV, INTV)
#define DQNG(A1,A2,A3,A4,A5,A6,A7,A8,A9)\
     CCALLSFSUB9(DQNG, dqng, ROUTINE, DOUBLE, DOUBLE, DOUBLE,\
		DOUBLE, DOUBLEV, DOUBLEV, INTV, INTV,\
		A1,A2,A3,A4,A5,A6,A7,A8,A9)

     PROTOCCALLSFSUB14(DQAGS, dqags, ROUTINE, DOUBLE, DOUBLE, DOUBLE,\
		       DOUBLE, DOUBLEV, DOUBLEV, INTV, INTV, INT, INT,\
		       INTV, INTV, DOUBLEV)
#define DQAGS(A1,A2,A3,A4,A5,A6,A7,B1,B2,B3,B4,B5,B6,B7)\
     CCALLSFSUB14(DQAGS, dqags, ROUTINE, DOUBLE, DOUBLE, DOUBLE,\
		  DOUBLE, DOUBLEV, DOUBLEV, INTV, INTV, INT, INT,\
		  INTV, INTV, DOUBLEV,\
		  A1,A2,A3,A4,A5,A6,A7,B1,B2,B3,B4,B5,B6,B7)

     /* ionization balance */
     PROTOCCALLSFSUB6(IONIS, ionis, INT, INT, DOUBLE, DOUBLEV,\
		      DOUBLEV, DOUBLEV)
#define IONIS(A1,A2,A3,A4,A5,A6)\
     CCALLSFSUB6(IONIS, ionis, INT, INT, DOUBLE, DOUBLEV,\
		DOUBLEV, DOUBLEV, A1,A2,A3,A4,A5,A6)

     PROTOCCALLSFSUB5(RECOMB, recomb, INT, INT, DOUBLE, DOUBLEV, DOUBLEV)
#define RECOMB(A1,A2,A3,A4,A5)\
     CCALLSFSUB5(RECOMB, recomb, INT, INT, DOUBLE, DOUBLEV, DOUBLEV,\
		 A1,A2,A3,A4,A5)

     PROTOCCALLSFSUB5(RECOMBFE, recombfe, INT, INT, DOUBLE, DOUBLEV, DOUBLEV)
#define RECOMBFE(A1,A2,A3,A4,A5)\
     CCALLSFSUB5(RECOMBFE, recombfe, INT, INT, DOUBLE, DOUBLEV, DOUBLEV,\
		 A1,A2,A3,A4,A5)

     PROTOCCALLSFSUB4(NRRFIT, nrrfit, INT, INT, DOUBLE, DOUBLEV)
#define NRRFIT(A1,A2,A3,A4)\
     CCALLSFSUB4(NRRFIT, nrrfit, INT, INT, DOUBLE, DOUBLEV,\
		 A1,A2,A3,A4)

     PROTOCCALLSFSUB4(NDRFIT, ndrfit, INT, INT, DOUBLE, DOUBLEV)
#define NDRFIT(A1,A2,A3,A4)\
     CCALLSFSUB4(NDRFIT, ndrfit, INT, INT, DOUBLE, DOUBLEV,\
		 A1,A2,A3,A4)

     PROTOCCALLSFSUB4(RRFIT, rrfit, INT, INT, DOUBLE, DOUBLEV)
#define RRFIT(A1,A2,A3,A4)\
     CCALLSFSUB4(RRFIT, rrfit, INT, INT, DOUBLE, DOUBLEV,\
		 A1,A2,A3,A4)

     PROTOCCALLSFSUB4(DRFIT, drfit, INT, INT, DOUBLE, DOUBLEV)
#define DRFIT(A1,A2,A3,A4)\
     CCALLSFSUB4(DRFIT, drfit, INT, INT, DOUBLE, DOUBLEV,\
		 A1,A2,A3,A4)

     PROTOCCALLSFSUB5(PHFIT2, phfit2, INT, INT, INT, DOUBLE, DOUBLEV)
#define PHFIT2(A1,A2,A3,A4,A5)\
     CCALLSFSUB5(PHFIT2, phfit2, INT, INT, INT, DOUBLE, DOUBLEV,\
		 A1,A2,A3,A4,A5)

     PROTOCCALLSFSUB6(CBELI, cbeli, INT, INT, DOUBLE, \
		      DOUBLEV, DOUBLEV, DOUBLEV)
#define CBELI(A1,A2,A3,A4,A5,A6)\
     CCALLSFSUB6(CBELI, cbeli, INT, INT, DOUBLE, \
		 DOUBLEV, DOUBLEV, DOUBLEV, A1,A2,A3,A4,A5,A6)

     PROTOCCALLSFSUB5(RBELI, rbeli, INT, INT, DOUBLE, \
		      DOUBLEV, DOUBLEV)
#define RBELI(A1,A2,A3,A4,A5)\
     CCALLSFSUB5(RBELI, rbeli, INT, INT, DOUBLE, \
		 DOUBLEV, DOUBLEV, A1,A2,A3,A4,A5)

     PROTOCCALLSFSUB4(CFIT, cfit, INT, INT, DOUBLE, DOUBLEV)
#define CFIT(A1,A2,A3,A4)\
     CCALLSFSUB4(CFIT, cfit, INT, INT, DOUBLE, DOUBLEV,\
		 A1,A2,A3,A4)

     PROTOCCALLSFSUB6(COLFIT, colfit, INT, INT, INT, DOUBLE, 
		      DOUBLEV, DOUBLEV)
#define COLFIT(A1,A2,A3,A4,A5,A6)\
     CCALLSFSUB6(COLFIT, colfit, INT, INT, INT, DOUBLE,\
		 DOUBLEV, DOUBLEV, A1,A2,A3,A4,A5,A6)

     PROTOCCALLSFSUB4(EPHFIT2, ephfit2, INT, INT, INT, DOUBLEV) 
#define EPHFIT2(A1,A2,A3,A4)\
     CCALLSFSUB4(EPHFIT2, ephfit2, INT, INT, INT, DOUBLEV,\
                 A1,A2,A3,A4)

     PROTOCCALLSFSUB4(ECOLFIT, ecolfit, INT, INT, INT, DOUBLEV) 
#define ECOLFIT(A1,A2,A3,A4)\
     CCALLSFSUB4(ECOLFIT, ecolfit, INT, INT, INT, DOUBLEV,\
                 A1,A2,A3,A4)

     PROTOCCALLSFSUB3(EBELI, ebeli, INT, INT, DOUBLEV) 
#define EBELI(A1,A2,A3)\
     CCALLSFSUB3(EBELI, ebeli, INT, INT, DOUBLEV, A1,A2,A3)

     PROTOCCALLSFSUB9(DXLEGF, dxlegf, DOUBLE, INT, INT, INT,\
		      DOUBLE, INT, DOUBLEV, INTV, INTV)
#define DXLEGF(A1,A2,A3,A4,A5,A6,A7,A8,A9)\
     CCALLSFSUB9(DXLEGF, dxlegf, DOUBLE, INT, INT, INT,\
                 DOUBLE, INT, DOUBLEV, INTV, INTV,\
                 A1,A2,A3,A4,A5,A6,A7,A8,A9)

#endif
