#include <iostream>

using namespace std;

double FparaC(double tempF){
    double tempC = 5.0/9.0*(tempF-32);

    return tempC;
}

int main(){

    for(int i=1; i<=100; i++){
        cout<< i << " graus Fahrenheit eh igual a " << FparaC(i) << " graus Celsius.\n";
    }

    system("pause");

return 0;
}
