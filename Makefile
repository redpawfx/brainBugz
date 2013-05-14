#//////////////////////////////////////////////////////////////////////////////////
#//// GENERIC LUMA  make file
#///////////////////////////////////////////////////

#/////////////////////////////////
#/// version 1.0
#/// author : johnc
#\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

#
# Include platform specific build settings
#
include ./buildconfig

.SUFFIXES: .cpp .cc .o .so .c .bundle

OUTPUT = ./build/$(OS_ARCH)/

EXT	= so


##  shared Object / plugin
PLUGIN =  brainBugz.$(EXT)

EXTRA_INCUDES =  -I$(MAYA_LOCATION)/include

EXTRA_LIBS =  -L$(MAYA_LOCATION)/lib

COMPILE  = $(CC) -c $(CFLAGS) $(INCLUDES)  $(EXTRA_INCUDES)

.cpp.o:
	$(COMPILE) $< -o $@

plugins: $(PLUGIN)

depend:
	makedepend $(INCLUDES) $(EXTRA_INCUDES) *.cc *.cpp

clean:
	-rm -f ./source/*.o $(OUTPUT)*.so


##################
# Specific Rules #
##################

SOURCES =  ./source/bbUtils.cpp ./source/bbCombineDesiresField.cpp  ./source/bbSteeringDesireField.cpp ./source/pluginMain.cpp


OBJS = $(SOURCES:.cpp=.o)

all: $(SOURCES) $(PLUGIN)

$(PLUGIN): $(OBJS)
	-rm -f $(OUTPUT)$@
	$(LD) -o $(OUTPUT)$@ $(OBJS) $(LIBS) $(EXTRA_LIBS)





