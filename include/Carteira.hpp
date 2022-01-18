#ifndef CARTEIRA_H
#define CARTEIRA_H

#include "Conta.hpp"

#include <vector>
#include <string>

using namespace std;

class Carteira{
    private:
        vector<Conta*> contas;
        string nome_carteira;
        float saldo_total;
        int qtd_contas;

    public:
        Carteira();
        Carteira(string nome_carteira);
        ~Carteira();
        void AdicionarConta(Conta* c);
        void RemoverConta(Conta* c);
        void RemoverTodasContas();
        float GetSaldoTotal();
        int GetQtdContas();
};

#endif