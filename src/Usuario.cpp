#include "Usuario.hpp"

Usuario::Usuario(){

}

Usuario::Usuario(string nome, string username){
    this->nome = nome;
    this->username = username;
}

Usuario::~Usuario(){
    
}

void Usuario::SetNome(string nome){
    this->nome = nome;
}

string Usuario::GetNome(){
    return this->nome;
}

void Usuario::SetUsername(string username){
    this->username = username;
}

string Usuario::GetUsername(){
    return this->username;
}