#include <iostream>
#include <locale>
#include <cctype>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");

    char operacao;
    float num1, num2;

    cout << "Digite 'S' para sair do programa" << endl;
    cout << "Escolha a operação -> +    -    /    * : " ;
    cin >> operacao;
    operacao = toupper(operacao);
    if(operacao == 'S'){
        return;
    }
    cout << "Digite um número: ";
    cin >> num1;
    cout << "Digite outro número: ";
    cin >> num2;


    switch(operacao){
        case '+':
            cout << "O resultado é: " << num1 + num2;
            break;
        case '-':
            cout << "O resultado é: " << num1 - num2;
            break;
        case '/':
            cout << "O resultado é: " << num1 / num2;
            break;
        case '*':
            cout << "O resultado é: " << num1 * num2;
            break; 
        case 's':
            break;           
        default:
            cout << endl << "Opção Inválida";
    }

    return 0;
}