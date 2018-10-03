#include <iostream> // cout
#include <fstream> // FILE
#include <Eigen/Dense> // Biblioteca de álgebra linear

using namespace Eigen;
using namespace std;

void check_args(int argc){ if (argc < 2) { cout << "# de args inválido\n"; exit(0); } }

int main(int argc, char const *argv[]) {
	check_args(argc); // Verifica se a pessoa entrou com todos os argumentos

	ifstream entrada(argv[1]); // Arquivo com a matriz de entrada
	ofstream saida(argv[2]);   // Arquivo onde será gravada a saída do programa

	int numVariaveis;
	int numRestricoes;

	entrada >> numVariaveis >> numRestricoes;

	for (int i = 0; i < numVariaveis; i++) {
		
	}

	while(entrada >> i){
		cout << i;
		if (i == "<=") cout << "menor igual";
		if (i == ">=") cout << "maior igual";
	}

	MatrixXd m = MatrixXd::Random(3,3);
	m = (m + MatrixXd::Constant(3,3,1.2));
	cout << "m =" << endl << m << endl;
	VectorXd v(3);
	v << 1, 2, 3;
	cout << "v =" << endl << v << endl;
}
