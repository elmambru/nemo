*
*       common2.
*       --------
*
      INCLUDE 'params.h'
      REAL*8         X,X0,X0DOT,T0,TIME
      INTEGER        NLIST,NAME,LIST,ILIST,JLIST
*
      COMMON/NBODY/  X(3,NMAX),X0(3,NMAX),X0DOT(3,NMAX),T0(NMAX),
     &               F(3,NMAX),FDOT(3,NMAX),BODY(NMAX),XDOT(3,NMAX),
     &               FI(3,NMAX),D1(3,NMAX),D2(3,NMAX),D3(3,NMAX),
     &               FR(3,NMAX),D1R(3,NMAX),D2R(3,NMAX),D3R(3,NMAX),
     &               STEP(NMAX),T1(NMAX),T2(NMAX),T3(NMAX),RS(NMAX),
     &               STEPR(NMAX),T0R(NMAX),T1R(NMAX),T2R(NMAX),T3R(NMAX)
*
      COMMON/NAMES/  N,NNBMAX,NFIX,IPHASE,ICOMP,JCOMP,NRUN,MODEL,NC,
     &               KZ(20),NLIST(NMAX),NAME(NMAX),LIST(LMAX,NMAX)
*
      COMMON/COUNTS/ NSTEPI,NSTEPR,NNPRED,NBCORR,NBFULL,NBVOID,
     &               NMTRY,NMERG,NESC,NTIMER,NSTEPS,NPRINT,NDUMP
*
      COMMON/PARAMS/ TIME,CPU,ETAI,ETAR,DELTAT,TCRIT,QE,EPS2,
     &               ONE3,ONE6,ONE9,ONE12,TCR0,BODYM,BODY1,ETA0,
     &               ALPHA,ZNBMIN,ZNBMAX,RTIDE,POT,ZKIN,VIR,ETIDE,
     &               TNEXT,TLIST,DTLIST,STAB1,STAB2,CPU0,CPUTOT,ERRTOT,
     &               ZMASS,RSCALE,TCR,BE(3),CMR(4),CMRDOT(4),
     &               RC,RC2,VC,ZMC,RDENS(3),RHOD,RHOM,RSMIN,
     &               RBAR,ZMBAR,VSTAR,TSTAR,XTPAR(2),RGAS,ZMGAS,CGAS
*
      COMMON/LISTS/  ILIST(NMAX),JLIST(NMAX)