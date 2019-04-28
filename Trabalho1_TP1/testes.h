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

class TUData{

private:

    Data *data_teste;

    int estado;


    //const static string DATA_VALIDA;
    //const static string DATA_INVALIDA;

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

class TUCidade{

private:

    Cidade *cidade_teste;

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


/*
class TUNome_de_Evento{

};
*/

// -------------------------------------- TESTES ENTIDADES --------------------------------------------------

class TUIngresso {

private:

    const static int VALOR_VALIDO   = 12345;
    const static int VALOR_INVALIDO = 123456;


    Ingresso *ingresso_teste;

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

class TUCartao_de_credito {

private:

    const static long long int VALOR_VALIDO_N_CARTAO_CREDITO = 30211944335337;
    const static long long int VALOR_INVALIDO_N_CARTAO_CREDITO = 77777777777777;
    const static int VALOR_VALIDO_COD_SEGURANCA = 123;
    const static int VALOR_INVALIDO_COD_SEGURANCA =4567;

    Cartao_de_credito *cartao_de_credito_teste;

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

class TUUsuario {

private:

    const static long long int VALOR_VALIDO_CPF = 69386992086;
    const static long long int VALOR_INVALIDO_CPF = 00000000000;

    Usuario *usuario_teste;

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

class TUEvento {

private:

    const static int VALOR_VALIDO_C_EVENTO = 365;
    const static int VALOR_INVALIDO_C_EVENTO = 8765;
    const static int VALOR_VALIDO_CLASSE_EVENTO = 3;
    const static int VALOR_INVALIDO_CLASSE_EVENTO = 45;

    Evento *evento_teste;

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

class TUApresentacao {

private:

    const static int VALOR_VALIDO_C_APRESENTACAO = 3655;
    const static int VALOR_INVALIDO_C_APRESENTACAO = 876565;
    const static float VALOR_VALIDO_PRECO = 3.45;
    const static float VALOR_INVALIDO_PRECO = 459876;
    const static int VALOR_VALIDO_SALA = 7;
    const static int VALOR_INVALIDO_SALA = 19;
    const static int VALOR_VALIDO_DISPONIBILIDADE = 45;
    const static int VALOR_INVALIDO_DISPONIBILIDADE = 300;

    Apresentacao *apresentacao_teste;

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
