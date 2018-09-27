tp1: main.cpp
	g++ main.cpp -o tp1.out

setup:
	sudo apt-get update
	sudo apt-get install cmake -y
	sudo apt-get install libopenblas-dev -y
	sudo apt-get install liblapack-dev -y

