CXX = g++

GTEST_DIR = googletest

CXXFLAGS = -Wall -g -std=c++11 -pthread
CPPFLAGS += -isystem $(GTEST_DIR)/include

OBJECTS = main.o ../Mp_int.o ../Mp_clear.o ../Mp_print.o ../Mp_uf.o \
../Mem_error.o  ../Mp_error.o ../mp_grow.o ../mp_zip.o ../mp_copy.o

GTEST_HEADERS = $(GTEST_DIR)/include/gtest/*.h \
                $(GTEST_DIR)/include/gtest/internal/*.h

GTEST_SRCS_ = $(GTEST_DIR)/src/*.cc $(GTEST_DIR)/src/*.h $(GTEST_HEADERS)

TESTS = main

all : $(TESTS)

gtest-all.o : $(GTEST_SRCS_)
	@echo creating gtest frame ...
	@$(CXX) $(CPPFLAGS) -I$(GTEST_DIR) $(CXXFLAGS) -c \
            $(GTEST_DIR)/src/gtest-all.cc

gtest_main.o : $(GTEST_SRCS_)
	@echo creating gtest frame ...
	@$(CXX) $(CPPFLAGS) -I$(GTEST_DIR) $(CXXFLAGS) -c \
            $(GTEST_DIR)/src/gtest_main.cc

gtest.a : gtest-all.o
	@$(AR) $(ARFLAGS) $@ $^

gtest_main.a : gtest-all.o gtest_main.o
	@$(AR) $(ARFLAGS) $@ $^

main : $(OBJECTS) gtest_main.a 
	@echo linking $^ ...
	@echo Builded.
	@$(CXX) $(CPPFLAGS) $(CXXFLAGS) -lpthread -o main $^ gtest_main.a

%.o : %.cpp $(GTEST_HEADERS)
	@echo compile $<...
	@$(CXX) $(CPPFLAGS) $(CXXFLAGS) -I gtest -c -o $@ $<


# clean
.PHONY : clean

clean : 
	@-rm ../$(OBJECTS) main gtest_main.a gtest_main.o gtest-all.o main.o