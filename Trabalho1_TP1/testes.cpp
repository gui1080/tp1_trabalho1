#include "testes.h"

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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void TUCodigo_de_Apresentacao::setUp(){
    codigo_apresentacao_teste = new Codigo_de_Apresentacao();
    estado = SUCESSO;
}
void TUCodigo_de_Apresentacao::tearDown(){
    delete codigo_apresentacao_teste;
}
void TUCodigo_de_Apresentacao::testarCenarioSucesso(){
    try{
        codigo_apresentacao_teste->setCodigo_de_Apresentacao(VALOR_VALIDO);
        if (codigo_apresentacao_teste->getCodigo_de_Apresentacao() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUCodigo_de_Apresentacao::testarCenarioFalha(){
    try{
        codigo_apresentacao_teste->setCodigo_de_Apresentacao(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}
int TUCodigo_de_Apresentacao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void TUCodigo_de_Ingresso::setUp(){
    codigo_ingresso_teste = new Codigo_de_Ingresso();
    estado = SUCESSO;
}
void TUCodigo_de_Ingresso::tearDown(){
    delete codigo_ingresso_teste;
}
void TUCodigo_de_Ingresso::testarCenarioSucesso(){
    try{
        codigo_ingresso_teste->setCodigo_de_Ingresso(VALOR_VALIDO);
        if (codigo_ingresso_teste->getCodigo_de_Ingresso() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUCodigo_de_Ingresso::testarCenarioFalha(){
    try{
        codigo_ingresso_teste->setCodigo_de_Ingresso(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}
int TUCodigo_de_Ingresso::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
