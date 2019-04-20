#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class Codigo_de_Evento {
private:
        int codigo_de_evento;

        // temos que checar se o numero tem 3 digitos apenas

        const static int LIMITE = 999;

        // Método responsável por validação.

        void validar(int) throw (invalid_argument);

public:
        // Métodos de acesso.

        void setCodigo_de_Evento(int) throw (invalid_argument);

        int getCodigo_de_Evento() const {
            return codigo_de_evento;
        }
};

class Codigo_de_Apresentacao {
private:
        int codigo_de_apresentacao;

        // temos que checar se o numero tem 4 digitos apenas

        const static int LIMITE = 9999;

        // Método responsável por validação.

        void validar(int) throw (invalid_argument);

public:
        // Métodos de acesso.

        void setCodigo_de_Apresentacao(int) throw (invalid_argument);

        int getCodigo_de_Apresentacao() const {
            return codigo_de_apresentacao;
        }
};

class Codigo_de_Ingresso {
private:
        int codigo_de_ingresso;

        // temos que checar se o numero tem 5 digitos apenas

        const static int LIMITE = 99999;

        // Método responsável por validação.

        void validar(int) throw (invalid_argument);

public:
        // Métodos de acesso.

        void setCodigo_de_Ingresso(int) throw (invalid_argument);

        int getCodigo_de_Ingresso() const {
            return codigo_de_ingresso;
        }
};

class Horario{
private:
        char *horario;

        // FORMATO: HH:MM
        // HH é número entre 0 e 22
        // MM é 00,15,30 ou 45

        // Método responsável por validação.

        void validar(string) throw (invalid_argument);

public:
        // Métodos de acesso.

        void setHorario (string) throw (invalid_argument);

        string getHorario () {
            return horario;
        }
};

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

        void setNumero_de_Sala (int) throw (invalid_argument);

        int getNumero_de_Sala () const {
            return numero_de_sala;
        }
};

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

        void setPreco (float) throw (invalid_argument);

        float getPreco () const {
            return preco;
        }
};

class Estados_Brasileiros {
private:
        string estado_br;

        // temos que checar se o estado existe
        // suponho que siglas de estado se escrevem em letras maiusculas

        // Método responsável por validação.

        void validar(string) throw (invalid_argument);

public:
        // Métodos de acesso.

        void setEstado (string) throw (invalid_argument);

        string getEstado () {
            return estado_br;
        }
};

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

        void setClasse_Evento(int) throw (invalid_argument);

        int getClasse_Evento() const {
            return classe_evento;
        }
};

class Faixa_Etaria{
private:
        char *faixa_etaria;

        // L, 10, 12, 14, 16 OU 18

        // Método responsável por validação.

        void validar(string) throw (invalid_argument);

public:
        // Métodos de acesso.

        void setFaixa_Etaria (string) throw (invalid_argument);

        string getFaixa_Etaria () {
            return faixa_etaria;
        }
};

class CPF{
private:
        int num_cpf[11];

        // temos que checar se o numero tem 9 digitos
        // suponho que a entrada é um numero sem pontos e sem barra

        // Método responsável por validação.

        void validar(int*) throw (invalid_argument);

public:
        // Métodos de acesso.

        void setCPF (int*) throw (invalid_argument);

        int* getCPF () {
            return num_cpf;
        }
};

class Senha {
private:

        //Apenas letras e digitos
        //não pode ter caracteres repetidos
        //deve possuiu uma letra maiuscula, uma minuscula e um digito

        char *senha;

        // Método responsável por validação.

        void validar(string) throw (invalid_argument);

public:
        // Métodos de acesso.

        void setSenha(string) throw (invalid_argument);

        string getSenha() const {
            return senha;
        }
};

class Codigo_de_Seguranca {
private:
        int codigo_de_seguranca;

        // temos que checar se o numero tem 3 digitos apenas

        const static int LIMITE = 999;

        // Método responsável por validação.

        void validar(int) throw (invalid_argument);

public:
        // Métodos de acesso.

        void setCodigo_de_Seguranca(int) throw (invalid_argument);

        int getCodigo_de_Seguranca() const {
            return codigo_de_seguranca;
        }
};

class Numero_Cartao_Credito{
private:
        long long int num_cartao_credito;

        // temos que checar se o numero tem 9 digitos
        // suponho que a entrada é um numero sem pontos e sem barra

        // Método responsável por validação.

        void validar(string) throw (invalid_argument);

public:
        // Métodos de acesso.

        void setNumero_Cartao_Credito (long long int) throw (invalid_argument);

        long long int getNumero_Cartao_Credito () {
            return num_cartao_credito;
        }
};

class Data_Validade{
private:
        char *data_validade;

        // Método responsável por validação.

        void validar(string) throw (invalid_argument);

public:
        // Métodos de acesso.

        void setData_Validade (string) throw (invalid_argument);

        string getData_Validade () {
            return data_validade;
        }
};

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

        void setDisponibilidade(int) throw (invalid_argument);

        int getDisponibilidade() const {
            return disponibilidade;
        }
};

#endif // DOMINIOS_H_INCLUDED
