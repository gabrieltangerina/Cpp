#include <iostream> 
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    char nome[20];
    float salario, imposto;

    cout << "Informe seu nome: ";
    cin >> nome;
    cout << "Informe seu salário: ";
    cin >> salario;

    if(salario < 2000){
        cout << nome << ", você tem isenção de pagamento do IRPF";
    } else if(salario >= 2000 && salario < 3000){
        imposto = salario * 0.15;
        cout << nome << ", você deverá pagar R$" << imposto << " de IRPF";
    } else if(salario >= 3000 && salario < 5000){
        imposto = salario * 0.20;
        cout << nome << ", você deverá pagar R$" << imposto << " de IRPF";
    }else if(salario >= 5000 && salario < 10000){
        imposto = salario * 0.23;
        cout << nome << ", você deverá pagar R$" << imposto << " de IRPF";
    } else if(salario >= 10000){
        imposto = salario * 0.27;
        cout << nome << ", você deverá pagar R$" << imposto << " de IRPF";
    } else{
        cout << "Ops, ocorreu um ERRO!";
    }


    return 0;
}