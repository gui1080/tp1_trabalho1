#include "testes.h"
#include <iostream>

const string TUSenha::SENHA_VALIDA ("pAa2O3");
const string TUSenha::SENHA_INVALIDA ("12345");

//const string TUData::DATA_VALIDA ("121220");
//const string TUData::DATA_INVALIDA ("777777");

using namespace std;

void TUCodigo_de_Evento::setUp(){
    cout << endl << "Inicializando teste de Codigo de Evento\n" << endl;
    codigo_evento_teste = new Codigo_de_Evento();
    estado = SUCESSO;
}
void TUCodigo_de_Evento::tearDown(){
    cout << "Finalizando teste de Codigo de Evento" << endl;
    delete codigo_evento_teste;
}
void TUCodigo_de_Evento::testarCenarioSucesso(){

    cout << "Testando caso de sucesso" << endl;

    try{
        codigo_evento_teste->setCodigo_de_Evento(VALOR_VALIDO);
        if (codigo_evento_teste->getCodigo_de_Evento() != VALOR_VALIDO){
            estado = FALHA;
        }
        else{
            cout << "Codigo de Evento" << codigo_evento_teste->getCodigo_de_Evento() << " aceito" << endl;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUCodigo_de_Evento::testarCenarioFalha(){

    cout << "Testando caso de falha" << endl;

    try{
        codigo_evento_teste->setCodigo_de_Evento(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        cout << "1234 nao pode ser um Codigo de Evento" << endl;
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
    cout << endl << "Inicializando teste de Codigo de Apresentacao\n" << endl;
    codigo_apresentacao_teste = new Codigo_de_Apresentacao();
    estado = SUCESSO;
}
void TUCodigo_de_Apresentacao::tearDown(){
    cout << "Finalizando teste de Codigo de Apresentacao" << endl;
    delete codigo_apresentacao_teste;
}
void TUCodigo_de_Apresentacao::testarCenarioSucesso(){

    cout << "Testando caso de sucesso" << endl;

    try{
        codigo_apresentacao_teste->setCodigo_de_Apresentacao(VALOR_VALIDO);
        if (codigo_apresentacao_teste->getCodigo_de_Apresentacao() != VALOR_VALIDO){
            estado = FALHA;
        }
        else{
            cout << "Codigo de Apresentacao" << codigo_apresentacao_teste->getCodigo_de_Apresentacao() << " aceito" << endl;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUCodigo_de_Apresentacao::testarCenarioFalha(){

    cout << "Testando caso de falha" << endl;

    try{
        codigo_apresentacao_teste->setCodigo_de_Apresentacao(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        cout << "12345 nao pode ser um Codigo de Apresentacao" << endl;
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
    cout << endl << "Inicializando teste de Codigo de Ingresso\n" << endl;
    codigo_ingresso_teste = new Codigo_de_Ingresso();
    estado = SUCESSO;
}
void TUCodigo_de_Ingresso::tearDown(){
    cout << "Finalizando teste de Codigo de Ingresso" << endl;
    delete codigo_ingresso_teste;
}
void TUCodigo_de_Ingresso::testarCenarioSucesso(){

    cout << "Testando caso de sucesso" << endl;

    try{
        codigo_ingresso_teste->setCodigo_de_Ingresso(VALOR_VALIDO);
        if (codigo_ingresso_teste->getCodigo_de_Ingresso() != VALOR_VALIDO){
            estado = FALHA;
        }
        else{
            cout << "Codigo de Ingresso " << codigo_ingresso_teste->getCodigo_de_Ingresso() << " aceito" << endl;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUCodigo_de_Ingresso::testarCenarioFalha(){

    cout << "Testando caso de falha" << endl;

    try{
        codigo_ingresso_teste->setCodigo_de_Ingresso(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        cout << "123456 nao pode ser um Codigo de Ingresso" << endl;
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void TUEstados_Brasileiros::setUp(){
    cout << endl << "Inicializando teste de Estados Brasileiros\n" << endl;
    estado_br_teste = new Estados_Brasileiros();
    estado = SUCESSO;
}
void TUEstados_Brasileiros::tearDown(){
    cout << "Finalizando teste de Estados Brasileiros" << endl;
    delete estado_br_teste;
}
void TUEstados_Brasileiros::testarCenarioSucesso(){

    cout << "Testando caso de sucesso" << endl;

    string VALOR_VALIDO ("AM");

    try{
        estado_br_teste->setEstado(VALOR_VALIDO);
        if (estado_br_teste->getEstado() != "AM"){
            estado = FALHA;
        }
        else{
            cout << "Estado Brasileiro " << estado_br_teste->getEstado() << " aceito" << endl;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUEstados_Brasileiros::testarCenarioFalha(){

    cout << "Testando caso de falha" << endl;

    string VALOR_INVALIDO ("PF");

    try{
        estado_br_teste->setEstado(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        cout << "PF nao representa um Estado Brasileiro" << endl;
        return;
    }
}
int TUEstados_Brasileiros::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void TUNumero_de_Sala::setUp(){
    cout << endl << "Inicializando teste de Numero de Sala\n" << endl;
    numero_de_sala_teste = new Numero_de_Sala();
    estado = SUCESSO;
}
void TUNumero_de_Sala::tearDown(){
    delete numero_de_sala_teste;
    cout << "Finalizando teste de Numero de Sala" << endl;
}
void TUNumero_de_Sala::testarCenarioSucesso(){

    cout << "Testando caso de sucesso" << endl;

    try{
        numero_de_sala_teste->setNumero_de_Sala(VALOR_VALIDO);
        if (numero_de_sala_teste->getNumero_de_Sala() != VALOR_VALIDO){
            estado = FALHA;
        }
        else{
            cout << "Numero de Sala " << numero_de_sala_teste->getNumero_de_Sala() << " aceito" << endl;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUNumero_de_Sala::testarCenarioFalha(){

    cout << "Testando caso de falha" << endl;

    try{
        numero_de_sala_teste->setNumero_de_Sala(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        cout << "34 e uma sala invalida" << endl;
        return;
    }
}
int TUNumero_de_Sala::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void TUPreco::setUp(){
    cout << endl << "Inicializando teste de Preco\n" << endl;
    preco_teste = new Preco();
    estado = SUCESSO;
}
void TUPreco::tearDown(){
    delete preco_teste;
    cout << "Finalizando teste de Preco" << endl;
}
void TUPreco::testarCenarioSucesso(){

    cout << "Testando caso de sucesso" << endl;

    try{
        preco_teste->setPreco(VALOR_VALIDO);
        if (preco_teste->getPreco() != VALOR_VALIDO){
            estado = FALHA;
        }
        else{
            cout << "Preco " << preco_teste->getPreco() << " aceito" << endl;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUPreco::testarCenarioFalha(){

    cout << "Testando caso de falha" << endl;

    try{
        preco_teste->setPreco(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        cout << "34987 nao pode ser um Preco" << endl;
        return;
    }
}
int TUPreco::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void TUClasse_Evento::setUp(){
    cout << endl << "Inicializando teste de Classe de Evento\n" << endl;
    classe_evento_teste = new Classe_Evento();
    estado = SUCESSO;
}
void TUClasse_Evento::tearDown(){
    delete classe_evento_teste;
    cout << "Finalizando teste de Classe de Evento" << endl;
}
void TUClasse_Evento::testarCenarioSucesso(){

    cout << "Testando caso de sucesso" << endl;

    try{
        classe_evento_teste->setClasse_Evento(VALOR_VALIDO);
        if (classe_evento_teste->getClasse_Evento() != VALOR_VALIDO){
            estado = FALHA;
        }
        else{
            cout << "Classe de Evento " << classe_evento_teste->getClasse_Evento() << " aceito" << endl;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUClasse_Evento::testarCenarioFalha(){

    cout << "Testando caso de falha" << endl;

    try{
        classe_evento_teste->setClasse_Evento(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        cout << "9 nao pode ser uma Classe de Evento" << endl;
        return;
    }
}
int TUClasse_Evento::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void TUCodigo_de_Seguranca_Cartao_Credito::setUp(){
    cout << endl << "Inicializando teste de Codigo de Seguranca de Cartao de Credito\n" << endl;
    codigo_teste = new Codigo_de_Seguranca_Cartao_Credito();
    estado = SUCESSO;
}
void TUCodigo_de_Seguranca_Cartao_Credito::tearDown(){
    delete codigo_teste;
    cout << "Finalizando teste de Codigo de Seguranca de Cartao de Credito" << endl;
}
void TUCodigo_de_Seguranca_Cartao_Credito::testarCenarioSucesso(){

    cout << "Testando caso de sucesso" << endl;

    try{
        codigo_teste->setCodigo_de_Seguranca_Cartao_Credito(VALOR_VALIDO);
        if (codigo_teste->getCodigo_de_Seguranca_Cartao_Credito() != VALOR_VALIDO){
            estado = FALHA;
        }
        else{
            cout << "Codigo de Seguranca de Cartao de Credito " << codigo_teste->getCodigo_de_Seguranca_Cartao_Credito() << " aceito" << endl;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUCodigo_de_Seguranca_Cartao_Credito::testarCenarioFalha(){

    cout << "Testando caso de falha" << endl;

    try{
        codigo_teste->setCodigo_de_Seguranca_Cartao_Credito(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        cout << "1234 nao pode ser um Numero de Cartao de Credito" << endl;
        return;
    }
}
int TUCodigo_de_Seguranca_Cartao_Credito::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void TUNumero_Cartao_Credito::setUp(){
    cout << endl << "Inicializando teste de Cartao de Credito\n" << endl;
    cartao_teste = new Numero_Cartao_Credito();
    estado = SUCESSO;
}
void TUNumero_Cartao_Credito::tearDown(){
    delete cartao_teste;
    cout << "Finalizando teste de Cartao de Credito" << endl;
}
void TUNumero_Cartao_Credito::testarCenarioSucesso(){

    cout << "Testando caso de sucesso" << endl;

    try{
        cartao_teste->setNumero_Cartao_Credito(VALOR_VALIDO);
        if (cartao_teste->getNumero_Cartao_Credito() != VALOR_VALIDO){
            estado = FALHA;
        }
        else{
            cout << "Numero de Cartao de Credito " << cartao_teste->getNumero_Cartao_Credito() << " aceito" << endl;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUNumero_Cartao_Credito::testarCenarioFalha(){

    cout << "Testando caso de falha" << endl;

    try{
        cartao_teste->setNumero_Cartao_Credito(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        cout << "77777777777777 nao pode ser um Numero de Cartao de Credito" << endl;
        return;
    }
}
int TUNumero_Cartao_Credito::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void TUDisponibilidade::setUp(){
    cout << endl << "Inicializando teste de Disponibilidade\n" << endl;
    disp_teste = new Disponibilidade();
    estado = SUCESSO;
}
void TUDisponibilidade::tearDown(){
    delete disp_teste;
    cout << "Finalizando teste de Disponibilidade" << endl;
}
void TUDisponibilidade::testarCenarioSucesso(){

    cout << "Testando caso de sucesso" << endl;

    try{
        disp_teste->setDisponibilidade(VALOR_VALIDO);
        if (disp_teste->getDisponibilidade() != VALOR_VALIDO){
            estado = FALHA;
        }
        else{
            cout << "Disponibilidade " << disp_teste->getDisponibilidade() << " aceita" << endl;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUDisponibilidade::testarCenarioFalha(){

    cout << "Testando caso de falha" << endl;

    try{
        disp_teste->setDisponibilidade(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        cout << "7777 nao pode ser uma Disponibilidade" << endl;
        return;
    }
}
int TUDisponibilidade::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void TUData_Validade_Cartao_Credito::setUp(){
    cout << endl << "Inicializando teste de Validade do Cartao\n" << endl;
    val_teste = new Data_Validade_Cartao_Credito();
    estado = SUCESSO;
}
void TUData_Validade_Cartao_Credito::tearDown(){
    delete val_teste;
    cout << "Finalizando teste de Validade do Cartao de Credito" << endl;
}
void TUData_Validade_Cartao_Credito::testarCenarioSucesso(){

    cout << "Testando caso de sucesso" << endl;

    try{
        val_teste->setData_Validade_Cartao_Credito("10/10");
        if (val_teste->getData_Validade_Cartao_Credito() != ("10/10")){
            estado = FALHA;
        }
        else{
            cout << "Validade do Cartao " << val_teste->getData_Validade_Cartao_Credito() << " aceita" << endl;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUData_Validade_Cartao_Credito::testarCenarioFalha(){

    cout << "Testando caso de falha" << endl;

    try{
        val_teste->setData_Validade_Cartao_Credito("kkkkk");
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        cout << "kkkkk nao pode ser Data de Validade de Cartao de Credito" << endl;
        return;
    }
}
int TUData_Validade_Cartao_Credito::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void TUCPF::setUp(){
    cout << endl << "Inicializando teste de CPF\n" << endl;
    cpf_teste = new CPF();
    estado = SUCESSO;
}
void TUCPF::tearDown(){
    delete cpf_teste;
    cout << "Finalizando teste de CPF" << endl;
}
void TUCPF::testarCenarioSucesso(){

    cout << "Testando caso de sucesso" << endl;

    long long int VALOR_VALIDO = 69386992086;    // CPF qualquer gerado online em um site

    try{
        cpf_teste->setCPF(VALOR_VALIDO);
        if (cpf_teste->getCPF() != (VALOR_VALIDO)){
            estado = FALHA;
        }
        else{
            cout << "CPF " << cpf_teste->getCPF() << " aceito" << endl;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUCPF::testarCenarioFalha(){

    cout << "Testando caso de falha" << endl;

    long long int VALOR_INVALIDO = 00000000000;

    try{
        cpf_teste->setCPF(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        cout << "00000000000 nao pode ser um CPF valido" << endl;
        return;
    }
}
int TUCPF::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void TUSenha::setUp(){
    cout << endl << "Inicializando teste de Senha\n" << endl;
    senha_teste = new Senha();
    estado = SUCESSO;
}
void TUSenha::tearDown(){
    delete senha_teste;
    cout << "Finalizando teste de Senha" << endl;
}
void TUSenha::testarCenarioSucesso(){

    cout << "Testando caso de sucesso" << endl;

    try{
        senha_teste->setSenha(SENHA_VALIDA);
        //cout<<senha_teste->getSenha();
        if (senha_teste->getSenha() != SENHA_VALIDA){
            estado = FALHA;
        }
        else{
            cout << "Senha " << senha_teste->getSenha() << " aceita" << endl;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUSenha::testarCenarioFalha(){

    cout << "Testando caso de falha" << endl;

    try{
        senha_teste->setSenha(SENHA_INVALIDA);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        cout << "12345 nao pode ser senha" << endl;
        return;
    }
}
int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void TUFaixa_Etaria::setUp(){
    cout << endl << "Inicializando teste de Faixa Etaria\n" << endl;
    faixa_etaria_teste = new Faixa_Etaria();
    estado = SUCESSO;
}
void TUFaixa_Etaria::tearDown(){
    delete faixa_etaria_teste;
    cout << "Finalizando teste de Faixa Etaria" << endl;
}
void TUFaixa_Etaria::testarCenarioSucesso(){

    cout << "Testando caso de sucesso" << endl;

    try{
        faixa_etaria_teste->setFaixa_Etaria("12");
        if ((faixa_etaria_teste->getFaixa_Etaria()) != "12"){
            estado = FALHA;
        }
        else{
            cout << "Faixa Etaria " << faixa_etaria_teste->getFaixa_Etaria() << " aceita" << endl;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUFaixa_Etaria::testarCenarioFalha(){

    cout << "Testando caso de falha" << endl;

    try{
        faixa_etaria_teste->setFaixa_Etaria("42");
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        cout << "Faixa Etaria 42 invalida" << endl;
        return;
    }
}
int TUFaixa_Etaria::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void TUData::setUp(){
    cout << endl << "Inicializando teste de Data\n" << endl;
    data_teste = new Data();
    estado = SUCESSO;
}
void TUData::tearDown(){
    delete data_teste;
    cout << "Finalizando teste de Data" << endl;
}
void TUData::testarCenarioSucesso(){

    cout << "Testando caso de sucesso" << endl;

    try{
        data_teste->setData("121220");
        //cout<<data_teste->getData();
        if (data_teste->getData() != "121220"){
            estado = FALHA;
        }
        else{
            cout << "Data 12/12/2021 aceita (escrita como 121220 no input)" << endl;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUData::testarCenarioFalha(){

    cout << "Testando caso de falha" << endl;

    try{
        data_teste->setData("777777");
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        cout << "77/77/77 nao pode ser data" << endl;
        return;
    }
}
int TUData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void TUHorario::setUp(){
    horario_teste = new Horario();
    estado = SUCESSO;
    cout << endl << "Inicializando teste de Horario" << endl;
}
void TUHorario::tearDown(){
    delete horario_teste;
    cout << "Finalizando teste de horario" << endl;
}
void TUHorario::testarCenarioSucesso(){

    //string VALOR_VALIDO ("08:15");
    cout << "Testando caso de sucesso" << endl;

    try{
        horario_teste->setHorario("08:15");
        if (horario_teste->getHorario() == "08:15")
            estado = SUCESSO;
            cout << "horario " << horario_teste->getHorario() << " aceito" << endl;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUHorario::testarCenarioFalha(){

    //string VALOR_INVALIDO ("34:72");
    cout << "Testando caso de falha" << endl;

    try{
        horario_teste->setHorario("99:99");
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        cout << "Horario 99:99 invalido" << endl;
        return;
    }
}
int TUHorario::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void TUCidade::setUp(){
    cout << endl << "Inicializando teste de Cidade\n" << endl;
    cidade_teste = new Cidade();
    estado = SUCESSO;
}
void TUCidade::tearDown(){
    delete cidade_teste;
    cout << "Finalizando teste de Cidade" << endl;
}
void TUCidade::testarCenarioSucesso(){

    cout << "Testando caso de sucesso" << endl;

    try{
        cidade_teste->setCidade("Uberaba");
        //cout<<data_teste->getData();
        if (cidade_teste->getCidade() != "Uberaba"){
            estado = FALHA;
        }
        else{
            cout << "Uberaba aceito como cidade" << endl;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUCidade::testarCenarioFalha(){

    cout << "Testando caso de falha" << endl;

    try{
        cidade_teste->setCidade("777777");
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        cout << "777777 nao pode ser uma cidade" << endl;
        return;
    }
}
int TUCidade::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void TUNome_de_Evento::setUp(){
    cout << endl << "Inicializando teste de Nome de Evento\n" << endl;
    evento_teste = new Nome_de_Evento();
    estado = SUCESSO;
}
void TUNome_de_Evento::tearDown(){
    delete evento_teste;
    cout << "Finalizando teste de Cidade" << endl;
}
void TUNome_de_Evento::testarCenarioSucesso(){

    cout << "Testando caso de sucesso" << endl;

    try{
        evento_teste->setNome_de_Evento("Show da Hatsune Miku");
        //cout<<data_teste->getData();
        if (evento_teste->getNome_de_Evento() != "Show da Hatsune Miku"){
            estado = FALHA;
        }
        else{
            cout << "Show da Hatsune Miku aceito como evento" << endl;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUNome_de_Evento::testarCenarioFalha(){

    cout << "Testando caso de falha" << endl;

    try{
        evento_teste->setNome_de_Evento("rafa moreira   777");
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        cout << "rafa moreira   777 nao pode ser um evento" << endl;
        return;
    }
}
int TUNome_de_Evento::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
//------------------------------------------ TESTES ENTIDADES ------------------------------------

/*
void TUIngresso::setUp(){
    ingresso_teste = new Ingresso();
    estado = SUCESSO;
    cout << endl << "Inicializando teste de Ingresso" << endl;
}
void TUIngresso::tearDown(){
    delete ingresso_teste;
    cout << "finalizando teste de ingresso" << endl << endl;
}
void TUIngresso::testarCenarioSucesso(){

    cout << "testando caso de sucesso" << endl;

    Codigo_de_Ingresso teste_ingresso_aux;

    try{
        ingresso_teste->setIngresso(VALOR_VALIDO);

        ingresso_teste->getIngresso(&teste_ingresso_aux);
        int resultado = teste_ingresso_aux.getCodigo_de_Ingresso();

    cout << "Ingresso -> " << resultado << endl;
        if (
            resultado != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
    cout << "Ingresso " << resultado << "  aceito" << endl;
}
void TUIngresso::testarCenarioFalha(){
    try{
        ingresso_teste->setIngresso(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        cout << "Ingresso" << VALOR_INVALIDO << "invalido" << endl;
        return;
    }
}
int TUIngresso::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
*/
