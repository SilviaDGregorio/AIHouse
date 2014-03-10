.PHONY: all clean
main: bin/main
bin/main: src/main.cpp AIHouse.o Components.o
	mkdir -p bin
	g++ -o bin/main src/main.cpp AIHouse.o Components.o -O0 -std=c++0x -g -Wall
AIHouse.o: src/AIHouse.cpp include/AIHouse.h
	g++ -c src/AIHouse.cpp -O0 -std=c++0x -g -Wall
Components.o: src/Components.cpp include/Components.h
	g++ -c src/Components.cpp -O0 -std=c++0x -g -Wall
clean:
	rm *.o
	rm -rf bin
