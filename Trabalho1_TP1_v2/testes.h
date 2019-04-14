#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED


using namespace std;


class TUCodigo_de_Evento {

private:

    const static int VALOR_VALIDO   = 123;
    const static int VALOR_INVALIDO = 1234;


    Codigo_de_Evento *codigo_evento_teste;

    int estado;


    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = 1;

    int run();
};

//#endif // TESTES_H_INCLUDED

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

#endif
