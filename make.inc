MAKE = make
F90 = ifort
F90_OPTS = -O3 -ip -unroll -no-prec-div -parallel
F77 = ifort
F77_OPTS = -O3 -ip -unroll -no-prec-div -assume protect_parens
AR = ar
LIB_SYS =
# LAPACK and BLAS libraries
#LIB_LPK = lapack.a blas.a
LIB_FFT = fftlib.a
SRC_OMP =
MKLROOT    =/opt/intel/mkl/
MKL_PATH   = $(MKLROOT)/lib/intel64
LIB_LPK     =-L$(MKL_PATH) -lmkl_intel_lp64 -lmkl_sequential -lmkl_core -lpthread

FCFLAGS = -DMINIELK1

#-------------------------------------------------------------------------------
#SRC_MPI = mpi_stub.f90
# To enable MPI parallelism the MPI version of the Fortran compiler must be
# used. This is usually mpif90 or mpiifort. Uncomment the following lines and
# run 'make clean' followed by 'make'.
F90 = mpiifort
F77 = mpiifort
#SRC_MPI =
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
#SRC_MKL = mkl_stub.f90
# To enable MKL parallelism, link with the MKL library then uncomment the
# following line and run 'make clean' followed by 'make'.
#SRC_MKL =
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
SRC_OBLAS = oblas_stub.f90
# To enable OpenBLAS parallelism, link with the OpenBLAS library then uncomment
# the following line and run 'make clean' followed by 'make'.
#SRC_OBLAS =
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
SRC_BLIS = blis_stub.f90
# To enable BLIS parallelism, link with the BLIS library then uncomment the
# following line and run 'make clean' followed by 'make'.
#SRC_BLIS =
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
SRC_libxc = libxcifc_stub.f90
# To enable Libxc first download and compile version 5.x of the library. Next
# copy the files libxcf90.a and libxc.a to the elk/src directory. Then uncomment
# the following lines and run 'make clean' followed by 'make'.
#LIB_libxc = libxcf90.a libxc.a
#SRC_libxc = libxcf90.f90 libxcifc.f90
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
SRC_FFT = zfftifc.f90
# To use a different FFT library, copy the relevant library or include files to
# the elk/src directory (eg. mkl_dfti.f90), uncomment the appropriate lines
# below and run 'make clean' followed by 'make'.
#SRC_FFT = zfftifc_fftw.f90
#LIB_FFT = libfftw3.a
#SRC_FFT = mkl_dfti.f90 zfftifc_mkl.f90
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
SRC_W90S = w90_stub.f90
# To enable the Wannier90 library copy libwannier.a to the elk/src directory.
# Then uncomment the following lines and run 'make clean' followed by 'make'.
#SRC_W90S =
#LIB_W90 = libwannier.a
#-------------------------------------------------------------------------------

