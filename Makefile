LANGUAGES =
LANGUAGES += cpp
LANGUAGES += go
LANGUAGES += java
LANGUAGES += js
LANGUAGES += julia
LANGUAGES += mathematica
LANGUAGES += python
LANGUAGES += ruby

.PHONY: test
test: $(LANGUAGES)

.PHONY: $(LANGUAGES)
$(LANGUAGES):
	@echo "----------------"
	@# The leading dash ignores failures; needed to let `make test` keep going
	@# after a language failure.
	-cd $@/test; time make test
