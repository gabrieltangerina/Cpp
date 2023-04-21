#include <cstdlib>
#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int base, potencia, lado, raiz, cubo, raio;
    float resultado;

    cout << "Esse programa executará algumas operações matemáticas. \n";
    cout << "Digite dois números, o primeiro será a base e o segundo a potência: \n";
    cin >> base >> potencia;
    resultado = pow(base,potencia);
    cout << "O resultado de: " << base << " elevado a " << potencia << " é: " << resultado << endl;
    
    cout << "Digite o valor de um lado de um quadrado: \n";
    cin >> lado;
    resultado = pow(lado,2);
    cout << "A área do quadrado é: " << resultado << endl;
    
    cout << "Digite um valor para saber sua raiz quadrada: \n";
    cin >> raiz;
    resultado = sqrt(raiz);
    cout << "A raiz quadrada de " << raiz << " é: " << resultado << endl;
    
    cout << "Digite o valor de um lado de um cubo: \n";
    cin >> lado;
    resultado = pow(lado,3);
    cout << "A área do cubo é: " << resultado << endl;
    
    cout << "Digite o valor do raio de uma circunferência: \n";
    cin >> raio;
    resultado = M_PI*(raio*2);
    cout << "A área da circunferência é: " << resultado << endl;

    return 0;
}