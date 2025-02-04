#include <iostream>
#include "Banco.hpp"

void Banco::construtor(){
    num_contas = 0;
    for(int i = 0; i < num_contas; i++){
        contas[i] = nullptr;
    }
}

bool Banco::criada(int id, string nomeid){
    for(int i = 0; i < num_contas; i++){
        if(contas[i]->id == id){
        return false;
    }
    }

contas[num_contas] = contas[num_contas]->novaconta(id,nomeid);
num_contas++;
return true;
}

Conta* Banco::busca(int id){
    for(int i = 0; i < num_contas; i++){
        if(contas[i]->id == id){
            return contas[i];
        }
    }

    return nullptr;
}

void Banco::imprimeBanco(){
    for(int i = 0; i < num_contas; i++){
        contas[i]->imprime();
    }
}