/*#include "testes.h"

using namespace std;

void TUCodigo_de_Evento::setUp(){
    codigo_evento_teste = new Codigo_de_Evento();
    estado = SUCESSO;
}

void TUCodigo_de_Evento::tearDown(){
    delete codigo_evento_teste;
}

void TUCodigo_de_Evento::testarCenarioSucesso(){
    try{
        codigo_evento_teste->setCodigo_de_Evento(VALOR_VALIDO);
        if (codigo_evento_teste->getCodigo_de_Evento() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUCodigo_de_Evento::testarCenarioFalha(){
    try{
        codigo_evento_teste->setCodigo_de_Evento(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUCodigo_de_Evento::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
*/
