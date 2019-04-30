/**
 * @file dominios.h
 *
 * @brief Arquivo com a declaração das classes de dominio do programa
 *
 * @author Gabriel e Guilherme
 *
 */

#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <iostream>
#include <string>
#include <stdlib.h>

/*
Feito por:
Guilherme Braga Pinto
Gabriel Matheus da Rocha de Oliveira
Last Update: 30/04/2019
UnB
*/

using namespace std;

/**
 *  @brief Código de Evento.
 *  @author Guilherme Braga
 *  @author Gabriel Matheus
 *
 *  @section DESCRIÇÃO   
 *  Essa classe armazena um inteiro que representa o Codigo de Evento
 *
 *  @subsection FORMA
 *  O inteiro deve apresentar 3 digitos apenas 
 */
class Codigo_de_Evento {
private:
        int codigo_de_evento;

        // temos que checar se o numero tem 3 digitos apenas

        const static int LIMITE = 999;

        // Método responsável por validação.

        void validar(int) throw (invalid_argument);

public:
        // Métodos de acesso.
    /**
     * Atribui valor para código de evento.
     * 
     * @param int
     * 
     */
        void setCodigo_de_Evento(int) throw (invalid_argument);

    /**
     * Obtém o codigo de evento
     * 
     * @return Um inteiro.
     * 
     */
        int getCodigo_de_Evento() const {
            return codigo_de_evento;
        }
};


/**
 *  @brief Código de Apresentação.
 *  @author Guilherme Braga
 *  @author Gabriel Matheus
 *
 *  @section DESCRIÇÃO   
 *  Essa classe armazena um inteiro que representa o Codigo de Apresentação.
 *
 *  @subsection FORMA
 *  O inteiro deve apresentar 4 digitos apenas.
 */
class Codigo_de_Apresentacao {
private:
        int codigo_de_apresentacao;

        // temos que checar se o numero tem 4 digitos apenas

        const static int LIMITE = 9999;

        // Método responsável por validação.

        void validar(int) throw (invalid_argument);

public:
        // Métodos de acesso.
    /**
     * Atribui valor para código de apresentação.
     * 
     * @param int
     * 
     */
        void setCodigo_de_Apresentacao(int) throw (invalid_argument);
    
    /**
     * Obtém o codigo de apresentação.
     * 
     * @return Um inteiro.
     * 
     */
        int getCodigo_de_Apresentacao() const {
            return codigo_de_apresentacao;
        }
};


/**
 *  @brief Código de Ingresso.
 *  @author Guilherme Braga
 *  @author Gabriel Matheus
 *
 *  @section DESCRIÇÃO   
 *  Essa classe armazena um inteiro que representa o Codigo de Ingresso.
 *
 *  @subsection FORMA
 *  O inteiro deve apresentar 5 digitos apenas.
 */
class Codigo_de_Ingresso {
private:
        int codigo_de_ingresso;

        // temos que checar se o numero tem 5 digitos apenas

        const static int LIMITE = 99999;

        // Método responsável por validação.

        void validar(int) throw (invalid_argument);

public:
        // Métodos de acesso.
    
    /**
     * Atribui valor para código de ingresso.
     * 
     * @param int
     * 
     */
        void setCodigo_de_Ingresso(int) throw (invalid_argument);
    
    /**
     * Obtém o codigo de ingresso.
     * 
     * @return Um inteiro.
     * 
     */
        int getCodigo_de_Ingresso() const {
            return codigo_de_ingresso;
        }
};


/**
 *  @brief Horário.
 *  @author Guilherme Braga
 *  @author Gabriel Matheus
 *
 *  @section DESCRIÇÃO   
 *  Essa classe armazena um char.
 *
 *  @subsection FORMA
 *  O inteiro deve se apresentar na forma de HH:MM.
 */
class Horario{
private:

        // FORMATO: HH:MM
        // HH é número entre 0 e 22
        // MM é 00,15,30 ou 45

        const static int FORMATO_ESPERADO = 5;

        char horario[FORMATO_ESPERADO+1];

        // Método responsável por validação.

        void validar(string) throw (invalid_argument);

public:
        // Métodos de acesso.

    /**
     * Atribui valor para o horário.
     * 
     * @param string
     * 
     */
        void setHorario (string) throw (invalid_argument);
   
    /**
     * Obtém o horário.
     * 
     * @return string.
     * 
     */
        string getHorario () {
            return horario;
        }
};

/**
 *  @brief Número de sala.
 *  @author Guilherme Braga
 *  @author Gabriel Matheus
 *
 *  @section DESCRIÇÃO   
 *  Essa classe armazena um inteiro.
 *
 *  @subsection FORMA
 *  O inteiro deve ser maior que zero e menor ou igual a 10.
 */
class Numero_de_Sala {
private:
        int numero_de_sala;

        // temos que checar se o numero e maior que zero e menor ou igual a 10

        const static int LIMITE_INFERIOR = 1;
        const static int LIMITE_SUPERIOR = 10;

        // Método responsável por validação.

        void validar(int) throw (invalid_argument);

public:
        // Métodos de acesso.

    /**
     * Atribui valor para o número de sala.
     * 
     * @param int
     * 
     */
        void setNumero_de_Sala (int) throw (invalid_argument);
   
    /**
     * Obtém o número da sala.
     * 
     * @return inteiro.
     * 
     */
        int getNumero_de_Sala () const {
            return numero_de_sala;
        }
};


/**
 *  @brief Preço.
 *  @author Guilherme Braga
 *  @author Gabriel Matheus
 *
 *  @section DESCRIÇÃO   
 *  Essa classe armazena um float.
 *
 *  @subsection FORMA
 *  O inteiro deve ser maior ou igual à zero zero e menor e menor ou igual a 1000.
 */
class Preco {
private:
        float preco;

        // temos que checar se o numero e maior ou igual que zero e menor ou igual a mil
        // incluindo zero porque suponho que alguem va registrar um evento gratis neste sistema

        const static int LIMITE_INFERIOR = 0;
        const static int LIMITE_SUPERIOR = 1000;

        // Método responsável por validação.

        void validar(float) throw (invalid_argument);

public:
        // Métodos de acesso.

    /**
     * Atribui valor para o preço.
     * 
     * @param float
     * 
     */
        void setPreco (float) throw (invalid_argument);
    
    /**
     * Obtém o preço.
     * 
     * @return float.
     * 
     */
        float getPreco () const {
            return preco;
        }
};

/**
 *  @brief Estados Brasileiros.
 *  @author Guilherme Braga
 *  @author Gabriel Matheus
 *
 *  @section DESCRIÇÃO   
 *  Essa classe armazena um tipo char.
 *
 *  @subsection FORMA
 *  O char deve representar a sigla de um Estado Brasileiro existente.
 */
class Estados_Brasileiros {
private:

        const static int FORMATO_ESPERADO = 2;

        char estado_br[FORMATO_ESPERADO+1];

        // temos que checar se o estado existe
        // suponho que siglas de estado se escrevem em letras maiusculas

        // Método responsável por validação.

        void validar(string) throw (invalid_argument);

public:
        // Métodos de acesso.

    /**
     * Atribui valor para o Estado Brasileiro.
     * 
     * @param string
     * 
     */
        void setEstado (string) throw (invalid_argument);

    /**
     * Obtém o Estado Brasileiro.
     * 
     * @return string.
     * 
     */
        string getEstado () {
            return estado_br;
        }
};


/**
 *  @brief Classe de Evento.
 *  @author Guilherme Braga
 *  @author Gabriel Matheus
 *
 *  @section DESCRIÇÃO   
 *  Essa classe armazena um tipo int.
 *
 *  @subsection FORMA
 *  O inteiro pode ser entre 1 e 4, representando cada número um tipo de evento diferente.
 */
class Classe_Evento {
private:

        /*
        1 -> TEATRO
        2 -> ESPORTE
        3 -> SHOW NACIONAL
        4 -> SHOW INTERNACIONAL
        */

        int classe_evento;

        // Método responsável por validação.

        void validar(int) throw (invalid_argument);

public:
        // Métodos de acesso.

    /**
     * Atribui valor para a Classe de Evento.
     * 
     * @param int
     * 
     */
        void setClasse_Evento(int) throw (invalid_argument);

    /**
     * Obtém a Classe de Evento.
     * 
     * @return int.
     * 
     */
        int getClasse_Evento() const {
            return classe_evento;
        }
};


/**
 *  @brief Faixa Etária.
 *  @author Guilherme Braga
 *  @author Gabriel Matheus
 *
 *  @section DESCRIÇÃO   
 *  Essa classe armazena um tipo char.
 *
 *  @subsection FORMA
 *  O char deve representar uma faixa etária existente no Brasil (L, 10, 12, 14, 16 ou 18).
 */
class Faixa_Etaria{
private:

        const static int FORMATO_ESPERADO = 2;

        char faixa_etaria[FORMATO_ESPERADO+1];

        // L, 10, 12, 14, 16 OU 18

        // Método responsável por validação.

        void validar(string) throw (invalid_argument);

public:
        // Métodos de acesso.

    /**
     * Atribui valor para a Faixa Etária.
     * 
     * @param string
     * 
     */
        void setFaixa_Etaria (string) throw (invalid_argument);
    
    /**
     * Obtém a Faixa Etária.
     * 
     * @return string.
     * 
     */
        string getFaixa_Etaria () {
            return faixa_etaria;
        }
};


/**
 *  @brief CPF.
 *  @author Guilherme Braga
 *  @author Gabriel Matheus
 *
 *  @section DESCRIÇÃO   
 *  Essa classe armazena um tipo long long int.
 *
 *  @subsection FORMA
 *  O CPF deve obedecer o algoritmo de validação de um CPF.
 */
class CPF{
private:
        long long int num_cpf;

        // temos que checar se o numero tem 9 digitos
        // suponho que a entrada é um numero sem pontos e sem barra

        // Método responsável por validação.

        void validar(long long int) throw (invalid_argument);

public:
        // Métodos de acesso.

    /**
     * Atribui valor para o CPF.
     * 
     * @param long long int
     * 
     */
        void setCPF (long long int) throw (invalid_argument);

    /**
     * Obtém o CPF.
     * 
     * @return long long int.
     * 
     */
        long long int getCPF () {
            //cout << num_cpf << endl;
            return num_cpf;
        }
};


/**
 *  @brief Senha.
 *  @author Guilherme Braga
 *  @author Gabriel Matheus
 *
 *  @section DESCRIÇÃO   
 *  Essa classe armazena um tipo char.
 *
 *  @subsection FORMA
 *  A senha deve possuir uma letra maiúscula, uma minúscula e um dígito. Não podem existir caracteres repetidos.
 */
class Senha {
private:

        //Apenas letras e digitos
        //não pode ter caracteres repetidos
        //deve possuiu uma letra maiuscula, uma minuscula e um digito

        const static int TAMANHO_ESPERADO = 6;

        char senha[TAMANHO_ESPERADO+1];

        // Método responsável por validação.

        void validar(string) throw (invalid_argument);

public:
        // Métodos de acesso.

    /**
     * Atribui valor para a senha.
     * 
     * @param string
     * 
     */
        void setSenha(string) throw (invalid_argument);

    /**
     * Obtém a senha.
     * 
     * @return string.
     * 
     */
        string getSenha() const {
            return senha;
        }
};


/**
 *  @brief Código de Segurança de Cartão Crédito.
 *  @author Guilherme Braga
 *  @author Gabriel Matheus
 *
 *  @section DESCRIÇÃO   
 *  Essa classe armazena um tipo int.
 *
 *  @subsection FORMA
 *  Temos que checar se o código de segurança apresenta 3 dígitos.
 */
class Codigo_de_Seguranca_Cartao_Credito {
private:
        int codigo_de_seguranca;

        // temos que checar se o numero tem 3 digitos apenas

        const static int LIMITE = 999;

        // Método responsável por validação.

        void validar(int) throw (invalid_argument);

public:
        // Métodos de acesso.

    /**
     * Atribui valor para o código de segurança.
     * 
     * @param int   
     * 
     */
        void setCodigo_de_Seguranca_Cartao_Credito(int) throw (invalid_argument);
    /**
     * Obtém o código de segurança.
     * 
     * @return int.
     * 
     */
        int getCodigo_de_Seguranca_Cartao_Credito() const {
            return codigo_de_seguranca;
        }
};


/**
 *  @brief Número de Cartão Crédito.
 *  @author Guilherme Braga
 *  @author Gabriel Matheus
 *
 *  @section DESCRIÇÃO   
 *  Essa classe armazena um tipo long long int.
 *
 *  @subsection FORMA
 *  Temos que checar se o número apresenta 9 dígitos e se ele obedece o algoritmo de formação.
 */
class Numero_Cartao_Credito{
private:
        long long int num_cartao_credito;

        // temos que checar se o numero tem 9 digitos
        // suponho que a entrada é um numero sem pontos e sem barra

        // Método responsável por validação.

        void validar(string) throw (invalid_argument);

public:
        // Métodos de acesso.

    /**
     * Atribui valor para o número do cartão.
     * 
     * @param long long int   
     * 
     */
        void setNumero_Cartao_Credito (long long int) throw (invalid_argument);

    /**
     * Obtém o número do cartão.
     * 
     * @return long long int
     * 
     */
        long long int getNumero_Cartao_Credito () {
            return num_cartao_credito;
        }
};


/**
 *  @brief Data de Validade do Cartão Crédito.
 *  @author Guilherme Braga
 *  @author Gabriel Matheus
 *
 *  @section DESCRIÇÃO   
 *  Essa classe armazena um tipo char.
 *
 *  @subsection FORMA
 *  Temos que checar se o número apresenta 5 caracteres.
 */
class Data_Validade_Cartao_Credito{
private:

        const static int TAMANHO_ESPERADO = 5;

        char data_validade[TAMANHO_ESPERADO+1];

        // Método responsável por validação.

        void validar(string) throw (invalid_argument);

public:
        // Métodos de acesso.

    /**
     * Atribui valor para a validade do cartão.
     * 
     * @param string   
     * 
     */
        void setData_Validade_Cartao_Credito (string) throw (invalid_argument);

    /**
     * Obtém a validade do cartão.
     * 
     * @return string
     * 
     */
        string getData_Validade_Cartao_Credito () {
            return data_validade;
        }
};


/**
 *  @brief Disponibilidade.
 *  @author Guilherme Braga
 *  @author Gabriel Matheus
 *
 *  @section DESCRIÇÃO   
 *  Essa classe armazena um tipo int.
 *
 *  @subsection FORMA
 *  Temos que checar se o número apresenta 3 dígitos.
 */
class Disponibilidade {
private:
        int disponibilidade;

        // temos que checar se o numero tem 3 digitos apenas

        const static int LIMITE_SUPERIOR = 250;
        const static int LIMITE_INFERIOR = 0;

        // Método responsável por validação.

        void validar(int) throw (invalid_argument);

public:
        // Métodos de acesso.

    /**
     * Atribui valor para a disponibilidade.
     * 
     * @param int   
     * 
     */
        void setDisponibilidade(int) throw (invalid_argument);

    /**
     * Obtém disponibilidade.
     * 
     * @return int
     * 
     */
        int getDisponibilidade() const {
            return disponibilidade;
        }
};


/**
 *  @brief Nome de Evento.
 *  @author Guilherme Braga
 *  @author Gabriel Matheus
 *
 *  @section DESCRIÇÃO   
 *  Essa classe armazena um tipo char.
 *
 *  @subsection FORMA
 *  Temos que checar se existem no máximo 20 caracteres.
 */
class Nome_de_Evento {
private:

        const static int LIMITE = 20;

        char nome_evento[LIMITE+1];

        // temos que checar se o nome tem 20 caracteres, pelo menos 1 letra
        // não pode ter varios espaços vazios em seguida

        // Método responsável por validação.

        void validar(string) throw (invalid_argument);

public:
        // Métodos de acesso.

    /**
     * Atribui valor para o nome do evento.
     * 
     * @param string   
     * 
     */
        void setNome_de_Evento (string) throw (invalid_argument);

    /**
     * Obtém nome de evento.
     * 
     * @return string
     * 
     */
        string getNome_de_Evento () {
            return nome_evento;
        }
};


/**
 *  @brief Data.
 *  @author Guilherme Braga
 *  @author Gabriel Matheus
 *
 *  @section DESCRIÇÃO   
 *  Essa classe armazena um tipo char.
 *
 *  @subsection FORMA
 *  Temos que checar se existem no máximo 6 caracteres e se a entrada obedece o formato corrreto de data: DDMMAA.
 */
class Data {
private:
        const static int LIMITE = 6;

        char data[LIMITE+1];

        // temos que checar se a data tem 6 caracteres
        // formato: DD/MM/AA onde MM <= 12, AA <= 99 e >= 00, DD <= 31
        // deve considerar anos bissextos
        // vamos supor que não serão criados eventos para o passado ou para uma data que não pertence a este século, logo, ao se declarar o ano como "99", consideramos 2099.
        // a entrada: se queremos expressar 25/12/2098, devemos escrever 251298 como a entrada (sem barras para facilitar, no output final se fara print com as divisoes)

        // Método responsável por validação.

        void validar(int) throw (invalid_argument);

public:
        // Métodos de acesso.

    /**
     * Atribui valor para a data.
     * 
     * @param string   
     * 
     */
        void setData (string) throw (invalid_argument);

    /**
     * Obtém a data.
     * 
     * @return string
     * 
     */
        string getData () {
            return data;
        }

};


/**
 *  @brief Cidade.
 *  @author Guilherme Braga
 *  @author Gabriel Matheus
 *
 *  @section DESCRIÇÃO   
 *  Essa classe armazena um tipo char.
 *
 *  @subsection FORMA
 *  Temos que checar se existem no máximo 15 caracteres e se a entrada obedece as especificações de um nome de cidade (não podemos ter espaços consecutivos, por exemplo).
 */
class Cidade {
private:
        const static int TAMANHO_ESPERADO = 15;

        char cidade[TAMANHO_ESPERADO+1];

        // temos que checar se a cidade tem 15 caracteres, cada caractere pode ser letra, espaço ou ponto
        // pelo menos 1 caractere é letra
        // não ha espaço seguido
        // antes de ponto há uma letra

        // Método responsável por validação.

        void validar(string) throw (invalid_argument);

public:
        // Métodos de acesso.

    /**
     * Atribui valor para a cidade.
     * 
     * @param string   
     * 
     */
        void setCidade (string) throw (invalid_argument);

    /**
     * Obtém o nome da Cidade.
     * 
     * @return string
     * 
     */
        string getCidade () {
            return cidade;
        }
};

#endif // DOMINIOS_H_INCLUDED
