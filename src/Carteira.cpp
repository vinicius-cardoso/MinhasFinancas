#include "Carteira.hpp"

Carteira::Carteira(){

}

Carteira::Carteira(string nome_carteira){
    this->nome_carteira = nome_carteira;
    this->contas = {};
    this->saldo_total = 0;
    this->qtd_contas = 0;
}

Carteira::~Carteira(){

}

void Carteira::AdicionarConta(Conta* c){
    this->contas.push_back(c);
}

// void Carteira::RemoverConta(Conta* c){
//     this->contas.erase(c->GetIndice());
// }

void Carteira::RemoverTodasContas(){
    this->contas.clear();
    this->saldo_total = 0;
}

int Carteira::GetQtdContas(){
    return contas.size();
}

float Carteira::GetSaldoTotal(){
    // for(Conta c : contas)
    //     saldo_total += c.GetSaldo();
    
    for(int i = 0; i < contas.size(); i++)
        saldo_total += contas[i]->GetSaldo();

    return this->saldo_total;
}
