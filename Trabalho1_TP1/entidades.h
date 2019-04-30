    /**
     * @file entidades.h
     *
     * @brief Arquivo com a declaração das classes de entidade do programa
     *
     * @author Gabriel e Guilherme
     *
     */

#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

// Declaração de classe.


/**
 *  @brief Usuário.
 *  @author Guilherme Braga
 *  @author Gabriel Matheus
 *
 *  @section DESCRIÇÃO   
 *  Essa classe armazena um objeto de cpf e um de senha.
 *
 *  @subsection FORMA
 *  A atribuição dos objetos devem obedecer à suas formações respectivas no nível de domínio. 
 */
class Usuario {

private:

    CPF cpf;
    Senha senha;

public:

    /**
     * Atribui valor para os objetos do usuário.
     * 
     * @param long long int e string
     * 
     */
    void setUsuario(long long int novo_num_cpf, string novo_senha) throw (invalid_argument);

    /**
     * Obtém os dados do Usuário
     * 
     * @return CPF e Senha.
     * 
     */
    void getUsuario(CPF *cpf_f, Senha *senha_f);
};


/**
 *  @brief Ingresso.
 *  @author Guilherme Braga
 *  @author Gabriel Matheus
 *
 *  @section DESCRIÇÃO   
 *  Essa classe armazena um objeto de código de ingresso.
 *
 *  @subsection FORMA
 *  A atribuição dos objetos devem obedecer à suas formações respectivas no nível de domínio. 
 */
class Ingresso {

private:

    Codigo_de_Ingresso codigo;

public:

    /**
     * Atribui valor para o objeto de código de ingresso do ingreso própriamente dito.
     * 
     * @param int
     * 
     */
    void setIngresso(int novo_codigo) throw (invalid_argument);

    /**
     * Obtém os dados do Ingresso
     * 
     * @return Código de Ingresso.
     * 
     */
    void getIngresso(Codigo_de_Ingresso *codif);

};


/**
 *  @brief Cartão de Crédito.
 *  @author Guilherme Braga
 *  @author Gabriel Matheus
 *
 *  @section DESCRIÇÃO   
 *  Essa classe armazena um objeto de número de cartão de crédito, um código de segurança de cartão de crédito e sua respectiva data de validade.
 *
 *  @subsection FORMA
 *  A atribuição dos objetos devem obedecer à suas formações respectivas no nível de domínio. 
 */
class Cartao_de_credito {

private:

    Numero_Cartao_Credito numero;
    Codigo_de_Seguranca_Cartao_Credito codigo_cartao;
    Data_Validade_Cartao_Credito data;


public:

    /**
     * Atribui valor para o objeto de código de ingresso do ingreso própriamente dito.
     * 
     * @param long long int, int e string.
     * 
     */
    void setCartao_de_credito(long long int numero_f, int codigo_cartao_f, string data_f) throw (invalid_argument);

    /**
     * Obtém os dados do Cartão de Crédito.
     * 
     * @return Número de cartão de crédito, código de segurança e sua validade.
     * 
     */
    void getCartao_de_credito(Numero_Cartao_Credito *numero_f, Codigo_de_Seguranca_Cartao_Credito *codigo_cartao_f, Data_Validade_Cartao_Credito *data_f);

};


/**
 *  @brief Evento.
 *  @author Guilherme Braga
 *  @author Gabriel Matheus
 *
 *  @section DESCRIÇÃO   
 *  Essa classe armazena um objeto de código de evento, nome de evento, sua cidade, seu respectivo Estado Brasileiro, a classe do evento e sua faixa etária.
 *
 *  @subsection FORMA
 *  A atribuição dos objetos devem obedecer à suas formações respectivas no nível de domínio. 
 */
class Evento {

private:

    Codigo_de_Evento codigo;
    Nome_de_Evento nome;
    Cidade cidade;
    Estados_Brasileiros estado;
    Classe_Evento classe;
    Faixa_Etaria faixa;

public:

    /**
     * Atribui valor para os objetos que descrevem tal evento.
     * 
     * @param int, string.
     * 
     */
    void setEvento(int novo_codigo, string novo_nome, string novo_cidade, string novo_estado,
                int novo_classe, string novo_faixa) throw (invalid_argument);

    /**
     * Obtém os dados do Evento.
     * 
     * @return Código de evento, nome de evento, cidade, Estado Brasileiro, classe de evento e faixa etária.
     * 
     */
    void getEvento(Codigo_de_Evento *codigo_f, Nome_de_Evento *nome_f, Cidade *cidade_f, Estados_Brasileiros *estado_f,
                   Classe_Evento *classe_f, Faixa_Etaria *faixa_f);
};


/**
 *  @brief Apresentação.
 *  @author Guilherme Braga
 *  @author Gabriel Matheus
 *
 *  @section DESCRIÇÃO   
 *  Essa classe armazena um objeto de código de apresentação, de data, de horário, de preço e de disponibilidade.
 *
 *  @subsection FORMA
 *  A atribuição dos objetos devem obedecer à suas formações respectivas no nível de domínio. 
 */
class Apresentacao {

private:

    Codigo_de_Apresentacao codigo;
    Data data;
    Horario horario;
    Preco preco;
    Numero_de_Sala sala;
    Disponibilidade disponibilidade;

public:

    /**
     * Atribui valor para os objetos que descrevem tal apresentação.
     * 
     * @param int, string.
     * 
     */
    void setApresentacao(int novo_codigo, string novo_data, string novo_horario, float novo_preco,
                int novo_sala, int novo_disponibilidade) throw (invalid_argument);

    /**
     * Obtém os dados do Evento.
     * 
     * @return Código de apresentação, data, horário, preço e disponibilidade.
     * 
     */
    void getApresentacao(Codigo_de_Apresentacao *codigo_f, Data *data_f, Horario *horario_f, Preco *preco_f,
                   Numero_de_Sala *sala_f, Disponibilidade *disponibilidade_f);
};

#endif // ENTIDADES_H_INCLUDED