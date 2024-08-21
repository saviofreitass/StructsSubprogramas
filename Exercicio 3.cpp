#include <iostream>

using namespace std;

struct Paises{
    int populacao;
    float taxa;
};

int igualarPop(int pop1, float tx1, int pop2, float tx2){
    int anos=0;

    while(pop1 < pop2 || pop1 == pop2){
        pop1 = pop1 + (tx1/100)*pop1;
        pop2 = pop2 + (tx2/100)*pop2;
        anos++;
    }

    return anos;
}

int main(){

    Paises pais1;
    pais1.populacao = 90000000;
    pais1.taxa = 3;

    Paises pais2;
    pais2.populacao = 200000000;
    pais2.taxa = 1.5;

    cout << "Gastara " << igualarPop(pais1.populacao, pais1.taxa, pais2.populacao, pais2.taxa) << " anos\n";

    system("pause");

return 0;
}
