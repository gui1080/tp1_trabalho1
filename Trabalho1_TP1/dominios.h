#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <iostream>

using namespace std;

class Codigo_de_Evento {
private:
        int codigo_de_evento;

        // temos que chear se o numero tem 3 digitos apenas

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

        // temos que chear se o numero tem 4 digitos apenas

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

class Numero_de_Sala {
private:
        int numero_de_sala;

        // temos que chear se o numero e maior que zero e menor ou igual a 10

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

        // temos que chear se o numero e maior ou igual que zero e menor ou igual a mil
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




#endif // DOMINIOS_H_INCLUDED
