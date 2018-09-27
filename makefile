tp1: main.cpp
	g++ main.cpp -o tp1.out

setup:
	# Atualiza os repositorios do linux
	sudo apt-get update
	# Instala as bibliotecas necessárias para rodar o Armadillo (numpy do C++)
	sudo apt-get install libopenblas-dev -y
	sudo apt-get install liblapack-dev -y
	sudo apt-get install libarmadillo-dev -y

