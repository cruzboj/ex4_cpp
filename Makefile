OBJ = DragonGuchi.hpp MagicalException.hpp Magicalpet.hpp PhoenixGotchi.hpp

run: prog
	./prog

prog: main.o
	g++ *.o -o prog

main.o: main.cpp $(OBJS)
	g++ -c main.cpp

main.o: main.cpp
	g++ -c main.cpp 

clean:
	rm -f *.o prog