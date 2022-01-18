#include "Conta.hpp"

Conta::Conta(){}

Conta::Conta(string nome_conta){
    this->nome_conta = nome_conta;
    this->saldo_conta = 0;
    this->id = 0;
}

Conta::~Conta(){}

string Conta::GetNomeConta(){
    return this->nome_conta;
}

int Conta::GetIndice(){
    return this->id;
}

void Conta::Depositar(float valor){
    this->saldo_conta += valor;
}   

void Conta::Sacar(float valor){
    this->saldo_conta -= valor;
}

float Conta::SetSaldo(){
    return this->saldo_conta = 0;
}

float Conta::GetSaldo(){
    return this->saldo_conta;
}
