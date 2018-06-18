CXX = g++

CXXFLAGS = -Wall -g -std=c++11

OBJECTS = main.o Mp_int.o Mp_clear.o Mp_print.o Mp_uf.o Mem_error.o Mp_error.o\
mp_grow.o mp_zip.o mp_copy.o

main : $(OBJECTS)
	@echo linking $^ ...
	@echo Builded.
	@$(CXX) $(CXXFLAGS) -o main $^

%.o : %.cpp
	@echo compile $<...
	@$(CXX) $(CXXFLAGS) -c -o $@ $<

# clean
.PHONY : clean

clean : 
	-rm $(OBJECTS) main