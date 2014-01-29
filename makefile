.PHONY: all clean
main: bin/main
bin/main: src/main.cpp AIHouse.o
	mkdir -p bin
	g++ -o bin/main src/main.cpp AIHouse.o 
AIHouse.o: src/AIHouse.cpp include/AIHouse.h
	g++ -c src/AIHouse.cpp
clean:
	rm *.o
	rm -rf bin
