#include <cstdlib>
#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int base, potencia, lado, raiz, cubo, raio;
    float resultado;

    cout << "Esse programa executar� algumas opera��es matem�ticas. \n";
    cout << "Digite dois n�meros, o primeiro ser� a base e o segundo a pot�ncia: \n";
    cin >> base >> potencia;
    resultado = pow(base,potencia);
    cout << "O resultado de: " << base << " elevado a " << potencia << " �: " << resultado << endl;
    cout << "Digite o valor de um lado de um quadrado: \n";
    cin >> lado;
    resultado = pow(lado,2);
    cout << "A �rea do quadrado �: " << resultado << endl;
    cout << "Digite um valor para saber sua raiz quadrada: \n";
    cin >> raiz;
    resultado = sqrt(raiz);
    cout << "A raiz quadrada de " << raiz << " �: " << resultado << endl;
    cout << "Digite o valor de um lado de um cubo: \n";
    cin >> lado;
    resultado = pow(lado,3);
    cout << "A �rea do cubo �: " << resultado << endl;
    cout << "Digite o valor do raio de uma circunfer�ncia: \n";
    cin >> raio;
    resultado = M_PI*(raio*2);
    cout << "A �rea da circunfer�ncia �: " << resultado << endl;

    return 0;
}