#
# GNU make manual
# http://www.gnu.org/software/make/manual/make.html
#


# The following two lines force the standard make to recognize the 
# Objective-C .m suffix.
.SUFFIXES: .o .m
.m.o: ; $(COMPILE) $<


objects = main.o WinHelper.o
#objects = main.o 

EXENAME=lilac
CC = gcc
CFLAGS = -g

INCLUDES=-I/GNUstep/System/Library/Headers -I../src
DLL_LIB_DIR=-L/GNUstep/System/Library/Libraries
LIBS=$(DLL_LIB_DIR) -lobjc -lgnustep-base

COMPILEOPTS=-Wno-import -fconstant-string-class=NSConstantString
LINKOPTS=-mno-cygwin -fconstant-string-class=NSConstantString

LINK= gcc $(LIBS) -o
COMPILE= gcc $(INCLUDES) -c $(COMPILEOPTS)

vpath %.m ../src:../src/mondoWin32
vpath %.h ../src:../src/mondoWin32



.PHONY : main
main : $(objects)
		echo $(LINK) $(EXENAME) $(LINKOPTS) $(objects) -lobjc -lgnustep-base
		$(LINK) $(EXENAME) $(LINKOPTS) $(objects) -lobjc -lgnustep-base


main.o : main.m

WinHelper.o : WinHelper.h WinHelper.m



.PHONY : clean
clean :
		rm *.o $(EXENAME).exe


