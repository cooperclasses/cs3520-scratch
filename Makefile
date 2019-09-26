PROGRAMS=scratch valgrind_uninit valgrind_invalid valgrind_return gdb_zero gdb_bounds gdb_loop gdb_fact gdb_objects gcov_test gcov_evenodd gprof_test gprof_vector

CXXFLAGS=-std=c++11
LDFLAGS=-std=c++11

## for gdb or valgrind
CXXFLAGS:=$(CXXFLAGS) -O0 -ggdb -fno-inline
LDFLAGS:=$(LDFLAGS)

## for gcov
#CXXFLAGS:=$(CXXFLAGS) -O0 -fprofile-arcs -ftest-coverage
#LDFLAGS:=$(LDFLAGS) -fprofile-arcs

## for gprof
#CXXFLAGS:=$(CXXFLAGS) -O0 -ggdb -pg
#LDFLAGS:=$(LDFLAGS) -pg

all: $(PROGRAMS)

$(PROGRAMS): %: %.o
	g++ $(LDFLAGS) $< -o $@

%.o: %.cpp Makefile
	g++ $(CXXFLAGS) -c $< -o $@

clean:
	rm -f log.txt *~ *.o $(PROGRAMS) *.gcda *.gcno *.gcov gmon.out
