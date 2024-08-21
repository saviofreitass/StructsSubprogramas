#include <iostream>
#include <string>

using namespace std;

struct Agenda{
    char nome[100];
    int matricula;
};

int main(){

    int i=0 , o;
    Agenda aluno[50];

    while(i<50){
        fflush(stdin);
        cout << "\nDigite o nome do aluno: ";
        cin.getline(aluno[i].nome,100);

        cout << "Digite a matricula do aluno: ";
        cin >> aluno[i].matricula;

        cout << "\nPara adicionar mais alunos digite 1, para sair digite 0: ";
        cin >> o;

        if(o==0){
            break;
        }

        i++;
    }

    for(int p=0; p<i+1; p++){
        cout << "Nome do aluno: " << aluno[p].nome << "\nMatricula: " << aluno[p].matricula << "\n\n";
    }

    system("pause");

return 0;
}
