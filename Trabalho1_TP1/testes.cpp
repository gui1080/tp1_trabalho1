#include "testes.h"
#include <iostream>

const string TUSenha::SENHA_VALIDA ("pAa2O3");
const string TUSenha::SENHA_INVALIDA ("12345");

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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void TUEstados_Brasileiros::setUp(){
    estado_br_teste = new Estados_Brasileiros();
    estado = SUCESSO;
}
void TUEstados_Brasileiros::tearDown(){
    delete estado_br_teste;
}
void TUEstados_Brasileiros::testarCenarioSucesso(){

    string VALOR_VALIDO ("AM");

    try{
        estado_br_teste->setEstado(VALOR_VALIDO);
        if (estado_br_teste->getEstado() != "AM")
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUEstados_Brasileiros::testarCenarioFalha(){

    string VALOR_INVALIDO ("PF");

    try{
        estado_br_teste->setEstado(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
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
    numero_de_sala_teste = new Numero_de_Sala();
    estado = SUCESSO;
}
void TUNumero_de_Sala::tearDown(){
    delete numero_de_sala_teste;
}
void TUNumero_de_Sala::testarCenarioSucesso(){
    try{
        numero_de_sala_teste->setNumero_de_Sala(VALOR_VALIDO);
        if (numero_de_sala_teste->getNumero_de_Sala() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUNumero_de_Sala::testarCenarioFalha(){

    try{
        numero_de_sala_teste->setNumero_de_Sala(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
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
    preco_teste = new Preco();
    estado = SUCESSO;
}
void TUPreco::tearDown(){
    delete preco_teste;
}
void TUPreco::testarCenarioSucesso(){
    try{
        preco_teste->setPreco(VALOR_VALIDO);
        if (preco_teste->getPreco() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUPreco::testarCenarioFalha(){

    try{
        preco_teste->setPreco(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
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
    classe_evento_teste = new Classe_Evento();
    estado = SUCESSO;
}
void TUClasse_Evento::tearDown(){
    delete classe_evento_teste;
}
void TUClasse_Evento::testarCenarioSucesso(){
    try{
        classe_evento_teste->setClasse_Evento(VALOR_VALIDO);
        if (classe_evento_teste->getClasse_Evento() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUClasse_Evento::testarCenarioFalha(){

    try{
        classe_evento_teste->setClasse_Evento(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
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
    codigo_teste = new Codigo_de_Seguranca_Cartao_Credito();
    estado = SUCESSO;
}
void TUCodigo_de_Seguranca_Cartao_Credito::tearDown(){
    delete codigo_teste;
}
void TUCodigo_de_Seguranca_Cartao_Credito::testarCenarioSucesso(){
    try{
        codigo_teste->setCodigo_de_Seguranca_Cartao_Credito(VALOR_VALIDO);
        if (codigo_teste->getCodigo_de_Seguranca_Cartao_Credito() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUCodigo_de_Seguranca_Cartao_Credito::testarCenarioFalha(){

    try{
        codigo_teste->setCodigo_de_Seguranca_Cartao_Credito(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
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
    cartao_teste = new Numero_Cartao_Credito();
    estado = SUCESSO;
}
void TUNumero_Cartao_Credito::tearDown(){
    delete cartao_teste;
}
void TUNumero_Cartao_Credito::testarCenarioSucesso(){
    try{
        cartao_teste->setNumero_Cartao_Credito(VALOR_VALIDO);
        if (cartao_teste->getNumero_Cartao_Credito() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUNumero_Cartao_Credito::testarCenarioFalha(){

    try{
        cartao_teste->setNumero_Cartao_Credito(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
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
    disp_teste = new Disponibilidade();
    estado = SUCESSO;
}
void TUDisponibilidade::tearDown(){
    delete disp_teste;
}
void TUDisponibilidade::testarCenarioSucesso(){
    try{
        disp_teste->setDisponibilidade(VALOR_VALIDO);
        if (disp_teste->getDisponibilidade() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUDisponibilidade::testarCenarioFalha(){

    try{
        disp_teste->setDisponibilidade(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
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
    val_teste = new Data_Validade_Cartao_Credito();
    estado = SUCESSO;
}
void TUData_Validade_Cartao_Credito::tearDown(){
    delete val_teste;
}
void TUData_Validade_Cartao_Credito::testarCenarioSucesso(){

    try{
        val_teste->setData_Validade_Cartao_Credito("10/10");
        if (val_teste->getData_Validade_Cartao_Credito() != ("10/10"))
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUData_Validade_Cartao_Credito::testarCenarioFalha(){

    try{
        val_teste->setData_Validade_Cartao_Credito("kkkkk");
        estado = FALHA;
    }
    catch(invalid_argument excecao){
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

void TUCPF::setUp(){
    cpf_teste = new CPF();
    estado = SUCESSO;
}
void TUCPF::tearDown(){
    delete cpf_teste;
}
void TUCPF::testarCenarioSucesso(){

    long long int VALOR_VALIDO = 69386992086;

    try{
        cpf_teste->setCPF(VALOR_VALIDO);
        if (cpf_teste->getCPF() != (VALOR_VALIDO))
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUCPF::testarCenarioFalha(){

    long long int VALOR_INVALIDO = 00000000000;

    try{
        cpf_teste->setCPF(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
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
    senha_teste = new Senha();
    estado = SUCESSO;
}
void TUSenha::tearDown(){
    delete senha_teste;
}
void TUSenha::testarCenarioSucesso(){

    try{
        senha_teste->setSenha(SENHA_VALIDA);
        cout<<senha_teste->getSenha();
        if (senha_teste->getSenha() != SENHA_VALIDA)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUSenha::testarCenarioFalha(){

    try{
        senha_teste->setSenha(SENHA_INVALIDA);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
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
    faixa_etaria_teste = new Faixa_Etaria();
    estado = SUCESSO;
}
void TUFaixa_Etaria::tearDown(){
    delete faixa_etaria_teste;
}
void TUFaixa_Etaria::testarCenarioSucesso(){

    try{
        faixa_etaria_teste->setFaixa_Etaria(faixa_val);
        if ((faixa_val.compare(faixa_etaria_teste->getFaixa_Etaria())) != 0)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUFaixa_Etaria::testarCenarioFalha(){

    try{
        faixa_etaria_teste->setFaixa_Etaria(faixa_inval);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
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

/*   o teste do horario não rodou

void TUHorario::setUp(){
    horario_teste = new Horario();
    estado = SUCESSO;
}
void TUHorario::tearDown(){
    delete horario_teste;
}
void TUHorario::testarCenarioSucesso(){

    //string VALOR_VALIDO ("08:15");

    try{
        horario_teste->setHorario("08:15");
        if (horario_teste->getHorario() == "08:15")
            estado = SUCESSO;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
void TUHorario::testarCenarioFalha(){

    //string VALOR_INVALIDO ("34:72");

    try{
        horario_teste->setHorario("99:99");
        estado = FALHA;
    }
    catch(invalid_argument excecao){
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

*/
