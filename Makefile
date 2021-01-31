all:
	$(MAKE) -C src $(TARGET)

.PHONY: clean
clean:
	$(MAKE) -C src clean
