#include <iostream>

using namespace std;

int calculaIdade(int idade[]){
  int idadeDias;

  idadeDias = (idade[0] * 365) + (idade[1] * 30) + idade[2];

  return idadeDias;

}

int main(){

    int idade[3];

    cout << "Digite sua idade completa!\n";
    cout << "Primeiramente a quantidade de anos: ";
    cin >> idade[0];
    cout << "Logo em seguida a quantidade de meses(que nao completam um ano): ";
    cin >> idade[1];
    cout << "por fim, a quatidade de dias(que nao completam um mes): ";
    cin >> idade[2];

    cout << "Voce tem: " << calculaIdade(idade) << " dias\n\n";

    system("pause");

return 0;
}
