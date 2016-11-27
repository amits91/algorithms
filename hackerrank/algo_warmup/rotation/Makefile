files := $(shell find . -name "test*.txt")
all: run

clean:
	\rm -rf a.out

compile: clean
	g++ -DDEBUG rotation.cpp -g -std=c++11

${files}: ; ./a.out <$@

run: compile ${files}

.PHONY: ${files}
