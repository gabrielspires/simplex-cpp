#include <iostream> // cout
#include <fstream> // FILE
#include <Eigen/Dense> // Biblioteca de álgebra linear

using namespace Eigen;
using namespace std;

// 2 			Nº de variaveis
// 2			Nº de restrições (exceto as de nao negatividade)
// 1 0			Indica se as variáveis são não negativas ou livres (x>=0 ou sem restrição de nao negatividade)
// 1 1			Coeficientes da função objetivo
// 1 -1 <= 2	Restrições
// 1 1 >= 1		Restrições

// (a)  Ler a entrada
// (b)  Transforma-la em FPI
// (c)  Rodar a PL auxiliar para encontrar uma base e verificar se o problema é viável
// (este passo pode ser pulado caso você identifique uma base ́obvia).
// (d)  Se o problema for viável, rodar o Simplex e ou encontrar a solução ́otima, ou
// verificar que o problema é ilimitado.
// (e)  Ao final, deve escrever um arquivo de sa ́ıda. Ser ́a dado 1 ponto extra para quem
// incluir certificados no arquivo de saída.

void check_args(int argc){ if (argc < 2) { cout << "# de args inválido\n"; exit(0); } }

MatrixXf read_input(string inFile){
	ifstream entrada(inFile); // Arquivo com a matriz de entrada

	int numVariaveis;
	int numRestricoes;

	entrada >> numVariaveis >> numRestricoes;

	// Lê as variáveis livres ou não-negativas
	for (int i = 0; i < numVariaveis; i++) {
		
	}
	// Lê a função objetiva
	for (int i = 0; i < numVariaveis; i++) {
		
	}
}

int main(int argc, char const *argv[]) {
	check_args(argc); // Verifica se a pessoa entrou com todos os argumentos

	
	ofstream saida(argv[2]);   // Arquivo onde será gravada a saída do programa

	read_input(argv[1]);

	
	// string i;
	// while(entrada >> i){
	// 	cout << i;
	// 	if (i == "<=") cout << "menor igual";
	// 	if (i == ">=") cout << "maior igual";
	// }

	MatrixXd m = MatrixXd::Random(3,3);
	m = (m + MatrixXd::Constant(3,3,1.2));
	// m.resize(m.rows(), m.cols()+1);
	cout << "m =" << endl << m << endl;
	VectorXd v(3);
	v << 1, 2, 3;
	cout << "v =" << endl << v << endl;
	// cout << m+v << endl;
}
