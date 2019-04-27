#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

/*
Feito por:
Guilherme Braga Pinto
Gabriel Matheus da Rocha de Oliveira
Last Update: xx/xx/2019
UnB
*/

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

class TUEstados_Brasileiros {

private:

    Estados_Brasileiros *estado_br_teste;

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

class TUNumero_de_Sala {

private:

    const static int VALOR_VALIDO   = 3;
    const static int VALOR_INVALIDO = 34;


    Numero_de_Sala *numero_de_sala_teste;

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

class TUPreco {

private:

    const static int VALOR_VALIDO   = 765;
    const static int VALOR_INVALIDO = 34987;


    Preco *preco_teste;

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

class TUClasse_Evento {

private:

    const static int VALOR_VALIDO   = 3;
    const static int VALOR_INVALIDO = 9;


    Classe_Evento *classe_evento_teste;

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

class TUCodigo_de_Seguranca_Cartao_Credito {

private:

    const static int VALOR_VALIDO   = 123;
    const static int VALOR_INVALIDO = 1234;


    Codigo_de_Seguranca_Cartao_Credito *codigo_teste;

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

class TUNumero_Cartao_Credito {

private:

    const static long long int VALOR_VALIDO   = 30211944335337;
    const static long long int VALOR_INVALIDO = 77777777777777;


    Numero_Cartao_Credito *cartao_teste;

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
class TUCPF {

private:

    CPF *cpf_teste;

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


class TUDisponibilidade {

private:

    const static int VALOR_VALIDO   = 123;
    const static int VALOR_INVALIDO = 7777;

    Disponibilidade *disp_teste;

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

class TUData_Validade_Cartao_Credito {

private:

    Data_Validade_Cartao_Credito *val_teste;

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



////////////////////////////////////////////////////////////////////////

class TUSenha {

private:

    Senha *senha_teste;

    int estado;


    const static string SENHA_VALIDA;
    const static string SENHA_INVALIDA;

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



/*
class TUFaixa_Etaria {

private:

    Faixa_Etaria *faixa_etaria_teste;

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
*/


/*
class TUHorario {

private:

    Horario *horario_teste;

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
*/


#endif // TESTES_H_INCLUDED
