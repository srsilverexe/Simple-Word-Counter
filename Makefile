TARGET=WordFrequencyChecker
CXX=g++
LD=g++
OBJS=src/main.cpp

WordFrequencyChecker:$(OBJS)
	$(LD) -o $(TARGET) $(OBJS)
install:
	@install WordFrequencyChecker /usr/local/bin/WordFrequencyChecker
clear:
	rm -rf *.o
