.PHONY: test
test: test-bin
	./test-bin

# Mark `test-bin` as `.PHONY` to force a build from scratch without listing deps.
.PHONY: test-bin
test-bin: test.cpp
	g++ -std=c++11 test.cpp -o test-bin
