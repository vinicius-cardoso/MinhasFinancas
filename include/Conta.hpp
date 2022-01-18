#ifndef CONTA_H
#define CONTA_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Conta{
    private:
        string nome_conta;
        float saldo_conta;
        int id;

    public:
        Conta();
        Conta(string nome_conta);
        ~Conta();
        string GetNomeConta();
        int GetIndice();
        void Depositar(float valor);
        void Sacar(float valor);
        float SetSaldo();
        float GetSaldo();
};

#endif