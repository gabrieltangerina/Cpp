#include <iostream>
#include <locale>
#include <cctype>

using namespace std;


int main(){
    setlocale(LC_ALL, "Portuguese");

    char escolha;

    cout << "Escolha um time" << endl;
    cout << "Digite - A - Palmeiras" << endl;
    cout << "Digite - B - Corinthians" << endl;
    cout << "Digite - C - S�o Paulo" << endl;
    cout << "Digite - D - Santos" << endl;
    cin >> escolha;

    escolha = toupper(escolha);

    switch(escolha){
        case 'A':
            cout << "O Palmeiras � o maior campe�o do Campeonato Brasileiro: s�o nove t�tulos." << endl;
            break;
        case 'B':
            cout << "O Corinthians foi o primeiro campe�o da Copa do Mundo de Clubes da Fifa. Em 2000, jogando na" << endl << "condi��o de campe�o nacional do pa�s-sede, derrotou o Vasco no Maracan� nos p�naltis e levou o t�tulo." << endl;
            break;
        case 'C':
            cout << "o Tricolor � o �nico brasileiro a ter sido tr�s vezes campe�o mundial." << endl;
            break;
        case 'D':
            cout << "Pel� j� foi goleiro! Em 1963, o Santos vencia o Gr�mio por 4 x 3 pela Ta�a Brasil quando o goleiro" << endl << "Gilmar foi expulso. Sem poder fazer altera��es, o Peixe precisou improvisar Pel� no gol. E o Rei" << endl << "deu conta do recado: o jogo terminou 4 x 3." << endl;
            break;

        default:
            cout << "Opcao Inv�lida" << endl;
            break;

    };

    return 0;
}