CC=gcc
CXX=g++
RM=/bin/rm -f

TARGETS = tempconv

all:: tempconv

tempconv:
	$(CXX) -o $@ tempconv.cpp

clean:
	$(RM) $(TARGETS)
