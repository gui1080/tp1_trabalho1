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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Codigo_de_Evento::setCodigo_de_Evento(int novo_codigo_de_evento) throw (invalid_argument){

    validar(novo_codigo_de_evento);
    codigo_de_evento = novo_codigo_de_evento;

}
void Codigo_de_Evento::validar(int novo_codigo_de_evento) throw (invalid_argument){

    if(novo_codigo_de_evento > LIMITE){
        throw invalid_argument("deu ruim.");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Codigo_de_Apresentacao::setCodigo_de_Apresentacao(int novo_codigo_de_apresentacao) throw (invalid_argument){

    validar(novo_codigo_de_apresentacao);
    codigo_de_apresentacao = novo_codigo_de_apresentacao;

}
void Codigo_de_Apresentacao::validar(int novo_codigo_de_apresentacao) throw (invalid_argument){

    if(novo_codigo_de_apresentacao > LIMITE){
        throw invalid_argument("deu ruim.");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Numero_de_Sala::setNumero_de_Sala(int novo_numero_de_sala) throw (invalid_argument){

    validar(novo_numero_de_sala);
    numero_de_sala = novo_numero_de_sala;

}
void Numero_de_Sala::validar(int novo_numero_de_sala) throw (invalid_argument){

    if(novo_numero_de_sala >= LIMITE_SUPERIOR){
        throw invalid_argument("deu ruim");
    }
    else if(novo_numero_de_sala <= LIMITE_INFERIOR){
        throw invalid_argument("deu ruim");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Preco::setPreco(float novo_preco) throw (invalid_argument){

    validar(novo_preco);
    preco = novo_preco;

}
void Preco::validar(float novo_preco) throw (invalid_argument){

    if(novo_preco > LIMITE_SUPERIOR){
        throw invalid_argument("deu ruim");
    }
    else if(novo_preco < LIMITE_INFERIOR){
        throw invalid_argument("deu ruim");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Estados_Brasileiros::setEstado(string novo_estado_br) throw (invalid_argument){

    validar(novo_estado_br);
    estado_br[0] = novo_estado_br[0];
    estado_br[1] = novo_estado_br[1];

}
void Estados_Brasileiros::validar(string novo_estado_br) throw (invalid_argument){

    int SUCESSO = 0;

    if ((novo_estado_br.compare("AC") == SUCESSO) || (novo_estado_br.compare("AL") == SUCESSO) || (novo_estado_br.compare("AP") == SUCESSO)
        || (novo_estado_br.compare("AM") == SUCESSO) || (novo_estado_br.compare("BA") == SUCESSO) || (novo_estado_br.compare("CE") == SUCESSO)
        || (novo_estado_br.compare("DF") == SUCESSO) || (novo_estado_br.compare("ES") == SUCESSO) || (novo_estado_br.compare("GO") == SUCESSO)
        || (novo_estado_br.compare("MA") == SUCESSO) || (novo_estado_br.compare("MT") == SUCESSO) || (novo_estado_br.compare("MS") == SUCESSO)
        || (novo_estado_br.compare("MG") == SUCESSO) || (novo_estado_br.compare("PA") == SUCESSO) || (novo_estado_br.compare("PB") == SUCESSO)
        || (novo_estado_br.compare("PR") == SUCESSO) || (novo_estado_br.compare("PE") == SUCESSO) || (novo_estado_br.compare("PI") == SUCESSO)
        || (novo_estado_br.compare("RJ") == SUCESSO) || (novo_estado_br.compare("RN") == SUCESSO) || (novo_estado_br.compare("RS") == SUCESSO)
        || (novo_estado_br.compare("RO") == SUCESSO) || (novo_estado_br.compare("RR") == SUCESSO) || (novo_estado_br.compare("SC") == SUCESSO)
        || (novo_estado_br.compare("SP") == SUCESSO) || (novo_estado_br.compare("SE") == SUCESSO) || (novo_estado_br.compare("TO") == SUCESSO) ) {

        // cout << "estado valido";
    }
    else{
        throw invalid_argument("estado invalido");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#endif // DOMINIOS_H_INCLUDED