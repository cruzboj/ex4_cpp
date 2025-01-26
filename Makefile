OBJ = DragonGotchi.hpp MagicalException.hpp Magicalpet.hpp PhoenixGotchi.hpp ReadWriteToFile.hpp

run: prog
	./prog

prog: main.o ReadWriteToFile.o DragonGotchi.o PhoenixGotchi.o
	g++ *.o -o prog

main.o: main.cpp $(OBJS)
	g++ -c main.cpp

main.o: main.cpp
	g++ -c main.cpp 

ReadWriteToFile.o: ReadWriteToFile.cpp
	g++ -c ReadWriteToFile.cpp

DragonGotchi.o: DragonGotchi.cpp
	g++ -c DragonGotchi.cpp

PhoenixGotchi.o: PhoenixGotchi.cpp
	g++ -c PhoenixGotchi.cpp

# remove saved files
clean:
	rm -f *.o prog *.txt