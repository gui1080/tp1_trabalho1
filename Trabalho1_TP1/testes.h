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

class TUCodigo_de_Apresentacao {

private:

    const static int VALOR_VALIDO   = 1234;
    const static int VALOR_INVALIDO = 12345;


    Codigo_de_Apresentacao *codigo_apresentacao_teste;

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

class TUCodigo_de_Ingresso {

private:

    const static int VALOR_VALIDO   = 12345;
    const static int VALOR_INVALIDO = 123456;


    Codigo_de_Ingresso *codigo_ingresso_teste;

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

#endif // TESTES_H_INCLUDED
