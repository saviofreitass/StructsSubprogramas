#include <iostream>

using namespace std;

int maiorNumero(int vetor[]){
    int maior = vetor[0];

    for(int i=0;i<3; i++){
        if(vetor[i]>maior){
            maior = vetor[i];
        }
    }
    return maior;
}

int main(){

    int valor[3];

    for(int i = 0; i<3; i++){
        cout << "\nDigite o valor " << i+1 << ": ";
        cin >> valor[i];
    }

    cout <<"\nO maior valor eh: " << maiorNumero(valor)<< endl;

    system("pause");

}
