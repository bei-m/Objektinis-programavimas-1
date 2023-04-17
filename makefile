main: v1.o
	g++ -o prog myfunc.cpp v1.cpp -O3
func:
	g++ -g myfunc.cpp
clean: 
	rm *.o prog
	rm *.txt
del:
	- rm *\(v1\).txt
	- rm *\(v2\).txt
	- rm *\(l1\).txt
	- rm *\(l2\).txt
	- rm *\(d1\).txt
	- rm *\(d2\).txt