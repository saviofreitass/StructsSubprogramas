#include <iostream>

using namespace std;

double calculoPesoIdeal(int alturaUser, char sexoUser){
    double pesoIdeal=0;

    if(sexoUser == 'M' || sexoUser == 'm'){
        pesoIdeal = 72.7 * alturaUser/100 - 58;
    }else if(sexoUser =='F' || sexoUser == 'f'){
        pesoIdeal = 62.1 * alturaUser/100 - 44.7;
    }else{
        cout << "Sexo invalido!";
    }

    return pesoIdeal;
}

int main(){
    int altura;
    char sexo;

    cout << "Digite sua altura em cm: ";
    cin >> altura;
    cout << "Digite seu sexo, M para Masculino e F para Feminino: ";
    cin >> sexo;

    if(calculoPesoIdeal(altura,sexo)){
        cout << "Seu peso ideal eh: " << calculoPesoIdeal(altura, sexo)<< "Kg\n\n";
    }else {
        cout << "\nTente novamente!\n\n";
    }

    system("pause");
return 0;
}
