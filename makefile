.PHONY : test
main :
		cd build ; make main

.PHONY : clean
clean :
		cd build ; make clean

.PHONY : package
package :
		cd build ; make package
