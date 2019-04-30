/**
 * @file main.cpp
 *
 * @brief Arquivo com a implementação básica do programa, onde chamamos os testes.
 *
 * @author Gabriel e Guilherme
 *
 */


#include <stdexcept>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>

#include "dominios.h"
#include "dominios.cpp"
#include "entidades.h"
#include "entidades.cpp"

#include "testes.h"
#include "testes.cpp"


/*
Feito por:
Guilherme Braga Pinto
Gabriel Matheus da Rocha de Oliveira
Last Update: 29/04/2019
UnB
*/

//Obs- Seguimos certas convenções como as que foram demonstradas em exeplos de sala de aula ao dar nome às variáveis, classes e testes.

using namespace std;

int main(){

    system("Color 0A");
////////////////////////////////////////////////////////////DOMINIOS///////////////////////////////////////////////////////////////////////////////////

    cout << "--------------------- TESTES DOMINIOS--------------------------" << endl;

    TUCodigo_de_Evento teste1;

    switch(teste1.run()){
        case TUCodigo_de_Evento::SUCESSO: cout << "Sucesso ao criar codigo de evento!" << endl;
                                break;
        case TUCodigo_de_Evento::FALHA  : cout << "Falha ao criar codigo de evento!" << endl;
                                break;
    }

    TUCodigo_de_Apresentacao teste2;

    switch(teste2.run()){
        case TUCodigo_de_Apresentacao::SUCESSO: cout << "Sucesso ao criar codigo de apresentacao!" << endl;
                                break;
        case TUCodigo_de_Apresentacao::FALHA  : cout << "Falha ao criar codigo de apresentacao!" << endl;
                                break;
    }

    TUCodigo_de_Ingresso teste3;

    switch(teste3.run()){
        case TUCodigo_de_Ingresso::SUCESSO: cout << "Sucesso ao criar codigo de ingresso!" << endl;
                                break;
        case TUCodigo_de_Ingresso::FALHA  : cout << "Falha ao criar codigo de ingresso!" << endl;
                                break;
    }

    TUEstados_Brasileiros teste4;

    switch(teste4.run()){
        case TUEstados_Brasileiros::SUCESSO: cout << "Sucesso ao criar estado brasileiro!" << endl;
                                break;
        case TUEstados_Brasileiros::FALHA  : cout << "Falha ao criar estado brasileiro!" << endl;
                                break;
    }

    TUNumero_de_Sala teste5;

    switch(teste5.run()){
        case TUNumero_de_Sala::SUCESSO: cout << "Sucesso ao criar numero de sala!" << endl;
                                break;
        case TUNumero_de_Sala::FALHA  : cout << "Falha ao criar numero de sala!" << endl;
                                break;
    }

    TUPreco teste6;

    switch(teste6.run()){
        case TUPreco::SUCESSO: cout << "Sucesso ao criar preco!" << endl;
                                break;
        case TUPreco::FALHA  : cout << "Falha ao criar preco!" << endl;
                                break;
    }

    TUClasse_Evento teste7;

    switch(teste7.run()){
        case TUClasse_Evento::SUCESSO: cout << "Sucesso ao criar classe de evento!" << endl;
                                break;
        case TUClasse_Evento::FALHA  : cout << "Falha ao criar classe de evento!" << endl;
                                break;
    }

    TUCodigo_de_Seguranca_Cartao_Credito teste8;

    switch(teste8.run()){
        case TUCodigo_de_Seguranca_Cartao_Credito::SUCESSO: cout << "Sucesso ao criar codigo de seguranca cartao credito!" << endl;
                                break;
        case TUCodigo_de_Seguranca_Cartao_Credito::FALHA  : cout << "Falha ao criar codigo de seguranca cartao credito!" << endl;
                                break;
    }


    TUNumero_Cartao_Credito teste9;

    switch(teste9.run()){
        case TUNumero_Cartao_Credito::SUCESSO: cout << "Sucesso ao criar numero de cartao credito!" << endl;
                                break;
        case TUNumero_Cartao_Credito::FALHA  : cout << "Falha ao criar numero de cartao credito!" << endl;
                                break;
    }



    TUDisponibilidade teste10;

    switch(teste10.run()){
        case TUDisponibilidade::SUCESSO: cout << "Sucesso ao criar disponibilidade!" << endl;
                                break;
        case TUDisponibilidade::FALHA  : cout << "Falha ao criar disponibilidade!" << endl;
                                break;
    }

    TUCPF teste11;

    switch(teste11.run()){
        case TUCPF::SUCESSO: cout << "Sucesso ao validar cpf!" << endl;
                                break;
        case TUCPF::FALHA  : cout << "Falha ao validar cpf!" << endl;
                                break;
    }



    TUData_Validade_Cartao_Credito teste12;

    switch(teste12.run()){
        case TUData_Validade_Cartao_Credito::SUCESSO: cout << "Sucesso ao criar data de validade do cartao!" << endl;
                                break;
        case TUData_Validade_Cartao_Credito::FALHA  : cout << "Falha ao criar data de validade do cartao!" << endl;
                                break;
    }

    TUSenha teste13;

    switch(teste13.run()){
        case TUSenha::SUCESSO: cout << "Sucesso ao criar senha!" << endl;
                                break;
        case TUSenha::FALHA  : cout << "Falha ao criar senha!" << endl;
                                break;
    }


    TUFaixa_Etaria teste14;

    switch(teste14.run()){
        case TUFaixa_Etaria::SUCESSO: cout << "Sucesso ao criar faixa etaria!" << endl;
                                break;
        case TUFaixa_Etaria::FALHA  : cout << "Falha ao criar faixa etaria!" << endl;
                                break;
    }

    TUHorario teste15;

    switch(teste15.run()){
        case TUHorario::SUCESSO: cout << "Sucesso ao criar horario!" << endl;
                                break;
        case TUHorario::FALHA  : cout << "Falha ao criar horario!" << endl;
                                break;
    }

    TUData teste16;

    switch(teste16.run()){
        case TUData::SUCESSO: cout << "Sucesso ao criar data!" << endl;
                                break;
        case TUData::FALHA  : cout << "Falha ao criar data!" << endl;
                                break;
    }

    TUCidade teste17;

    switch(teste17.run()){
        case TUCidade::SUCESSO: cout << "Sucesso ao criar cidade!" << endl;
                                break;
        case TUCidade::FALHA  : cout << "Falha ao criar cidade!" << endl;
                                break;
    }

    TUNome_de_Evento teste18;


    switch(teste18.run()){
        case TUNome_de_Evento::SUCESSO: cout << "Sucesso ao criar nome de evento!" << endl;
                                break;
        case TUNome_de_Evento::FALHA  : cout << "Falha ao criar nome de evento!" << endl;
                                break;
    }

//    cout<<"\n\n\n\n"<<endl;
    cout << "\n--------------------- TESTES ENTIDADES --------------------------" << endl;
////////////////////////////////////////////////////////////ENTIDADES///////////////////////////////////////////////////////////////////////////////////
    TUIngresso testeing;

    switch(testeing.run()){
        case TUIngresso::SUCESSO: cout << "Sucesso ao criar ingresso!" << endl;
                                break;
        case TUIngresso::FALHA  : cout << "Falha ao criar ingresso!" << endl;
                                break;
    }

     TUCartao_de_credito testecart;

    switch(testecart.run()){
        case TUCartao_de_credito::SUCESSO: cout << "Sucesso ao criar cartao de credito!" << endl;
                                break;
        case TUCartao_de_credito::FALHA  : cout << "Falha ao criar cartao de credito!" << endl;
                                break;
    }

    TUUsuario testeusu;

    switch(testeusu.run()){
        case TUUsuario::SUCESSO: cout << "Sucesso ao criar usuario!" << endl;
                                break;
        case TUUsuario::FALHA  : cout << "Falha ao criar usuario!" << endl;
                                break;
    }

    TUEvento testeeven;

    switch(testeeven.run()){
        case TUEvento::SUCESSO: cout << "Sucesso ao criar evento!" << endl;
                                break;
        case TUEvento::FALHA  : cout << "Falha ao criar evento!" << endl;
                                break;
    }

    TUApresentacao testeap;

    switch(testeap.run()){
        case TUApresentacao::SUCESSO: cout << "Sucesso ao criar apresentacao!" << endl;
                                break;
        case TUApresentacao::FALHA  : cout << "Falha ao criar apresentacao!" << endl;
                                break;
    }

    cout<<"\n\n"<<endl;

    return 0;
}
