#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <iostream>
#include <string.h>

using namespace std;

class Codigo_de_Evento {
private:
        int codigo_de_evento;

        // temos que checar se o numero tem 3 digitos apenas

        const static int LIMITE = 999;

        // M�todo respons�vel por valida��o.

        void validar(int) throw (invalid_argument);

public:
        // M�todos de acesso.

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

        // M�todo respons�vel por valida��o.

        void validar(int) throw (invalid_argument);

public:
        // M�todos de acesso.

        void setCodigo_de_Apresentacao(int) throw (invalid_argument);

        int getCodigo_de_Apresentacao() const {
            return codigo_de_apresentacao;
        }
};

class Numero_de_Sala {
private:
        int numero_de_sala;

        // temos que checar se o numero e maior que zero e menor ou igual a 10

        const static int LIMITE_INFERIOR = 1;
        const static int LIMITE_SUPERIOR = 10;

        // M�todo respons�vel por valida��o.

        void validar(int) throw (invalid_argument);

public:
        // M�todos de acesso.

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

        // M�todo respons�vel por valida��o.

        void validar(float) throw (invalid_argument);

public:
        // M�todos de acesso.

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

        // M�todo respons�vel por valida��o.

        void validar(string) throw (invalid_argument);

public:
        // M�todos de acesso.

        void setEstado (string) throw (invalid_argument);

        string getEstado () {
            return estado_br;
        }
};

class CPF{
private:
        int num_cpf[11];

        // temos que checar se o numero tem 9 digitos
        // suponho que a entrada � um numero sem pontos e sem barra

        // M�todo respons�vel por valida��o.

        void validar(int*) throw (invalid_argument);

public:
        // M�todos de acesso.

        void setCPF (int*) throw (invalid_argument);

        int* getCPF () {
            return num_cpf;
        }
};




#endif // DOMINIOS_H_INCLUDED
