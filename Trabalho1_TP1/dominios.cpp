#include <stdexcept>
#include <iostream>
#include <string.h>

#include "dominios.h"

using namespace std;

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
