tp1: main.cpp
	g++ -I eigen/ main.cpp -o tp1.out

run: main.cpp
	g++ -I eigen/ main.cpp -o tp1.out
	./tp1.out	
