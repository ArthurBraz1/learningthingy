CC := gcc
CFLAGS := -Wall -Wextra -std=c11
# Link with math library
LDLIBS += -lm

# Pattern rule: build executable from single C source with same name
%: %.c
	$(CC) $(CFLAGS) $< -o $@ $(LDLIBS)

.PHONY: clean
clean:
	rm -f *.o slide2problem1 slide2problem2 slide2problem3 slide3problem1 slide3problem4 slide3problem5 calculator thing
