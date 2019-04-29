/**
 * @file testes.cpp
 *
 * @brief Arquivo com a implementação dos testes do programa
 *
 * @author Gabriel e Guilherme
 *
 */


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
            cout << "Codigo de Evento " << codigo_evento_teste->getCodigo_de_Evento() << " aceito" << endl;
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
            cout << "Codigo de Apresentacao " << codigo_apresentacao_teste->getCodigo_de_Apresentacao() << " aceito" << endl;
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

//------------------------------------------ TESTES ENTIDADES ------------------------------------

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
    int resultado;

    try{
        ingresso_teste->setIngresso(VALOR_VALIDO);

        ingresso_teste->getIngresso(&teste_ingresso_aux);
        resultado = teste_ingresso_aux.getCodigo_de_Ingresso();

        if (
            resultado != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
    cout << "Ingresso " << endl
    << "CODIGO DO INGRESSO: " << resultado << endl
    << "aceito"               << endl;
}
int TUIngresso::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}


void TUCartao_de_credito::setUp(){
    cartao_de_credito_teste = new Cartao_de_credito();
    estado = SUCESSO;
    cout << endl << "Inicializando teste de cartao de credito" << endl;
}
void TUCartao_de_credito::tearDown(){
    delete cartao_de_credito_teste;
    cout << "finalizando teste de cartao de credito" << endl << endl;
}
void TUCartao_de_credito::testarCenarioSucesso(){

    cout << "testando caso de sucesso" << endl;

    Numero_Cartao_Credito teste_numero;
    Codigo_de_Seguranca_Cartao_Credito teste_codigo_segu;
    Data_Validade_Cartao_Credito teste_data;

    string VALOR_VALIDO_DATA_VALIDADE = "10/39";

    long long int resultado_numero;
    int resultado_codigo_seguranca;
    string resultado_data;

    try{

        //cout << VALOR_VALIDO_N_CARTAO_CREDITO << endl << VALOR_VALIDO_COD_SEGURANCA << endl << VALOR_VALIDO_DATA_VALIDADE << endl;
        cartao_de_credito_teste->setCartao_de_credito(VALOR_VALIDO_N_CARTAO_CREDITO, VALOR_VALIDO_COD_SEGURANCA, VALOR_VALIDO_DATA_VALIDADE);
        cartao_de_credito_teste->getCartao_de_credito(&teste_numero, &teste_codigo_segu, &teste_data);

        resultado_numero = teste_numero.getNumero_Cartao_Credito();
        resultado_codigo_seguranca = teste_codigo_segu.getCodigo_de_Seguranca_Cartao_Credito();
        cout << "resultado do codigo -> " << teste_codigo_segu.getCodigo_de_Seguranca_Cartao_Credito() << endl;
        resultado_data = teste_data.getData_Validade_Cartao_Credito();

        if (
            resultado_numero != VALOR_VALIDO_N_CARTAO_CREDITO ||
            teste_codigo_segu.getCodigo_de_Seguranca_Cartao_Credito() != VALOR_VALIDO_COD_SEGURANCA ||
            resultado_data != VALOR_VALIDO_DATA_VALIDADE)
            estado = FALHA;
    }

    catch(invalid_argument excecao){
        estado = FALHA;
    }
    cout << "Cartao de credito " << endl
    << "NUMERO DO CARTAO DE CREDITO: " << resultado_numero           << endl
    << "CODIGO DE SEGURANCA: "         << teste_codigo_segu.getCodigo_de_Seguranca_Cartao_Credito() << endl
    << "DATA DE VALIDADE: "            << resultado_data             << endl
    << "aceito" << endl;
}
int TUCartao_de_credito::run(){
    setUp();
    testarCenarioSucesso();
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
    cout << "Finalizando teste de Nome de Evento" << endl;
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
int TUNome_de_Evento::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}


void TUUsuario::setUp(){
    usuario_teste = new Usuario();
    estado = SUCESSO;
    cout << endl << "Inicializando teste de Usuario" << endl;
}
void TUUsuario::tearDown(){
    delete usuario_teste;
    cout << "finalizando teste de usuario" << endl << endl;
}
void TUUsuario::testarCenarioSucesso(){

    cout << "testando caso de sucesso" << endl;

    CPF teste_cpf;
    Senha teste_senha;

    string VALOR_VALIDO_SENHA = "TyU876";

    long long int resultado_cpf;
    string resultado_senha;

    try{

        //cout << VALOR_VALIDO_N_CARTAO_CREDITO << endl << VALOR_VALIDO_COD_SEGURANCA << endl << VALOR_VALIDO_DATA_VALIDADE << endl;
        usuario_teste->setUsuario(VALOR_VALIDO_CPF, VALOR_VALIDO_SENHA);
        usuario_teste->getUsuario(&teste_cpf, &teste_senha);

        resultado_cpf = teste_cpf.getCPF();
        resultado_senha = teste_senha.getSenha();
        //cout << "resultado do codigo -> " << resultado_codigo_seguranca << endl;

        if (
            resultado_cpf != VALOR_VALIDO_CPF ||
            resultado_senha != VALOR_VALIDO_SENHA){

            estado = FALHA;
            cout << resultado_cpf << " != " << VALOR_VALIDO_CPF << endl;
            cout << resultado_senha << "!= " << VALOR_VALIDO_SENHA << endl;
            }

    }

    catch(invalid_argument excecao){
        estado = FALHA;
    }
    cout << "Usuario" << endl
    << "CPF: "   << resultado_cpf   << endl
    << "SENHA: " << resultado_senha << endl
    << "aceito"  << endl;
}
int TUUsuario::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}


void TUEvento::setUp(){
    evento_teste = new Evento();
    estado = SUCESSO;
    cout << endl << "Inicializando teste de evento" << endl;
}
void TUEvento::tearDown(){
    delete evento_teste;
    cout << "finalizando teste de evento" << endl << endl;
}
void TUEvento::testarCenarioSucesso(){

    cout << "testando caso de sucesso" << endl;

    Codigo_de_Evento teste_codigo;
    Nome_de_Evento teste_nome;
    Cidade teste_cidade;
    Estados_Brasileiros teste_estado;
    Classe_Evento teste_classe;
    Faixa_Etaria teste_faixa;

    string VALOR_VALIDO_NOME = "Show da Hatsune";
    string VALOR_VALIDO_CIDADE = "Uberaba";
    string VALOR_VALIDO_ESTADOS = "MA";
    string VALOR_VALIDO_FAIXA = "18";

    int resultado_codigo;
    string resultado_nome;
    string resultado_cidade;
    string resultado_estado;
    int resultado_classe;
    string resultado_faixa;

try{
        evento_teste->setEvento(VALOR_VALIDO_C_EVENTO, VALOR_VALIDO_NOME, VALOR_VALIDO_CIDADE,
                                VALOR_VALIDO_ESTADOS, VALOR_VALIDO_CLASSE_EVENTO, VALOR_VALIDO_FAIXA);

        cout << VALOR_VALIDO_C_EVENTO << endl;
        cout << VALOR_VALIDO_NOME << endl;
        cout << VALOR_VALIDO_CIDADE << endl;
        cout << VALOR_VALIDO_ESTADOS << endl;
        cout << VALOR_VALIDO_CLASSE_EVENTO << endl;
        cout << VALOR_VALIDO_FAIXA << endl;

        evento_teste->getEvento(&teste_codigo, &teste_nome, &teste_cidade, &teste_estado, &teste_classe, &teste_faixa);

        resultado_codigo = teste_codigo.getCodigo_de_Evento();
        resultado_nome   = teste_nome.getNome_de_Evento();
        resultado_cidade = teste_cidade.getCidade();
        resultado_estado = teste_estado.getEstado();
        resultado_classe = teste_classe.getClasse_Evento();
        resultado_faixa  = teste_faixa.getFaixa_Etaria();

        if (
            resultado_codigo != VALOR_VALIDO_C_EVENTO ||
            resultado_nome   != VALOR_VALIDO_NOME ||
            resultado_cidade != VALOR_VALIDO_CIDADE ||
            resultado_estado != VALOR_VALIDO_ESTADOS ||
            resultado_classe != VALOR_VALIDO_CLASSE_EVENTO ||
            resultado_faixa  != VALOR_VALIDO_FAIXA){

            estado = FALHA;
            }

}
    catch(invalid_argument excecao){
        estado = FALHA;
    }

    cout << "Evento " << endl << "CODIGO DE EVENTO: " << resultado_codigo << endl
    << "NOME: "    << resultado_nome   << endl
    << "CIDADE: "  << resultado_cidade << endl
    << "ESTADO: "  << resultado_estado << endl
    << "CLASSE: "  << resultado_classe << endl
    << "FAIXA: "   << resultado_faixa  << endl
    << "aceito" << endl;
}
int TUEvento::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}


void TUApresentacao::setUp(){
    apresentacao_teste = new Apresentacao();
    estado = SUCESSO;
    cout << endl << "Inicializando teste de apesentacao" << endl;
}
void TUApresentacao::tearDown(){
    delete apresentacao_teste;
    cout << "finalizando teste de apresentacao" << endl << endl;
}
void TUApresentacao::testarCenarioSucesso(){

    cout << "testando caso de sucesso" << endl;

    Codigo_de_Apresentacao teste_codigo;
    Data teste_data;
    Horario teste_horario;
    Preco teste_preco;
    Numero_de_Sala teste_sala;
    Disponibilidade teste_disponibilidade;

    string VALOR_VALIDO_DATA = "111020";
    string VALOR_VALIDO_HORARIO = "10:30";

    int resultado_codigo;
    string resultado_data;
    string resultado_horario;
    float resultado_preco;
    int resultado_sala;
    int resultado_disponibilidade;

    try{

        //cout << VALOR_VALIDO_N_CARTAO_CREDITO << endl << VALOR_VALIDO_COD_SEGURANCA << endl << VALOR_VALIDO_DATA_VALIDADE << endl;
        apresentacao_teste->setApresentacao(VALOR_VALIDO_C_APRESENTACAO, VALOR_VALIDO_DATA, VALOR_VALIDO_HORARIO,
                                VALOR_VALIDO_PRECO, VALOR_VALIDO_SALA, VALOR_VALIDO_DISPONIBILIDADE);
        apresentacao_teste->getApresentacao(&teste_codigo, &teste_data, &teste_horario, &teste_preco, &teste_sala, &teste_disponibilidade);

        resultado_codigo = teste_codigo.getCodigo_de_Apresentacao();
        resultado_data = teste_data.getData();
        //teste_data.printData();
        cout << "-------------------------------------------------" << endl;
        cout << "era pra ta aqui " << resultado_data << " mas n esta " << VALOR_VALIDO_DATA <<  endl;
        resultado_horario = teste_horario.getHorario();
        resultado_preco = teste_preco.getPreco();
        resultado_sala = teste_sala.getNumero_de_Sala();
        resultado_disponibilidade = teste_disponibilidade.getDisponibilidade();

        if (
            resultado_codigo != VALOR_VALIDO_C_APRESENTACAO ||
            resultado_data != VALOR_VALIDO_DATA ||
            resultado_horario != VALOR_VALIDO_HORARIO ||
            resultado_preco != VALOR_VALIDO_PRECO ||
            resultado_sala != VALOR_VALIDO_SALA ||
            resultado_disponibilidade != VALOR_VALIDO_DISPONIBILIDADE)
            estado = FALHA;
    }

    catch(invalid_argument excecao){
        estado = FALHA;
    }
    cout << "Apresentacao " << endl
    << "CODIGO: "          << resultado_codigo          << endl
    << "DATA: "            << resultado_data            << endl
    << "HORARIO: "         << resultado_horario         << endl
    << "PRECO: "           << resultado_preco           << endl
    << "SALA: "            << resultado_sala            << endl
    << "DISPONIBILIDADE: " << resultado_disponibilidade <<  endl
    << "aceito"            << endl;
}
int TUApresentacao::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

