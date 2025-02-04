#ifndef BANCO_HPP
#define BANCO_HPP

#include <iostream>
#include <cstring>
#include "ContaBancaria.hpp"

using namespace std;

struct Banco{
    int num_contas;
    Conta *contas[20];

    void construtor();
    bool criada(int, string);
    Conta* busca(int);
    void imprimeBanco();

};

#endif