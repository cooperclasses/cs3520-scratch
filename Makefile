PROGRAMS=scratch valgrind_uninit valgrind_invalid valgrind_return gdb_zero gdb_bounds gdb_loop gdb_fact gdb_objects gcov_test gcov_evenodd callgrind_test callgrind_vector

CXXFLAGS=-std=c++11 -Og -ggdb -fno-inline -Wall # -Werror -pedantic-errors
LDFLAGS=-std=c++11 -Og -ggdb

## for gcov
#CXXFLAGS:=$(CXXFLAGS) -O0 -g -fprofile-arcs -ftest-coverage
#LDFLAGS:=$(LDFLAGS) -fprofile-arcs

all: $(PROGRAMS)

$(PROGRAMS): %: %.o
	g++ $(LDFLAGS) $< -o $@

%.o: %.cpp Makefile
	g++ $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf test.log *~ *.o *.dSYM $(PROGRAMS) *.gcda *.gcno *.gcov callgrind.out.*
