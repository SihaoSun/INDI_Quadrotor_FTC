###########################################################################
## Makefile generated for Simulink model 'rtwshared'. 
## 
## Makefile     : rtwshared.mk
## Generated on : Tue Jun 30 13:36:39 2020
## MATLAB Coder version: 4.2 (R2019a)
## 
## Build Info:
## 
## Final product: ./rtwshared.a
## Product type : static library
## Build type   : Model Reference Library
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile
# COMPUTER                Computer type. See the MATLAB "computer" command.

PRODUCT_NAME              = rtwshared
MAKEFILE                  = rtwshared.mk
COMPUTER                  = GLNXA64
MATLAB_ROOT               = /usr/local/MATLAB/R2019a
MATLAB_BIN                = /usr/local/MATLAB/R2019a/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/glnxa64
MASTER_ANCHOR_DIR         = 
START_DIR                 = /home/sihao/src/monorepo/simulink_model/.codeGenCache
ARCH                      = glnxa64
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = ISO_C++
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 
RELATIVE_PATH_TO_ANCHOR   = ../../..
C_STANDARD_OPTS           = -ansi -pedantic -Wno-long-long -fwrapv
CPP_STANDARD_OPTS         = -std=c++98 -pedantic -Wno-long-long -fwrapv

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          GNU gcc/g++ | gmake (64-bit Linux)
# Supported Version(s):    
# ToolchainInfo Version:   R2019a
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# C_STANDARD_OPTS
# CPP_STANDARD_OPTS

#-----------
# MACROS
#-----------

WARN_FLAGS         = -Wall -W -Wwrite-strings -Winline -Wstrict-prototypes -Wnested-externs -Wpointer-arith -Wcast-align
WARN_FLAGS_MAX     = $(WARN_FLAGS) -Wcast-qual -Wshadow
CPP_WARN_FLAGS     = -Wall -W -Wwrite-strings -Winline -Wpointer-arith -Wcast-align
CPP_WARN_FLAGS_MAX = $(CPP_WARN_FLAGS) -Wcast-qual -Wshadow

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = 

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: GNU C Compiler
CC = gcc

# Linker: GNU Linker
LD = g++

# C++ Compiler: GNU C++ Compiler
CPP = g++

# C++ Linker: GNU C++ Linker
CPP_LD = g++

# Archiver: GNU Archiver
AR = ar

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_ARCH_BIN)
MEX = "$(MEX_PATH)/mex"

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: GMAKE Utility
MAKE_PATH = %MATLAB%/bin/glnxa64
MAKE = "$(MAKE_PATH)/gmake"


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -g
C_OUTPUT_FLAG       = -o
LDDEBUG             = -g
OUTPUT_FLAG         = -o
CPPDEBUG            = -g
CPP_OUTPUT_FLAG     = -o
CPPLDDEBUG          = -g
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG =
MEX_DEBUG           = -g
RM                  = @rm -f
ECHO                = @echo
MV                  = @mv
RUN                 =

#--------------------------------------
# "Faster Runs" Build Configuration
#--------------------------------------

ARFLAGS              = ruvs
CFLAGS               = -c $(C_STANDARD_OPTS) -fPIC \
                       -O3 -fno-loop-optimize -fno-aggressive-loop-optimizations
CPPFLAGS             = -c $(CPP_STANDARD_OPTS) -fPIC \
                       -O3 -fno-loop-optimize -fno-aggressive-loop-optimizations
CPP_LDFLAGS          = -Wl,-rpath,"$(MATLAB_ARCH_BIN)",-L"$(MATLAB_ARCH_BIN)"
CPP_SHAREDLIB_LDFLAGS  = -shared -Wl,-rpath,"$(MATLAB_ARCH_BIN)",-L"$(MATLAB_ARCH_BIN)" -Wl,--no-undefined
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
LDFLAGS              = -Wl,-rpath,"$(MATLAB_ARCH_BIN)",-L"$(MATLAB_ARCH_BIN)"
MEX_CPPFLAGS         = -R2018a -MATLAB_ARCH=$(ARCH) $(INCLUDES) \
                         \
                       CXXOPTIMFLAGS="$(C_STANDARD_OPTS)  \
                       -O3 -fno-loop-optimize -fno-aggressive-loop-optimizations \
                        $(DEFINES)" \
                         \
                       -silent
MEX_CPPLDFLAGS       = LDFLAGS=='$$LDFLAGS'
MEX_CFLAGS           = -R2018a -MATLAB_ARCH=$(ARCH) $(INCLUDES) \
                         \
                       COPTIMFLAGS="$(C_STANDARD_OPTS)  \
                       -O3 -fno-loop-optimize -fno-aggressive-loop-optimizations \
                        $(DEFINES)" \
                         \
                       -silent
MEX_LDFLAGS          = LDFLAGS=='$$LDFLAGS'
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = -shared -Wl,-rpath,"$(MATLAB_ARCH_BIN)",-L"$(MATLAB_ARCH_BIN)" -Wl,--no-undefined



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = ./rtwshared.a
PRODUCT_TYPE = "static library"
BUILD_TYPE = "Model Reference Library"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I$(START_DIR) -I$(START_DIR)/slprj/grt/_sharedutils -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_BUILD_ARGS = -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DMAT_FILE=0 -DONESTEPFCN=1 -DTERMFCN=1 -DMULTI_INSTANCE_CODE=1 -DINTEGER_CODE=0 -DMT=0
DEFINES_CUSTOM = 
DEFINES_IMPLIED = -DTID01EQ=0
DEFINES_STANDARD = -DMODEL=URControl_att -DNUMST=1 -DNCSTATES=0 -DHAVESTDIO -DRT -DUSE_RTMODEL -DUNIX

DEFINES = $(DEFINES_BUILD_ARGS) $(DEFINES_CUSTOM) $(DEFINES_IMPLIED) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)/slprj/grt/_sharedutils/URTrajCalc_ZHbRu9Bu.cpp $(START_DIR)/slprj/grt/_sharedutils/abs_PbMH4joa.cpp $(START_DIR)/slprj/grt/_sharedutils/eps_HLXrD8YB.cpp $(START_DIR)/slprj/grt/_sharedutils/norm_MZOQPbOg.cpp $(START_DIR)/slprj/grt/_sharedutils/norm_UkJeSx98.cpp $(START_DIR)/slprj/grt/_sharedutils/pinv_sd18IsCR.cpp $(START_DIR)/slprj/grt/_sharedutils/rtGetInf.cpp $(START_DIR)/slprj/grt/_sharedutils/rtGetNaN.cpp $(START_DIR)/slprj/grt/_sharedutils/rt_atan2d_snf.cpp $(START_DIR)/slprj/grt/_sharedutils/rt_hypotd_snf.cpp $(START_DIR)/slprj/grt/_sharedutils/rt_nonfinite.cpp $(START_DIR)/slprj/grt/_sharedutils/rt_powd_snf.cpp $(START_DIR)/slprj/grt/_sharedutils/sqrt_t6kvbcYg.cpp $(START_DIR)/slprj/grt/_sharedutils/sum_WaUbR9ig.cpp $(START_DIR)/slprj/grt/_sharedutils/svd_qphS61it.cpp $(START_DIR)/slprj/grt/_sharedutils/xaxpy_LR9VgS5N.cpp $(START_DIR)/slprj/grt/_sharedutils/xaxpy_TDS0cAwV.cpp $(START_DIR)/slprj/grt/_sharedutils/xaxpy_mqdaqMqi.cpp $(START_DIR)/slprj/grt/_sharedutils/xdotc_HuxiQuDO.cpp $(START_DIR)/slprj/grt/_sharedutils/xnrm2_fc6bahkx.cpp $(START_DIR)/slprj/grt/_sharedutils/xnrm2_z6rlskWA.cpp $(START_DIR)/slprj/grt/_sharedutils/xrot_6iHri7if.cpp $(START_DIR)/slprj/grt/_sharedutils/xrotg_a4chrhrN.cpp $(START_DIR)/slprj/grt/_sharedutils/xscal_fEJVUpjd.cpp $(START_DIR)/slprj/grt/_sharedutils/xswap_E3toPKhI.cpp $(START_DIR)/slprj/grt/_sharedutils/const_params.cpp $(START_DIR)/slprj/grt/_sharedutils/ekf_state_jacob_WRvyoYwd.cpp $(START_DIR)/slprj/grt/_sharedutils/mrdivide_helper_D6MymrEr.cpp $(START_DIR)/slprj/grt/_sharedutils/norm_2e9Xj4lM.cpp $(START_DIR)/slprj/grt/_sharedutils/norm_wXO8gvHp.cpp $(START_DIR)/slprj/grt/_sharedutils/mldivide_I8OBiDMa.cpp $(START_DIR)/slprj/grt/_sharedutils/xgetrf_vu1x6Wed.cpp

ALL_SRCS = $(SRCS)

###########################################################################
## OBJECTS
###########################################################################

OBJS = URTrajCalc_ZHbRu9Bu.o abs_PbMH4joa.o eps_HLXrD8YB.o norm_MZOQPbOg.o norm_UkJeSx98.o pinv_sd18IsCR.o rtGetInf.o rtGetNaN.o rt_atan2d_snf.o rt_hypotd_snf.o rt_nonfinite.o rt_powd_snf.o sqrt_t6kvbcYg.o sum_WaUbR9ig.o svd_qphS61it.o xaxpy_LR9VgS5N.o xaxpy_TDS0cAwV.o xaxpy_mqdaqMqi.o xdotc_HuxiQuDO.o xnrm2_fc6bahkx.o xnrm2_z6rlskWA.o xrot_6iHri7if.o xrotg_a4chrhrN.o xscal_fEJVUpjd.o xswap_E3toPKhI.o const_params.o ekf_state_jacob_WRvyoYwd.o mrdivide_helper_D6MymrEr.o norm_2e9Xj4lM.o norm_wXO8gvHp.o mldivide_I8OBiDMa.o xgetrf_vu1x6Wed.o

ALL_OBJS = $(OBJS)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = 

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = 

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CFLAGS += $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CPPFLAGS += $(CPPFLAGS_BASIC)

###########################################################################
## INLINED COMMANDS
###########################################################################

###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build clean info prebuild download execute


all : build
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


prebuild : 


download : build


execute : download


###########################################################################
## FINAL TARGET
###########################################################################

#---------------------------------
# Create a static library         
#---------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS)
	@echo "### Creating static library "$(PRODUCT)" ..."
	$(AR) $(ARFLAGS)  $(PRODUCT) $(OBJS)
	@echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.o : %.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : %.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


URTrajCalc_ZHbRu9Bu.o : $(START_DIR)/slprj/grt/_sharedutils/URTrajCalc_ZHbRu9Bu.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


abs_PbMH4joa.o : $(START_DIR)/slprj/grt/_sharedutils/abs_PbMH4joa.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


eps_HLXrD8YB.o : $(START_DIR)/slprj/grt/_sharedutils/eps_HLXrD8YB.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


norm_MZOQPbOg.o : $(START_DIR)/slprj/grt/_sharedutils/norm_MZOQPbOg.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


norm_UkJeSx98.o : $(START_DIR)/slprj/grt/_sharedutils/norm_UkJeSx98.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


pinv_sd18IsCR.o : $(START_DIR)/slprj/grt/_sharedutils/pinv_sd18IsCR.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


rtGetInf.o : $(START_DIR)/slprj/grt/_sharedutils/rtGetInf.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


rtGetNaN.o : $(START_DIR)/slprj/grt/_sharedutils/rtGetNaN.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


rt_atan2d_snf.o : $(START_DIR)/slprj/grt/_sharedutils/rt_atan2d_snf.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


rt_hypotd_snf.o : $(START_DIR)/slprj/grt/_sharedutils/rt_hypotd_snf.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


rt_nonfinite.o : $(START_DIR)/slprj/grt/_sharedutils/rt_nonfinite.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


rt_powd_snf.o : $(START_DIR)/slprj/grt/_sharedutils/rt_powd_snf.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


sqrt_t6kvbcYg.o : $(START_DIR)/slprj/grt/_sharedutils/sqrt_t6kvbcYg.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


sum_WaUbR9ig.o : $(START_DIR)/slprj/grt/_sharedutils/sum_WaUbR9ig.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


svd_qphS61it.o : $(START_DIR)/slprj/grt/_sharedutils/svd_qphS61it.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


xaxpy_LR9VgS5N.o : $(START_DIR)/slprj/grt/_sharedutils/xaxpy_LR9VgS5N.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


xaxpy_TDS0cAwV.o : $(START_DIR)/slprj/grt/_sharedutils/xaxpy_TDS0cAwV.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


xaxpy_mqdaqMqi.o : $(START_DIR)/slprj/grt/_sharedutils/xaxpy_mqdaqMqi.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


xdotc_HuxiQuDO.o : $(START_DIR)/slprj/grt/_sharedutils/xdotc_HuxiQuDO.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


xnrm2_fc6bahkx.o : $(START_DIR)/slprj/grt/_sharedutils/xnrm2_fc6bahkx.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


xnrm2_z6rlskWA.o : $(START_DIR)/slprj/grt/_sharedutils/xnrm2_z6rlskWA.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


xrot_6iHri7if.o : $(START_DIR)/slprj/grt/_sharedutils/xrot_6iHri7if.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


xrotg_a4chrhrN.o : $(START_DIR)/slprj/grt/_sharedutils/xrotg_a4chrhrN.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


xscal_fEJVUpjd.o : $(START_DIR)/slprj/grt/_sharedutils/xscal_fEJVUpjd.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


xswap_E3toPKhI.o : $(START_DIR)/slprj/grt/_sharedutils/xswap_E3toPKhI.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


const_params.o : $(START_DIR)/slprj/grt/_sharedutils/const_params.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


ekf_state_jacob_WRvyoYwd.o : $(START_DIR)/slprj/grt/_sharedutils/ekf_state_jacob_WRvyoYwd.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


mrdivide_helper_D6MymrEr.o : $(START_DIR)/slprj/grt/_sharedutils/mrdivide_helper_D6MymrEr.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


norm_2e9Xj4lM.o : $(START_DIR)/slprj/grt/_sharedutils/norm_2e9Xj4lM.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


norm_wXO8gvHp.o : $(START_DIR)/slprj/grt/_sharedutils/norm_wXO8gvHp.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


mldivide_I8OBiDMa.o : $(START_DIR)/slprj/grt/_sharedutils/mldivide_I8OBiDMa.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


xgetrf_vu1x6Wed.o : $(START_DIR)/slprj/grt/_sharedutils/xgetrf_vu1x6Wed.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo "### PRODUCT = $(PRODUCT)"
	@echo "### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@echo "### BUILD_TYPE = $(BUILD_TYPE)"
	@echo "### INCLUDES = $(INCLUDES)"
	@echo "### DEFINES = $(DEFINES)"
	@echo "### ALL_SRCS = $(ALL_SRCS)"
	@echo "### ALL_OBJS = $(ALL_OBJS)"
	@echo "### LIBS = $(LIBS)"
	@echo "### MODELREF_LIBS = $(MODELREF_LIBS)"
	@echo "### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@echo "### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@echo "### CFLAGS = $(CFLAGS)"
	@echo "### LDFLAGS = $(LDFLAGS)"
	@echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@echo "### CPPFLAGS = $(CPPFLAGS)"
	@echo "### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@echo "### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@echo "### ARFLAGS = $(ARFLAGS)"
	@echo "### MEX_CFLAGS = $(MEX_CFLAGS)"
	@echo "### MEX_CPPFLAGS = $(MEX_CPPFLAGS)"
	@echo "### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@echo "### MEX_CPPLDFLAGS = $(MEX_CPPLDFLAGS)"
	@echo "### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@echo "### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	$(RM) $(PRODUCT)
	$(RM) $(ALL_OBJS)
	$(ECHO) "### Deleted all derived files."


