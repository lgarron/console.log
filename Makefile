LANGUAGES =
LANGUAGES += cpp
LANGUAGES += go
LANGUAGES += js

.PHONY: test
test: $(LANGUAGES)

.PHONY: $(LANGUAGES)
$(LANGUAGES):
	@echo "----------------"
	cd $@/test; make test
