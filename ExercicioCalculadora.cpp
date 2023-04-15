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
        cout << "Escolha a opera��o: +  -  *  /: ";
        cin >> operacao;
        operacao = toupper(operacao);

        switch(operacao){
            case '+':
                cout << "Soma" << endl;
                cout << "Digite um n�mero: ";
                cin >> num1;
                cout << "Digite outro n�mero: ";
                cin >> num2;
                resultado = num1 + num2;
                cout << "O resultado �: " << resultado << endl;
                break;
            case '-':
                cout << "Subtra��o" << endl;
                cout << "Digite um n�mero: ";
                cin >> num1;
                cout << "Digite outro n�mero: ";
                cin >> num2;
                resultado = num1 - num2;
                cout << "O resultado �: " << resultado << endl;
                break;
            case '/':
                cout << "Divis�o" << endl;
                cout << "Digite um n�mero: ";
                cin >> num1;
                cout << "Digite outro n�mero: ";
                cin >> num2;
                if(num2 == 0){
                    cout << "ERRO na divis�o" << endl;
                }else{
                    resultado = num1 / num2;
                    cout << "O resultado �: " << resultado << endl;
                }
                break;
            case '*':
                cout << "Multiplica��o" << endl;
                cout << "Digite um n�mero: ";
                cin >> num1;
                cout << "Digite outro n�mero: ";
                cin >> num2;
                resultado = num1 * num2;
                cout << "O resultado �: " << resultado << endl;
                break;
            case 'S':
                cout << "Programa encerrado!";
                break;
            default:
                cout << "Op��o inv�lida!" << endl;
        }
    }while(operacao != 'S');


    return 0;
}