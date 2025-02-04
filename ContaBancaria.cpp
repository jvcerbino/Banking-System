#include <iostream>
#include <iomanip>
#include "ContaBancaria.hpp"

Conta* Conta::novaconta(int id, string nomeid){
    Conta* X = new Conta;
    X->id = id;
    X->nomeid = nomeid;
    X->saldo = 0;

    return X;
}

void Conta::deposito(float valor){
    this->saldo += valor;
}

void Conta::saque(float valor){
    this->saldo -= valor;
}

void Conta::pix(Conta* recebe, float valor){
    this->saldo -= valor;
    recebe->saldo += valor;
}

void Conta::imprime(){
    cout << fixed << this->id << ' ' << this->nomeid << setprecision(2) << ' ' << this->saldo << endl;
}