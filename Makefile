EXENAME = ana

OBJS = main.o BelleAna.o t1.o

CXX           = g++
ROOTINCS      = $(shell root-config --cflags)
ROOTLIBS      = $(shell root-config --glibs)
CXXFLAGS      = -g -Wall -fPIC $(ROOTINCS)

all: $(OBJS)
	$(CXX) -o $(EXENAME) $(OBJS) $(ROOTLIBS)

%.o:%.cxx
	$(CXX) $(CXXFLAGS) -c $< -o $@

%.o:%.C
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o $(EXENAME) *~

