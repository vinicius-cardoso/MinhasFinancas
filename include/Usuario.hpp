#ifndef USUARIO_H
#define USUARIO_H

#include "Carteira.hpp"

using namespace std;

class Usuario{
    private:
        string nome;
        string username;

    public:
        Usuario();
        Usuario(string nome, string username);
        ~Usuario();
        void SetNome(string nome);
        string GetNome();
        void SetUsername(string username);
        string GetUsername();
};

#endif