#include <stdexcept>
#include <iostream>
#include <string>
#include <stdlib.h>

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

int main()
{

    system("Color 0A");
    
////////////////////////////////////////////////////////////DOMINIOS///////////////////////////////////////////////////////////////////////////////////

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

    TUCodigo_de_Ingresso teste4;

    switch(teste4.run()){
        case TUEstados_Brasileiros::SUCESSO: cout << "Sucesso ao criar estado brasileiro!" << endl;
                                break;
        case TUEstados_Brasileiros::FALHA  : cout << "Falha ao criar estado brasileiro!" << endl;
                                break;
    }

    TUCodigo_de_Ingresso teste5;

    switch(teste5.run()){
        case TUNumero_de_Sala::SUCESSO: cout << "Sucesso ao criar numero de sala!" << endl;
                                break;
        case TUNumero_de_Sala::FALHA  : cout << "Falha ao criar numero de sala!" << endl;
                                break;
    }

    TUCodigo_de_Ingresso teste6;

    switch(teste6.run()){
        case TUPreco::SUCESSO: cout << "Sucesso ao criar preco!" << endl;
                                break;
        case TUPreco::FALHA  : cout << "Falha ao criar preco!" << endl;
                                break;
    }

    TUCodigo_de_Ingresso teste7;

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




////////////////////////////////////////////////////////////ENTIDADES///////////////////////////////////////////////////////////////////////////////////





// AREA DE TESTES, APAGAR DEPOIS //////

/*
cout << "\n\n\n";
cout << "\n\n\n";

Cidade cidade1;
cidade1.setCidade("Uberaba");
cidade1.printCidade();
//cout<< data1.getData() << endl;


cout << "\n\n\n";
cout << "\n\n\n";

*/

Ingresso testeing;
    testeing.setIngresso(12345);

 Codigo_de_Ingresso teste_codigo;

   testeing.getIngresso(&teste_codigo);
   int resultado = teste_codigo.getCodigo_de_Ingresso();

    cout << "Ingresso -> " << resultado << endl;

Cartao_de_credito testcart;
        testcart.setCartao_de_credito(30211944335337, 123,"10/39");

 Numero_Cartao_Credito teste_numero;
 Codigo_de_Seguranca_Cartao_Credito teste_codigo_s;
 Data_Validade_Cartao_Credito teste_data;

 testcart.getCartao_de_credito(&teste_numero, &teste_codigo_s, &teste_data);

 long long int resultado1 = teste_numero.getNumero_Cartao_Credito();
 int resultado2 = teste_codigo_s.getCodigo_de_Seguranca_Cartao_Credito();
 string resultado3 = teste_data.getData_Validade_Cartao_Credito();

    cout << "Numero do cartao de credito -> " << resultado1 << endl;
    cout << "Codigo do cartao de credito -> " << resultado2 << endl;
    cout << "Data de validade -> " << resultado3 << endl;



    //daqui rodaremos os testes
    //cout << "to com saudade do printf e com saudade do terminal de Linux\n";

    //CPF cpf1;

    //int VALOR_VALIDO = 98603079030;
    //cpf1.setCPF(VALOR_VALIDO);


    //cout << cpf1.getCPF();



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

    string x;
    //string y("08:15");
    Horario codigo1;
    codigo1.setHorario("10:30");
    x = codigo1.getHorario();
    cout << "Horario -> " << x << endl;

  //  Teste que fiz pra saber se a classe de Classe Evento funcionava
/*
    int x;
    Classe_Evento codigo1;
    codigo1.setClasse_Evento(3);
    x = codigo1.getClasse_Evento();
    cout << x << endl;
*/

    //  Teste que fiz pra saber se a classe de Senha funcionava

    string xyz;
    Senha codigo11;
    codigo11.setSenha("pAa2O3");
    xyz = codigo11.getSenha();
    cout << "senha ->" << xyz << endl;


    //  Teste que fiz pra saber se a classe de Faixa_Etaria funcionava

    string f;
    //string y("L");
    Faixa_Etaria codigofa;
    codigofa.setFaixa_Etaria("12");
    f = codigofa.getFaixa_Etaria();
    cout << "faixa etaria ->" << f << endl;


  //  Teste que fiz pra saber se a classe de codigo de segurança funcionava
/*
    int s;
    Codigo_de_Seguranca_Cartao_Credito codigose;
    codigose.setCodigo_de_Seguranca_Cartao_Credito(123);
    s = codigose.getCodigo_de_Seguranca_Cartao_Credito();
    cout << "codigo de seguranca -> " << s << endl;
*/

 //  Teste que fiz pra saber se a classe de Numero de cartao de crecito funcionava
/*
    long long int ca;
    Numero_Cartao_Credito codigoca;
    codigoca.setNumero_Cartao_Credito(30211944335337);
    ca = codigoca.getNumero_Cartao_Credito();
    cout << "numero cartao de credito ->" << ca << endl;

*/
    //  Teste que fiz pra saber se a classe de Data de Validade funcionava

    string xy;
    Data_Validade_Cartao_Credito codigo23;
    codigo23.setData_Validade_Cartao_Credito("10/39");
    xy = codigo23.getData_Validade_Cartao_Credito();
    cout << "data de validade -> " << xy << endl;

  //  Teste que fiz pra saber se a classe de disponibilidade funcionava
/*
    int d;
    Disponibilidade codigodi;
    codigodi.setDisponibilidade(50);
    d = codigodi.getDisponibilidade();
    cout << "disponibilidade -> " << d << endl;
*/


    return 0;
}
