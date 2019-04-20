#include <stdexcept>
#include <iostream>
#include <string.h>
#include <stdlib.h>

#include "dominios.h"
#include "dominios.cpp"

#include "testes.h"
#include "testes.cpp"

//Obs- Seguimos certas convenções como as que foram demonstradas em exeplos de sala de aula ao dar nome às variáveis

using namespace std;


///////////nao sei pq mas so adicionando o include dominios.cpp que o codeblocks conseguiu reconhecer o que eu tinha feito/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    //daqui rodaremos os testes
    cout << "to com saudade do printf e com saudade do terminal de Linux\n";

    /*  Teste que fiz pra saber se a classe de evento funcionava
    int x;
    Codigo_de_Evento codigo1;
    codigo1.setCodigo_de_Evento(123);
    x = codigo1.getCodigo_de_Evento();
    cout << x;
    */

    /*  Teste que fiz pra saber se a classe de apresentacoes funcionava
    int x;
    Codigo_de_Apresentacao codigo1;
    codigo1.setCodigo_de_Apresentacao(1234);
    x = codigo1.getCodigo_de_Apresentacao();
    cout << x;
    */

    /*  Teste que fiz pra saber se a classe de numero de sala funcionava
    int x;
    Numero_de_Sala num1;
    num1.setNumero_de_Sala(3);
    x = num1.getNumero_de_Sala();
    cout << x;
    */

    /*  Teste que fiz pra saber se a classe de preco funcionava
    float x;
    Preco quantia1;
    quantia1.setPreco(450.50);
    x = quantia1.getPreco();
    cout << x;
    */

    /*  Teste que fiz pra saber se a classe de Estados funcionava

    string estado_br_novo ("AM");
    Estados_Brasileiros estado1;
    estado1.setEstado(estado_br_novo);
    */

    //  Teste que fiz pra saber se a classe de Codigo de Ingresso funcionava
    /*
    int x;
    Codigo_de_Ingresso codigo1;
    codigo1.setCodigo_de_Ingresso(12345);
    x = codigo1.getCodigo_de_Ingresso();
    cout << x << endl;
    */

    //  Teste que fiz pra saber se a classe de Horario funcionava
/*
    string x;
    //string y("08:15");
    Horario codigo1;
    codigo1.setHorario("10:30");
    x = codigo1.getHorario();
    cout << x << endl;
*/
  //  Teste que fiz pra saber se a classe de Classe Evento funcionava
/*
    int x;
    Classe_Evento codigo1;
    codigo1.setClasse_Evento(3);
    x = codigo1.getClasse_Evento();
    cout << x << endl;
*/

    //  Teste que fiz pra saber se a classe de Senha funcionava
/*
    string x;
    //string y("L");
    Senha codigo1;
    codigo1.setSenha("pAa2O3");
    x = codigo1.getSenha();
    cout << x << endl;
*/

    //  Teste que fiz pra saber se a classe de Faixa_Etaria funcionava
/*
    string x;
    //string y("L");
    Faixa_Etaria codigo1;
    codigo1.setFaixa_Etaria("12");
    x = codigo1.getFaixa_Etaria();
    cout << x << endl;
*/

  //  Teste que fiz pra saber se a classe de codigo de segurança funcionava
/*
    int x;
    Codigo_de_Seguranca codigo1;
    codigo1.setCodigo_de_Seguranca(123);
    x = codigo1.getCodigo_de_Seguranca();
    cout << x << endl;
*/

 //  Teste que fiz pra saber se a classe de Numero de cartao de drecito funcionava
/*
    long long int x;
    Numero_Cartao_Credito codigo1;
    codigo1.setNumero_Cartao_Credito(30211944335337);
    x = codigo1.getNumero_Cartao_Credito();
    cout << x << endl;
*/

    //  Teste que fiz pra saber se a classe de Data de Validade funcionava
/*
    string x;
    //string y("08:15");
    Data_Validade codigo1;
    codigo1.setData_Validade("10/39");
    x = codigo1.getData_Validade();
    cout << x << endl;
*/
  //  Teste que fiz pra saber se a classe de disponibilidade funcionava
/*
    int x;
    Disponibilidade codigo1;
    codigo1.setDisponibilidade(50);
    x = codigo1.getDisponibilidade();
    cout << x << endl;
*/

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


    return 0;
}
