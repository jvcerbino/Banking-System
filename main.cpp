#include <iostream>
#include "Banco.hpp"
#include <cstring>
#include <iomanip>
#include "ContaBancaria.hpp"

using namespace std;

int main(){
    Banco banco1;
    char acao;
    int id, rec;
    float valor;
    string nomeid;

    banco1.construtor();

    while(acao != 'T'){
        cin >> acao;
        switch(acao){

            case 'C':
            cin >> id >> nomeid;
            if(banco1.criada(id, nomeid)){
                cout << "conta criada" << endl;
            }
            else{
                cout << "ERRO: conta repetida" << endl;
            }
            break;

            case 'D':
            cin >> id >> valor;
            if(banco1.busca(id) != nullptr){
                banco1.busca(id)->deposito(valor);
                cout << "deposito efetuado" << endl;
            }
            else{
                cout << "ERRO: conta inexistente" << endl;
            }
            break;

            case 'S':
            cin >> id >> valor;
            if(banco1.busca(id) != nullptr){
                banco1.busca(id)->saque(valor);
                cout << "saque efetuado" << endl;
            }
            else{
                cout << "ERRO: conta inexistente" << endl;
            }
            break;

            case 'P':
            cin >> id >> rec >> valor;
            if(banco1.busca(id) != nullptr && banco1.busca(rec) != nullptr){
                banco1.busca(id)->pix(banco1.busca(rec), valor);
                cout << "pix efetuado" << endl;
            }
            else{
                 cout << "ERRO: conta inexistente" << endl;
            }
            break;

            case 'I':
            banco1.imprimeBanco();
            break;

            default:
            break;

        }
    }

    int i = 0;
    for(i=0; i<banco1.num_contas; i++){
        delete banco1.contas[i];
    }

    return 0;
}