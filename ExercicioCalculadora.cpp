#include <iostream>
#include <locale>
#include <cctype>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    char operacao;
    float num1, num2, resultado;

    do{
        cout << "Digite S para encerrar o programa!" << endl;
        cout << "Escolha a operação: +  -  *  /: ";
        cin >> operacao;
        operacao = toupper(operacao);

        switch(operacao){
            case '+':
                cout << "Soma" << endl;
                cout << "Digite um número: ";
                cin >> num1;
                cout << "Digite outro número: ";
                cin >> num2;
                resultado = num1 + num2;
                cout << "O resultado é: " << resultado << endl;
                break;
            case '-':
                cout << "Subtração" << endl;
                cout << "Digite um número: ";
                cin >> num1;
                cout << "Digite outro número: ";
                cin >> num2;
                resultado = num1 - num2;
                cout << "O resultado é: " << resultado << endl;
                break;
            case '/':
                cout << "Divisão" << endl;
                cout << "Digite um número: ";
                cin >> num1;
                cout << "Digite outro número: ";
                cin >> num2;
                if(num2 == 0){
                    cout << "ERRO na divisão" << endl;
                }else{
                    resultado = num1 / num2;
                    cout << "O resultado é: " << resultado << endl;
                }
                break;
            case '*':
                cout << "Multiplicação" << endl;
                cout << "Digite um número: ";
                cin >> num1;
                cout << "Digite outro número: ";
                cin >> num2;
                resultado = num1 * num2;
                cout << "O resultado é: " << resultado << endl;
                break;
            case 'S':
                cout << "Programa encerrado!";
                break;
            default:
                cout << "Opção inválida!" << endl;
        }
    }while(operacao != 'S');


    return 0;
}