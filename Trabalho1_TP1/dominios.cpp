#include <stdexcept>
#include <iostream>
#include <string.h>
#include <stdlib.h>

#include "dominios.h"

using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Codigo_de_Evento::setCodigo_de_Evento(int novo_codigo_de_evento) throw (invalid_argument){

    validar(novo_codigo_de_evento);
    codigo_de_evento = novo_codigo_de_evento;

}
void Codigo_de_Evento::validar(int novo_codigo_de_evento) throw (invalid_argument){

    if(novo_codigo_de_evento > LIMITE){
        throw invalid_argument("deu ruim.");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Codigo_de_Apresentacao::setCodigo_de_Apresentacao(int novo_codigo_de_apresentacao) throw (invalid_argument){

    validar(novo_codigo_de_apresentacao);
    codigo_de_apresentacao = novo_codigo_de_apresentacao;

}
void Codigo_de_Apresentacao::validar(int novo_codigo_de_apresentacao) throw (invalid_argument){

    if(novo_codigo_de_apresentacao > LIMITE){
        throw invalid_argument("deu ruim.");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Codigo_de_Ingresso::setCodigo_de_Ingresso(int novo_codigo_de_ingresso) throw (invalid_argument){

    validar(novo_codigo_de_ingresso);
    codigo_de_ingresso = novo_codigo_de_ingresso;

}
void Codigo_de_Ingresso::validar(int novo_codigo_de_ingresso) throw (invalid_argument){

    if(novo_codigo_de_ingresso > LIMITE){
        throw invalid_argument("deu ruim.");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Horario::setHorario(string novo_horario) throw (invalid_argument){

    validar(novo_horario);
    int k = 0;

    while(k < 5){
        horario[k] = novo_horario[k];
        k++;
    }
    horario[5] = '\0';

}
void Horario::validar(string novo_horario) throw (invalid_argument){

    char HH[2];
    int HHaux, MMaux;
    char MM[2];
    int i, j;

    if(novo_horario[5] != '\0'){
    throw invalid_argument("Formato invalido");
}

    for(i = 0; i < 2; i++){
        HH[i] = novo_horario[i];
    }

    HH[2] = '\0';
    HHaux = atoi(HH);

    for(j = 3; j < 5; j++){
        MM[j-3] = novo_horario[j];
    }
    MM[2] = '\0';
    MMaux = atoi(MM);

    if(novo_horario[2] != ':'){

    throw invalid_argument("Formato invalido");
    }

    if( 7 > HHaux ||  HHaux > 22 ){

     throw invalid_argument("HH invalido");

    }

    if(MMaux == 0 || MMaux == 15 || MMaux == 30 || MMaux == 45){

    } else{
        throw invalid_argument("MM invalido");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Numero_de_Sala::setNumero_de_Sala(int novo_numero_de_sala) throw (invalid_argument){

    validar(novo_numero_de_sala);
    numero_de_sala = novo_numero_de_sala;

}
void Numero_de_Sala::validar(int novo_numero_de_sala) throw (invalid_argument){

    if(novo_numero_de_sala >= LIMITE_SUPERIOR){
        throw invalid_argument("deu ruim");
    }
    else if(novo_numero_de_sala <= LIMITE_INFERIOR){
        throw invalid_argument("deu ruim");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Preco::setPreco(float novo_preco) throw (invalid_argument){

    validar(novo_preco);
    preco = novo_preco;

}
void Preco::validar(float novo_preco) throw (invalid_argument){

    if(novo_preco > LIMITE_SUPERIOR){
        throw invalid_argument("deu ruim");
    }
    else if(novo_preco < LIMITE_INFERIOR){
        throw invalid_argument("deu ruim");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Estados_Brasileiros::setEstado(string novo_estado_br) throw (invalid_argument){

    validar(novo_estado_br);
    estado_br[0] = novo_estado_br[0];
    estado_br[1] = novo_estado_br[1];

}
void Estados_Brasileiros::validar(string novo_estado_br) throw (invalid_argument){

    int SUCESSO = 0;

    if ((novo_estado_br.compare("AC") == SUCESSO) || (novo_estado_br.compare("AL") == SUCESSO) || (novo_estado_br.compare("AP") == SUCESSO)
        || (novo_estado_br.compare("AM") == SUCESSO) || (novo_estado_br.compare("BA") == SUCESSO) || (novo_estado_br.compare("CE") == SUCESSO)
        || (novo_estado_br.compare("DF") == SUCESSO) || (novo_estado_br.compare("ES") == SUCESSO) || (novo_estado_br.compare("GO") == SUCESSO)
        || (novo_estado_br.compare("MA") == SUCESSO) || (novo_estado_br.compare("MT") == SUCESSO) || (novo_estado_br.compare("MS") == SUCESSO)
        || (novo_estado_br.compare("MG") == SUCESSO) || (novo_estado_br.compare("PA") == SUCESSO) || (novo_estado_br.compare("PB") == SUCESSO)
        || (novo_estado_br.compare("PR") == SUCESSO) || (novo_estado_br.compare("PE") == SUCESSO) || (novo_estado_br.compare("PI") == SUCESSO)
        || (novo_estado_br.compare("RJ") == SUCESSO) || (novo_estado_br.compare("RN") == SUCESSO) || (novo_estado_br.compare("RS") == SUCESSO)
        || (novo_estado_br.compare("RO") == SUCESSO) || (novo_estado_br.compare("RR") == SUCESSO) || (novo_estado_br.compare("SC") == SUCESSO)
        || (novo_estado_br.compare("SP") == SUCESSO) || (novo_estado_br.compare("SE") == SUCESSO) || (novo_estado_br.compare("TO") == SUCESSO) ) {

        // cout << "estado valido";
    }
    else{
        throw invalid_argument("estado invalido");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Classe_Evento::setClasse_Evento(int novo_classe_evento) throw (invalid_argument){

    validar(novo_classe_evento);
    classe_evento = novo_classe_evento;

}
void Classe_Evento::validar(int novo_classe_evento) throw (invalid_argument){

    int Num_Opcoes_Evento = 4;

    if(novo_classe_evento < 0 || novo_classe_evento > Num_Opcoes_Evento){
        throw invalid_argument("opcao nao existe");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Faixa_Etaria::setFaixa_Etaria(string novo_faixa_etaria) throw (invalid_argument){

    validar(novo_faixa_etaria);

    faixa_etaria[0] = novo_faixa_etaria[0];
    faixa_etaria[1] = novo_faixa_etaria[1];
    faixa_etaria[2] = '\0';
}
void Faixa_Etaria::validar(string novo_faixa_etaria) throw (invalid_argument){

    //string aux;
    int IGUAL = 0;
    //int size = strlen(novo_faixa_etaria);

    if(novo_faixa_etaria.compare("L") == IGUAL || novo_faixa_etaria.compare("10") == IGUAL || novo_faixa_etaria.compare("12") == IGUAL
       || novo_faixa_etaria.compare("14") == IGUAL ||novo_faixa_etaria.compare("16") == IGUAL || novo_faixa_etaria.compare("18") == IGUAL){


    } else{
        throw invalid_argument("Faixa Etaria invalida");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void CPF::setCPF(int* novo_num_cpf) throw (invalid_argument){

    validar(novo_num_cpf);
    int k = 0;

    while(k < 11){
        num_cpf[k] = novo_num_cpf[k];
        k++;
    }

}
void CPF::validar(int* novo_num_cpf) throw (invalid_argument){

    int somatorio_digt_validador_1 = 0;
    int somatorio_digt_validador_0 = 0;
    int resultado_digt_validador_1 = 0;
    int resultado_digt_validador_0 = 0;

    int i;
    int SUCESSO = 0;
    int multiplicador;

    multiplicador = 2;

    while(i < 9){
        somatorio_digt_validador_1 += ((novo_num_cpf[i+2]) * multiplicador);
        i++;
        multiplicador++;
    }

    multiplicador = 2;
    i = 0;
    resultado_digt_validador_1 = ((somatorio_digt_validador_1*10)%11);

    while(i < 10){
        somatorio_digt_validador_0 += ((novo_num_cpf[i+1])* multiplicador);
        i++;
        multiplicador++;
    }

    resultado_digt_validador_0 = ((somatorio_digt_validador_0*10)%11);


    if((resultado_digt_validador_1 != novo_num_cpf[1]) || (resultado_digt_validador_0 != novo_num_cpf[0])){
        SUCESSO = 1;
    }

    if(SUCESSO != 0){
        throw invalid_argument("cpf invalido");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Senha::setSenha(string novo_senha) throw (invalid_argument){

  validar(novo_senha);
  int k = 0;

    while(k < 6){
        senha[k] = novo_senha[k];
        k++;
    }
    senha[6] = '\0';
}
void Senha::validar(string novo_classe_senha) throw (invalid_argument){

int i, j;
bool Possui_M = false;
char aux;
bool Possui_m = false;
bool Possui_dig = false;

if(novo_classe_senha[6] != '\0'){
    throw invalid_argument("A senha possuiu caracteres a mais");
}

for (i = 0; i < 6; i++ ){

    if(i > 0){
        aux = novo_classe_senha[i];
    for(j = i; j > 0; j--){
        if(aux == novo_classe_senha[j - 1])
         throw invalid_argument("A senha possuiu caracteres repetidos");
        }
    }

    if(isalnum(novo_classe_senha[i]) == false){
    throw invalid_argument("A senha possuiu caracteres invalidos");
    }
    else if ( isupper(novo_classe_senha[i]) ){
      Possui_M = true ;
    }
    else if ( islower(novo_classe_senha[i]) ){
      Possui_m = true ;
    }
    else if ( isdigit(novo_classe_senha[i]) ){
        Possui_dig = true ;
    }
}
	if ( Possui_M == false || Possui_m == false || Possui_dig == false ){
    throw invalid_argument("A senha nao possui os pre requisitos necessarios");
	}

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Codigo_de_Seguranca::setCodigo_de_Seguranca(int novo_codigo_de_seguranca) throw (invalid_argument){

    validar(novo_codigo_de_seguranca);
    codigo_de_seguranca = novo_codigo_de_seguranca;

}
void Codigo_de_Seguranca::validar(int novo_codigo_de_seguranca) throw (invalid_argument){

    if(novo_codigo_de_seguranca > LIMITE){
        throw invalid_argument("codigo invalido");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Numero_Cartao_Credito::setNumero_Cartao_Credito(long long int novo_num_cartao_credito) throw (invalid_argument){


    char xaux[26];
    lltoa(novo_num_cartao_credito, xaux, 10);
    validar(xaux);

    num_cartao_credito = novo_num_cartao_credito;
}
void Numero_Cartao_Credito::validar(string novo_num_cartao_credito) throw (invalid_argument){

    int nSum       = 0;
    int nDigits    = 16;
    int nParity    = (nDigits-1) % 2;
    char cDigit[2] = "\0";

    for (int i = nDigits; i > 0 ; i--){

      cDigit[0]  = novo_num_cartao_credito[i-1];

      int nDigit = atoi(cDigit);

      if (nParity == i % 2)
        nDigit = nDigit * 2;

      nSum += nDigit/10;
      nSum += nDigit%10;
    }

    if(nSum % 10 != 0){
        throw invalid_argument("numero invalido");
    }

  }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Data_Validade::setData_Validade(string novo_data_validade) throw (invalid_argument){

    validar(novo_data_validade);
    int k = 0;

    while(k < 5){
        data_validade[k] = novo_data_validade[k];
        k++;
    }
    data_validade[5] = '\0';

}
void Data_Validade::validar(string novo_data_validade) throw (invalid_argument){

    char XX[2];
    int XXaux, YYaux;
    char YY[2];
    int i, j;

    if(novo_data_validade[5] != '\0'){
        throw invalid_argument("Formato invalido");
    }

    for(i = 0; i < 2; i++){
        XX[i] = novo_data_validade[i];
    }

    XX[2] = '\0';
    XXaux = atoi(XX);

    for(j = 3; j < 5; j++){
        YY[j-3] = novo_data_validade[j];
    }
    YY[2] = '\0';
    YYaux = atoi(YY);

    if(novo_data_validade[2] != '/'){

    throw invalid_argument("Formato invalido");
    }

    if( 0 > XXaux ||  XXaux > 12 ){

     throw invalid_argument("XX invalido");

    }
    if( 0 > YYaux ||  YYaux > 99 ){

     throw invalid_argument("YY invalido");

    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Disponibilidade::setDisponibilidade(int novo_disponibilidade) throw (invalid_argument){

    validar(novo_disponibilidade);
    disponibilidade = novo_disponibilidade;

}
void Disponibilidade::validar(int novo_disponibilidade) throw (invalid_argument){

    if(novo_disponibilidade > LIMITE_SUPERIOR){
        throw invalid_argument("numero_invalido");
    }
    else if(novo_disponibilidade < LIMITE_INFERIOR){
        throw invalid_argument("numero_invalido");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
