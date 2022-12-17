CXX=g++

CFLAGS= -std=c++11 -O2 -Wall -Werror -Wextra

DEPS = util.h
OBJ = coffeemachine.o util.o

%.o: %.cpp $(DEPS) 
	$(CXX) -c -o $@ $< $(CFLAGS)

coffeemachine: $(OBJ)
	$(CXX) -o $@ $^ $(CFLAGS)

.PHONY: clean
clean:
	rm *.o && rm coffeemachine

