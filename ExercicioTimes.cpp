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
    cout << "Digite - C - São Paulo" << endl;
    cout << "Digite - D - Santos" << endl;
    cin >> escolha;

    escolha = toupper(escolha);

    switch(escolha){
        case 'A':
            cout << "O Palmeiras é o maior campeão do Campeonato Brasileiro: são nove títulos." << endl;
            break;
        case 'B':
            cout << "O Corinthians foi o primeiro campeão da Copa do Mundo de Clubes da Fifa. Em 2000, jogando na" << endl << "condição de campeão nacional do país-sede, derrotou o Vasco no Maracanã nos pênaltis e levou o título." << endl;
            break;
        case 'C':
            cout << "o Tricolor é o único brasileiro a ter sido três vezes campeão mundial." << endl;
            break;
        case 'D':
            cout << "Pelé já foi goleiro! Em 1963, o Santos vencia o Grêmio por 4 x 3 pela Taça Brasil quando o goleiro" << endl << "Gilmar foi expulso. Sem poder fazer alterações, o Peixe precisou improvisar Pelé no gol. E o Rei" << endl << "deu conta do recado: o jogo terminou 4 x 3." << endl;
            break;

        default:
            cout << "Opcao Inválida" << endl;
            break;

    };

    return 0;
}