#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

// Declaração de classe.

class Usuario {

private:

    CPF cpf;
    Senha senha;

public:

    void setUsuario(int novo_num_cpf, string novo_senha) throw (invalid_argument);

    void getUsuario(CPF *cpf_f, Senha *senha_f);
};

class Ingresso {

private:

    Codigo_de_Ingresso codigo;

public:

    void setIngresso(int novo_codigo) throw (invalid_argument);

    void getIngresso(Codigo_de_Ingresso *codif);

};

class Cartao_de_credito {

private:

    Numero_Cartao_Credito numero;
    Codigo_de_Seguranca_Cartao_Credito codigo;
    Data_Validade_Cartao_Credito data;


public:

    void setCartao_de_credito(long long int numero_f, int codigo_f, string data_f) throw (invalid_argument);

    void getCartao_de_credito(Numero_Cartao_Credito *numero_f, Codigo_de_Seguranca_Cartao_Credito *codigo_f, Data_Validade_Cartao_Credito *data_f);

};

#endif // ENTIDADES_H_INCLUDED
