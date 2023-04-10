#include <iostream>

using namespace std;

float n1, n2; // Variáveis globais

int main(){

    float n3, n4; // Variáveis locais 
    float res;

    n1 = 9;
    n2 = 5;
    n3 = 2;
    n4 = 7;

    res = (n1 + n2 + n4) * n3;

    cout << "A soma de todas as variáveis: " << res << endl;
    cout << "O valor de n1, no escopo global é: " << n1 << endl;

    return 0;
}

int main2(){
    // cout << "O valor da variável n3, que está no escopo da função main é: " << n3 << endl; 
    // Não é possível pegar o valor da variável n3 pois ela está no escopo da função main apenas.

    return 0;
}