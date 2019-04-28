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

class Evento {

private:

    Codigo_de_Evento codigo;
    Nome_de_Evento nome;
    Cidade cidade;
    Estados_Brasileiros estado;
    Classe_Evento classe;
    Faixa_Etaria faixa;

public:

    void setEvento(int novo_codigo, string novo_nome, string novo_cidade, string novo_estado,
                int novo_classe, string novo_faixa) throw (invalid_argument);

    void getEvento(Codigo_de_Evento *codigo_f, Nome_de_Evento *nome_f, Cidade *cidade_f, Estados_Brasileiros *estado_f,
                   Classe_Evento *classe_f, Faixa_Etaria *faixa_f);
};

class Apresentacao {

private:

    Codigo_de_Apresentacao codigo;
    Data data;
    Horario horario;
    Preco preco;
    Numero_de_Sala sala;
    Disponibilidade disponibilidade;

public:

    void setApresentacao(int novo_codigo, string novo_data, string novo_horario, float novo_preco,
                int novo_sala, int novo_disponibilidade) throw (invalid_argument);

    void getApresentacao(Codigo_de_Apresentacao *codigo_f, Data *data_f, Horario *horario_f, Preco *preco_f,
                   Numero_de_Sala *sala_f, Disponibilidade *disponibilidade_f);
};

#endif // ENTIDADES_H_INCLUDED
