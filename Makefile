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
	cd $@/test; make test
