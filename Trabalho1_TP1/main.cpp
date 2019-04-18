#include <stdexcept>
#include <iostream>
#include <string.h>

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


    TUCodigo_de_Evento teste1;

    switch(teste1.run()){
        case TUCodigo_de_Evento::SUCESSO: cout << "Sucesso ao criar código de evento!";
                                break;
        case TUCodigo_de_Evento::FALHA  : cout << "Falha ao criar código de evento!";
                                break;
    }






    return 0;
}
