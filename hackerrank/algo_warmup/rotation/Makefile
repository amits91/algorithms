all: run

files := $(shell find . -name test*.txt)
.PHONY: ${files}
${files}: ; ./a.out <$@
compile:
	g++ rotation.cpp -g -std=c++11
run: compile ${files}
