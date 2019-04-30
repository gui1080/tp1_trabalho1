/**
 * @file testes.h
 *
 * @brief Arquivo com a declaração das classes de teste do programa
 *
 * @author Gabriel e Guilherme
 *
 */


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

    const static int VALOR_VALIDO   = 732;
    const static int VALOR_INVALIDO = 1985;


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

    const static int VALOR_VALIDO   = 7983;
    const static int VALOR_INVALIDO = 23409;


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

    const static int VALOR_VALIDO   = 18793;
    const static int VALOR_INVALIDO = 543870;


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
    const static int VALOR_INVALIDO = 16;


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

    const static float VALOR_VALIDO   = 765.50;
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

    const static int VALOR_VALIDO   = 165;
    const static int VALOR_INVALIDO = 300;

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


class TUNome_de_Evento{

private:

    Nome_de_Evento *evento_teste;

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



// -------------------------------------- TESTES ENTIDADES --------------------------------------------------

class TUIngresso {

private:

    const static int VALOR_VALIDO   = 78943;

    Ingresso *ingresso_teste;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = 1;

    int run();
};

class TUCartao_de_credito {

private:

    const static long long int VALOR_VALIDO_N_CARTAO_CREDITO = 30211944335337;
    const static int VALOR_VALIDO_COD_SEGURANCA = 387;

    Cartao_de_credito *cartao_de_credito_teste;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = 1;

    int run();
};

class TUUsuario {

private:

    const static long long int VALOR_VALIDO_CPF = 69386992086;

    Usuario *usuario_teste;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = 1;

    int run();
};

class TUEvento {

private:

    const static int VALOR_VALIDO_C_EVENTO = 365;
    const static int VALOR_VALIDO_CLASSE_EVENTO = 3;

    Evento *evento_teste;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = 1;

    int run();
};

class TUApresentacao {

private:

    const static int VALOR_VALIDO_C_APRESENTACAO = 3655;
    const static float VALOR_VALIDO_PRECO = 3.45;
    const static int VALOR_VALIDO_SALA = 7;
    const static int VALOR_VALIDO_DISPONIBILIDADE = 45;

    Apresentacao *apresentacao_teste;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = 1;

    int run();
};

#endif // TESTES_H_INCLUDED
