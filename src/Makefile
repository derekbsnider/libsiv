CXX=g++
CXXFLAGS=-O3 -std=c++11 -Wall
HFILES	= siv.h tokens.h datadef.h
OFILES	= lexer.o parser.o siv.o
INCDIR	= ../include
BINDIR	= ../bin
LIBDIR	= ../lib
OBJDIR	= ../obj
DEFINES	= -I$(INCDIR)
LIBS	=
DEPENDS	= $(patsubst %,$(INCDIR)/%,$(HFILES))
OBJECTS = $(patsubst %,$(OBJDIR)/%,$(OFILES))

all:
	make ../bin/siv
clean:
	rm $(OBJECTS)

../bin/siv: $(OBJECTS)
	$(CXX) -o $@ $^ $(CXXFLAGS) $(DEFINES) $(LIBS)

$(OBJDIR)/%.o: %.cpp $(DEPENDS)
	$(CXX) -c -o $@ $(CXXFLAGS) $(DEFINES) $<
