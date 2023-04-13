#include <iostream>

using namespace std;


int main(){
    int escolha;

    cout << "Escolhar um time" << endl;
    cout << "Digite - 1 - Palmeiras" << endl;
    cout << "Digite - 2 - Corinthians" << endl;
    cout << "Digite - 3 - Sao Paulo" << endl;
    cout << "Digite - 4 - Santos" << endl;
    cin >> escolha;


    switch(escolha){
        case 1:
            cout << "Curiosidade Palmeiras" << endl;
            break;
        case 2:
            cout << "Curiosidade Corinthians" << endl;
            break;
        case 3:
            cout << "Curiosidade São Paulo" << endl;
            break;
        case 4:
            cout << "Curiosidade Santos" << endl;
            break;

        default:
            cout << "Opcao Invalida" << endl;
            break;

    };

    return 0;
}