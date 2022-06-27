TOP=../..

include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS BELOW HERE

# Use typed rset structure (see 3.16.1 release notes)
USR_CPPFLAGS += -DUSE_TYPED_RSET

# xxxRecord.h will be created from xxxRecord.dbd
DBDINC += xxxRecord

# Install xxxSupport.dbd into <top>/dbd
DBD += xxxSupport.dbd

# Build an IOC support library
LIBRARY_IOC += IC101Support

# Compile and add code to the support library
IC101Support_SRCS += xxxRecord.c
IC101Support_SRCS += devXxxSoft.c

# Link locally-provided code into the support library,
# rather than directly into the IOC application, that
# causes problems on Windows DLL builds
IC101Support_SRCS += dbSubExample.c
IC101Support_SRCS += devIC101Version.c
IC101Support_SRCS += IC101Hello.c
IC101Support_SRCS += initTrace.c

IC101Support_LIBS += $(EPICS_BASE_IOC_LIBS)

# Auto-generate a header file containing a version string.
# Version comes from the VCS if available, else date+time.
GENVERSION = IC101Version.h
# Macro name
GENVERSIONMACRO = IC101VERSION

# Build the IOC application
PROD_IOC = IC101

# IC101.dbd will be created and installed
DBD += IC101.dbd

# IC101.dbd will include these files:
IC101_DBD += base.dbd
# IC101_DBD += drvAsynIPPort.dbd
IC101_DBD += xxxSupport.dbd
# IC101_DBD += dbSubExample.dbd
IC101_DBD += devIC101Version.dbd
IC101_DBD += IC101Hello.dbd
IC101_DBD += initTrace.dbd

# IC101_registerRecordDeviceDriver.cpp derives from IC101.dbd
IC101_SRCS += IC101_registerRecordDeviceDriver.cpp

# Build the main IOC entry point where needed
IC101_SRCS_DEFAULT += IC101Main.cpp
IC101_SRCS_vxWorks += -nil-

# Link in the code from our support library
IC101_LIBS += IC101Support

# To build SNL programs, SNCSEQ must be defined
# in the <top>/configure/RELEASE file
ifneq ($(SNCSEQ),)
    # Build sncExample into IC101Support
    sncExample_SNCFLAGS += +r
    IC101_DBD += sncExample.dbd
    # A .stt sequence program is *not* pre-processed:
    IC101Support_SRCS += sncExample.stt
    IC101Support_LIBS += seq pv
    IC101_LIBS += seq pv

    # Build sncProgram as a standalone program
    PROD_HOST += sncProgram
    sncProgram_SNCFLAGS += +m
    # A .st sequence program *is* pre-processed:
    sncProgram_SRCS += sncProgram.st
    sncProgram_LIBS += seq pv
    sncProgram_LIBS += $(EPICS_BASE_HOST_LIBS)
endif

# Link QSRV (pvAccess Server) if available
ifdef EPICS_QSRV_MAJOR_VERSION
    IC101_LIBS += qsrv
    IC101_LIBS += $(EPICS_BASE_PVA_CORE_LIBS)
    IC101_DBD += PVAServerRegister.dbd
    IC101_DBD += qsrv.dbd
endif

# Finally link IOC to the EPICS Base libraries
IC101_LIBS += $(EPICS_BASE_IOC_LIBS)

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD EXTRA GNUMAKE RULES BELOW HERE

# Explicit dependency needed for generated header file
devIC101Version$(DEP): $(COMMON_DIR)/$(GENVERSION)
