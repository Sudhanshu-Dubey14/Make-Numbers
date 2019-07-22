
.PHONY : both functions.out numbers.out clean

# Creating executables

both : functions.out numbers.out

functions.out :
	cd build && make $@

numbers.out :
	$(MAKE) $@ -C build

# Cleaning

clean : 
	$(MAKE) $@ -C build

