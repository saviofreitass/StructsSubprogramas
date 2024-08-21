#include <iostream>

using namespace std;

void verificaCategoria(int idadeUser){
    if(idadeUser >=5 && idadeUser <=7){
        cout<< "Categoria infantil A";
    }else if(idadeUser >=8 && idadeUser <=10){
        cout<< "Categoria infantil B";
    }else if(idadeUser >=11 && idadeUser <=13){
        cout<< "Categoria juvenil A";
    }else if(idadeUser >=14 && idadeUser <=17){
        cout<< "Categoria juvenil B";
    }else if(idadeUser >=18){
        cout<< "Categoria adulto";
    }else{
        cout << "Sem idade suficiente para competir";
    }
}

int main(){

    int idade;

    cout << "Digite sua idade: ";
    cin >> idade;

    verificaCategoria(idade);
    cout<<"\n\n";
    system("pause");

return 0;
}
