#include <iostream>
#include <locale>
#include <cctype>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");

    char operacao;
    float num1, num2;

    cout << "Digite 'S' para sair do programa" << endl;
    cout << "Escolha a opera��o -> +    -    /    * : " ;
    cin >> operacao;
    operacao = toupper(operacao);
    if(operacao == 'S'){
        return;
    }
    cout << "Digite um n�mero: ";
    cin >> num1;
    cout << "Digite outro n�mero: ";
    cin >> num2;


    switch(operacao){
        case '+':
            cout << "O resultado �: " << num1 + num2;
            break;
        case '-':
            cout << "O resultado �: " << num1 - num2;
            break;
        case '/':
            cout << "O resultado �: " << num1 / num2;
            break;
        case '*':
            cout << "O resultado �: " << num1 * num2;
            break; 
        case 's':
            break;           
        default:
            cout << endl << "Op��o Inv�lida";
    }

    return 0;
}