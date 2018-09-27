.PHONY: test
test: Test.class
	java Test

# Mark `Test.class` as `.PHONY` to force a build from scratch without listing deps.
.PHONY: Test.class
Test.class: Test.java
	javac $^

.PHONY: clean
clean:
	rm ../**/*.class
