CXX=g++
CXXFLAGS+=-g
CXXFLAGS+=-Wextra
CXXFLAGS+=-pedantic
CXXFLAGS+=-Wall
SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
MAIN = wyjatki

$(MAIN): $(OBJ)
		$(CXX) $? -o $@

$(OBJ): $(SRC)
		$(CXX) $(CXXFLAGS) -c $*.cpp -o $@


clean:
	rm -f $(MAIN) $(OBJ)


val:
	valgrind ./$(MAIN)