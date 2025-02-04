#ifndef CONTABANCARIA_HPP   
#define CONTABANCARIA_HPP

#include <iostream>
#include <cstring>

using namespace std;

struct Conta{

    int id;
    string nomeid;
    float saldo;

    Conta* novaconta(int,string);
    void deposito(float);
    void saque(float);
    void pix(Conta*, float);
    void imprime();

};

#endif
