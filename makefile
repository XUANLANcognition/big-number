CXX = g++
CXXFLAGS = -Wall -g -std=c++11

main : main.o Mp_int.o Mp_clear.o Mp_print.o Mp_uf.o Mem_error.o Mp_error.o
	$(CXX) $(CXXFLAGS) -o main main.o Mp_int.o Mp_clear.o Mp_print.o Mp_uf.o \
	Mem_error.o Mp_error.o

main.o : main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

Mp_int.o : Mp_int.cpp
	$(CXX) $(CXXFLAGS) -c Mp_int.cpp

Mp_clear.o : Mp_clear.cpp
	$(CXX) $(CXXFLAGS) -c Mp_clear.cpp

Mp_print.o : Mp_print.cpp
	$(CXX) $(CXXFLAGS) -c Mp_print.cpp

Mp_uf.o : Mp_uf.cpp
	$(CXX) $(CXXFLAGS) -c Mp_uf.cpp

Mem_error.o : Mem_error.cpp
	$(CXX) $(CXXFLAGS) -c Mem_error.cpp

Mp_error.o : Mp_error.o
	$(CXX) $(CXXFLAGS) -c Mp_error.cpp

clean : 
	rm *.o main