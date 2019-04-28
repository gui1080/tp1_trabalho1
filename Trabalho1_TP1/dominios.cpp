#include <stdexcept>
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "dominios.h"

/*
Feito por:
Guilherme Braga Pinto
Gabriel Matheus da Rocha de Oliveira
Last Update: xx/xx/2019
UnB
*/

using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Codigo_de_Evento::setCodigo_de_Evento(int novo_codigo_de_evento) throw (invalid_argument){

    validar(novo_codigo_de_evento);
    codigo_de_evento = novo_codigo_de_evento;

}
void Codigo_de_Evento::validar(int novo_codigo_de_evento) throw (invalid_argument){

    if(novo_codigo_de_evento > LIMITE){              //checamos se o tamanho esta correto
        throw invalid_argument("Codigo de evento é grande demais.");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Codigo_de_Apresentacao::setCodigo_de_Apresentacao(int novo_codigo_de_apresentacao) throw (invalid_argument){

    validar(novo_codigo_de_apresentacao);
    codigo_de_apresentacao = novo_codigo_de_apresentacao;

}
void Codigo_de_Apresentacao::validar(int novo_codigo_de_apresentacao) throw (invalid_argument){

    if(novo_codigo_de_apresentacao > LIMITE){ //checamos se o tamanho esta correto
        throw invalid_argument("Codigo de apresentacao é grande demais.");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Codigo_de_Ingresso::setCodigo_de_Ingresso(int novo_codigo_de_ingresso) throw (invalid_argument){

    validar(novo_codigo_de_ingresso);
    codigo_de_ingresso = novo_codigo_de_ingresso;

}
void Codigo_de_Ingresso::validar(int novo_codigo_de_ingresso) throw (invalid_argument){

    if(novo_codigo_de_ingresso > LIMITE){
        throw invalid_argument("Codigo de ingresso acima do limite");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Horario::setHorario(string novo_horario) throw (invalid_argument){


  validar(novo_horario);

    int k = 0;

    while(k < FORMATO_ESPERADO){
        horario[k] = novo_horario[k];              //atribuimos da forma correta
        k++;
    }
    horario[FORMATO_ESPERADO] = '\0';

}
void Horario::validar(string novo_horario) throw (invalid_argument){

    char HH[2];
    int HHaux, MMaux;
    char MM[2];
    int i, j;

    if(novo_horario[FORMATO_ESPERADO] != '\0'){
    throw invalid_argument("Formato invalido");
    }

    for(i = 0; i < 2; i++){
        HH[i] = novo_horario[i];
    }

    HH[2] = '\0';
    HHaux = atoi(HH);

    for(j = 3; j < FORMATO_ESPERADO; j++){
        MM[j-3] = novo_horario[j];
    }
    MM[2] = '\0';
    MMaux = atoi(MM);                 //dividimos a entrada para manipular melhor

    if(novo_horario[2] != ':'){

    throw invalid_argument("Formato invalido");
    }

    if( 7 > HHaux ||  HHaux > 22 ){        //checamos se a hora e valida

     throw invalid_argument("HH invalido");

    }

    if(MMaux == 0 || MMaux == 15 || MMaux == 30 || MMaux == 45){       //checamos se o minuto e valido

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
        throw invalid_argument("Numero de sala grande demais");         // checamos os limites
    }
    else if(novo_numero_de_sala <= LIMITE_INFERIOR){
        throw invalid_argument("Numero de sala pequeno demais");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Preco::setPreco(float novo_preco) throw (invalid_argument){

    validar(novo_preco);
    preco = novo_preco;

}
void Preco::validar(float novo_preco) throw (invalid_argument){

    if(novo_preco > LIMITE_SUPERIOR){
        throw invalid_argument("Preco muito elevado");         // checamos os limites
    }
    else if(novo_preco < LIMITE_INFERIOR){
        throw invalid_argument("Preco muito baixo");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Estados_Brasileiros::setEstado(string novo_estado_br) throw (invalid_argument){

    validar(novo_estado_br);
    estado_br[0] = novo_estado_br[0];             //atribuimos propriamente o novo estado
    estado_br[1] = novo_estado_br[1];
    estado_br[2] = '\0';

}
void Estados_Brasileiros::validar(string novo_estado_br) throw (invalid_argument){

    int SUCESSO = 0;

    if ((novo_estado_br.compare("AC") == SUCESSO) || (novo_estado_br.compare("AL") == SUCESSO) || (novo_estado_br.compare("AP") == SUCESSO)
        || (novo_estado_br.compare("AM") == SUCESSO) || (novo_estado_br.compare("BA") == SUCESSO) || (novo_estado_br.compare("CE") == SUCESSO)
        || (novo_estado_br.compare("DF") == SUCESSO) || (novo_estado_br.compare("ES") == SUCESSO) || (novo_estado_br.compare("GO") == SUCESSO)
        || (novo_estado_br.compare("MA") == SUCESSO) || (novo_estado_br.compare("MT") == SUCESSO) || (novo_estado_br.compare("MS") == SUCESSO)
        || (novo_estado_br.compare("MG") == SUCESSO) || (novo_estado_br.compare("PA") == SUCESSO) || (novo_estado_br.compare("PB") == SUCESSO)
        || (novo_estado_br.compare("PR") == SUCESSO) || (novo_estado_br.compare("PE") == SUCESSO) || (novo_estado_br.compare("PI") == SUCESSO)          //checamos se os estados sao validos
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

    if(novo_classe_evento < 0 || novo_classe_evento > Num_Opcoes_Evento){          // checamos se a classe de evento esta dentro dos limites
        throw invalid_argument("Opcao de classe de evento nao existe");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Faixa_Etaria::setFaixa_Etaria(string novo_faixa_etaria) throw (invalid_argument){

    validar(novo_faixa_etaria);

    faixa_etaria[0] = novo_faixa_etaria[0];
    faixa_etaria[1] = novo_faixa_etaria[1];     //atribuimos propriamente a nova faixa etaria
    faixa_etaria[2] = '\0';
}
void Faixa_Etaria::validar(string novo_faixa_etaria) throw (invalid_argument){

    //string aux;
    int IGUAL = 0;
    //int size = strlen(novo_faixa_etaria);

    if(novo_faixa_etaria.compare("L") == IGUAL || novo_faixa_etaria.compare("10") == IGUAL || novo_faixa_etaria.compare("12") == IGUAL              //checamos se a entrada dada e uma opcao valida
       || novo_faixa_etaria.compare("14") == IGUAL ||novo_faixa_etaria.compare("16") == IGUAL || novo_faixa_etaria.compare("18") == IGUAL){


    } else{
        throw invalid_argument("Faixa Etaria invalida");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void CPF::setCPF(long long int novo_num_cpf) throw (invalid_argument){

    validar(novo_num_cpf);

    num_cpf = novo_num_cpf;

}
void CPF::validar(long long int novo_num_cpf) throw (invalid_argument){

    int array_novo_num_cpf[11];

    int n1, n2, aux1, aux2;
    int digitoverificador1, digitoverificador2;

    int i = 10;
    int j;
    int SUCESSO = 0;

    digitoverificador1=0;
    digitoverificador2=0;
    n1=0;
    n2=0;
    aux1=0;
    aux2=0;



    do{
        array_novo_num_cpf[i] = (novo_num_cpf % 10);             //aplicamos o algoritmo de cpf
        novo_num_cpf /= 10;
        i--;
    } while  (novo_num_cpf > 0);

    j = 10;

    for(i=0; i<9; i++){
        n1= n1 + ((array_novo_num_cpf[i])*j);           //multiplicamos o array corretamente, e o digito verificador e o modulo de 11 de tal soma
        j--;
    }
    aux1 = (n1 % 11);
    if((aux1==0) || (aux1==1)){
        digitoverificador1=0;
    }
    else {
        digitoverificador1=(11-aux1);
    }

    j=11;

    for(i=0; i<10; i++){
        n2 = n2 + ((array_novo_num_cpf[i])*j);
        j--;
    }
    aux2 = (n2 % 11);

    if((aux2==0) || (aux2==1)){
        digitoverificador2=0;
    }
    else{
        digitoverificador2=(11-aux2);
    }

    //cout <<(aux1);


    //int x = digitoverificador1;
    //int y = novo_num_cpf[9];

    //cout << x;
    //cout << "\n";
    //cout << y;
    //cout << "\n\n";
    //cout << digitoverificador2;
    //cout << "\n";
    //cout << novo_num_cpf[10];
    //cout << "\n\n\n";
    //ta indo agr


    if( ((array_novo_num_cpf[9]) != (digitoverificador1)) || ((array_novo_num_cpf[10]) != (digitoverificador2) )){
        SUCESSO = 1;
    }

    if(SUCESSO == 1){
        throw invalid_argument("cpf invalido");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Senha::setSenha(string novo_senha) throw (invalid_argument){

  validar(novo_senha);

  int k = 0;

    while(k < TAMANHO_ESPERADO){
        senha[k] = novo_senha[k];             //atribuimos e damos limite
        k++;
    }
    senha[TAMANHO_ESPERADO] = '\0';
}
void Senha::validar(string novo_classe_senha) throw (invalid_argument){

    int i, j;
    bool Possui_M = false;
    char aux;
    bool Possui_m = false;
    bool Possui_dig = false;

    if(novo_classe_senha[TAMANHO_ESPERADO] != '\0'){
        throw invalid_argument("A senha possuiu caracteres a mais do que esperado");
    }

    for (i = 0; i < TAMANHO_ESPERADO; i++ ){

        if(i > 0){
            aux = novo_classe_senha[i];
            for(j = i; j > 0; j--){     //checamos se algum caractere se repete, percorremos a string 2 vezes
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
        else if ( islower(novo_classe_senha[i]) ){      //checamos os demais caracteres
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

void Codigo_de_Seguranca_Cartao_Credito::setCodigo_de_Seguranca_Cartao_Credito(int novo_codigo_de_seguranca) throw (invalid_argument){

    validar(novo_codigo_de_seguranca);
    codigo_de_seguranca = novo_codigo_de_seguranca;

}
void Codigo_de_Seguranca_Cartao_Credito::validar(int novo_codigo_de_seguranca) throw (invalid_argument){

    if(novo_codigo_de_seguranca > LIMITE){                 //checamos se o codigo de seguranca esta abaixo do limite
        throw invalid_argument("Codigo de seguranca de cartao de credito invalido");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Numero_Cartao_Credito::setNumero_Cartao_Credito(long long int novo_num_cartao_credito) throw (invalid_argument){


    char xaux[26];
    lltoa(novo_num_cartao_credito, xaux, 10);    //passamos para string e validamos o numero
    validar(xaux);

    num_cartao_credito = novo_num_cartao_credito;
}
void Numero_Cartao_Credito::validar(string novo_num_cartao_credito) throw (invalid_argument){

    int nSum       = 0;
    int nDigits    = 16;
    int nParity    = (nDigits-1) % 2;
    char cDigit[2] = "\0";

    for (int i = nDigits; i > 0 ; i--){             //aplicamos o algoritmo verificador

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

void Data_Validade_Cartao_Credito::setData_Validade_Cartao_Credito(string novo_data_validade) throw (invalid_argument){

    validar(novo_data_validade);

    int k = 0;

    while(k < TAMANHO_ESPERADO){
        data_validade[k] = novo_data_validade[k];        //atribuimos valor de forma correta
        //cout << data_validade[k] << endl;
        k++;
    }
    data_validade[TAMANHO_ESPERADO] = '\0';
    //cout << data_validade << endl;
}
void Data_Validade_Cartao_Credito::validar(string novo_data_validade) throw (invalid_argument){

    char XX[2];
    int XXaux, YYaux;
    char YY[2];
    int i, j;

    if(novo_data_validade[TAMANHO_ESPERADO] != '\0'){
        throw invalid_argument("Formato invalido");
    }

    for(i = 0; i < 2; i++){
        XX[i] = novo_data_validade[i];
    }

    XX[2] = '\0';
    XXaux = atoi(XX);

    for(j = 3; j < TAMANHO_ESPERADO; j++){
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
        throw invalid_argument("numero_invalido");          //checamos se disponibilidade corresponde ao tamanho desejado
    }
    else if(novo_disponibilidade < LIMITE_INFERIOR){
        throw invalid_argument("numero_invalido");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Nome_de_Evento::setNome_de_Evento(string novo_nome_evento) throw (invalid_argument){

    validar(novo_nome_evento);

    int j;

    for(j= 0; j<20 ; j++){
        nome_evento[j] = novo_nome_evento[j]; //copiamos a nova entrada e definimos seu limite
    }

    nome_evento[20] = '\0';

}
void Nome_de_Evento::validar(string novo_nome_evento) throw (invalid_argument){

    int SUCESSO = 0;
    int i = 0;
    int string_contem_letra = 1;
    char char_atual;
    char char_anterior;

    if(novo_nome_evento[20] != '\0'){         //checamos o tamanho da string
        SUCESSO = 1;
    }

    while(i < 20){

        char_atual = novo_nome_evento[i];                 //checamos espacos vazios seguidos

        if(i > 0){
            char_anterior = novo_nome_evento[i-1];
        }
        if((i > 0) && (char_atual == ' ') && (char_anterior == ' ')){
            SUCESSO = 1;
        }
        if((char_atual >= 65) && (char_atual <=122) && (string_contem_letra != 0)){  //checamos se existe caractere
            string_contem_letra = 0;
        }

        i++;
    }


    if((SUCESSO != 0) || (string_contem_letra == 1)){
        throw invalid_argument("nome invalido");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Data::setData(string nova_data) throw (invalid_argument){


    int data_int = 0;

    //int i;

    data_int = ((nova_data[5] - 48) + ((nova_data[4] - 48) *10) + ((nova_data[3] - 48)*100) + ((nova_data[2] - 48) * 1000) + ((nova_data[1] - 48) * 10000) + ((nova_data[0] - 48) * 100000)  );

    validar(data_int);

    int k;

    for(k = 0; k<6 ; k++){
        data[k] = nova_data[k];    //copiamos a nova entrada e definimos seu limite
    }

    data[6] = '\0';

}
void Data::validar(int data_int) throw (invalid_argument){

    int SUCESSO = 0;

    int num_dia = 0;
    int num_mes = 0;
    int num_ano = 0;

    int ano_validar_bissexto = 0;
    int fevereiro = 2;
    int limite_dias_fevereiro_ano_bissexto = 29;

    num_dia = data_int % 100;
    data_int = data_int/100;

    //cout<< num_dia;

    num_mes = data_int % 100;
    data_int = data_int/100;

    //cout<< num_mes;

    num_ano = data_int%100;
    data_int = data_int/100;

    if((num_dia > 31) || (num_dia <= 0)){
        SUCESSO = 1;
    }
    if((num_mes > 12) || (num_mes <= 0)){
        SUCESSO = 1;
    }
    if((num_ano > 99) || (num_ano <= 0)){ // ano não pode ser 0, no caso, ano 2000 < ano 2019 (caso de evento passado)
        SUCESSO = 1;
    }

    ano_validar_bissexto = num_ano + 2000;  // adicionamos 2000 para termos o numero no fromato completo (temos numero 19, 2000 + 19 = 2019, um ano expresso por inteiro)

    if((ano_validar_bissexto % 4 == 0) && (ano_validar_bissexto % 100 != 0)){      //validamos ano bissexto
        //TEMOS UM ANO BISSEXTO!
        if((num_mes == fevereiro) && (num_dia > limite_dias_fevereiro_ano_bissexto)){   //avisamos formato invalido de ano bissexto
            SUCESSO = 1;
        }
    }


    if(SUCESSO != 0){
        throw invalid_argument("data invalida");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Cidade::setCidade(string nova_cidade) throw (invalid_argument){

    validar(nova_cidade);
    int k = 0;
    while(k < TAMANHO_ESPERADO){
        cidade[k] = nova_cidade[k];
        k++;
    }

}
void Cidade::validar(string nova_cidade) throw (invalid_argument){


    int SUCESSO = 0;
    char aux;
    char aux2;
    int string_contem_letra = 1;
    int i;
    int tamanho_real_palavra;
    int tem_letra = 1;

    tamanho_real_palavra = nova_cidade.size();

    i = 0;
    while(i < tamanho_real_palavra){

        //char_atual = nova_cidade[i];

        if((isalpha(nova_cidade[i]))){
            tem_letra = 0;   //checamos se existem letras e nao apenas caracteres invalidos
        }
        aux = nova_cidade[i];
        aux2 = nova_cidade[i+1];

        if(i>0){                                    // checamos se existe letra antes do ponto
            if((nova_cidade[i] == '.')){
                if( (isalpha(nova_cidade[i-1])) ){
                    SUCESSO = 0;
                }
                else{
                    SUCESSO = 1;
                }
            }
        }

        if(i != (tamanho_real_palavra - 1)){
            if((isspace(aux)) && (isspace(aux2))){       //checamos espacos vazios seguidos
                SUCESSO = 1;
            }
        }


        i++;
    }

    if(tem_letra == 1){
        SUCESSO = 1;
    }

    if((SUCESSO != 0)){
        throw invalid_argument("cidade invalida");
    }

}



