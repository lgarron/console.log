LANGUAGES =
LANGUAGES += cpp
LANGUAGES += go
LANGUAGES += js
LANGUAGES += julia
LANGUAGES += python
LANGUAGES += ruby

.PHONY: test
test: $(LANGUAGES)

.PHONY: $(LANGUAGES)
$(LANGUAGES):
	@echo "----------------"
	cd $@/test; make test
