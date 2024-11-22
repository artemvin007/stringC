
CC=gcc 
CFLAGS=-Wall -Werror -Wextra -g -std=c11 
LFLAGS=-lcheck -lpthread -pthread -lm 
SRC=$(wildcard *.c) 
OBJ=$(patsubst %.c, %.o, $(SRC)) 
LIBNAME=s21_string.a
TEST=tests/*test.c


ifeq ($(shell uname -s),Linux)
	LFLAGS += -lsubunit -lgcov
endif

all: gcov_report

s21_string.a: $(OBJ) 
	ar rcs $@ $^

test: s21_string.a
	$(CC) $(CFLAGS) $(TEST) $^ $(LFLAGS) -o $@ 
	./$@

%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

gcov_report: s21_string.a
	$(CC) $(CFLAGS) --coverage $(TEST) $^ $(LFLAGS) -o $@ 
	./$@
	lcov -t "test" -o test_report.info -c -d .
	genhtml -o report test_report.info
	open report/index.html

format:
	cp ../materials/linters/.clang-format .
	clang-format -i *.c *.h tests/*.c tests/*.h
	rm .clang-format

clean: 
	rm -rf *.o s21_string.a test *.info gcov* ./*.gcda ./*.gcno report

leaks: clean test
	clear
ifeq ($(shell uname -s), Linux)
	valgrind --tool=memcheck --leak-check=yes ./test
else
	leaks -atExit -- ./test 
endif
