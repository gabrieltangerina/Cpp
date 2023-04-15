#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int num, quantidade = 0;

   do{
        cout << "Digite um número: ";
        cin >> num;
        quantidade = quantidade + 1;
   }while(num != 0);

    quantidade = quantidade - 1;
    cout << "Foram digitados: " << quantidade << " números";

    return 0;
}