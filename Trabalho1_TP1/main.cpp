
#include "dominios.h"

using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Codigo_de_Evento::setCodigo_de_Evento(int novo_codigo_de_evento) throw (invalid_argument){

    validar(novo_codigo_de_evento);
    codigo_de_evento = novo_codigo_de_evento;

}
void Codigo_de_Evento::validar(int novo_codigo_de_evento) throw (invalid_argument){

    if(novo_codigo_de_evento > LIMITE){
        throw invalid_argument ("deu ruim meu consagrado");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Codigo_de_Apresentacao::setCodigo_de_Apresentacao(int novo_codigo_de_apresentacao) throw (invalid_argument){

    validar(novo_codigo_de_apresentacao);
    codigo_de_apresentacao = novo_codigo_de_apresentacao;

}
void Codigo_de_Apresentacao::validar(int novo_codigo_de_apresentacao) throw (invalid_argument){

    if(novo_codigo_de_apresentacao > LIMITE){
        throw invalid_argument ("deu ruim");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Numero_de_Sala::setNumero_de_Sala(int novo_numero_de_sala) throw (invalid_argument){

    validar(novo_numero_de_sala);
    numero_de_sala = novo_numero_de_sala;

}
void Numero_de_Sala::validar(int novo_numero_de_sala) throw (invalid_argument){

    if(novo_numero_de_sala >= LIMITE_SUPERIOR){
        throw invalid_argument ("deu ruim");
    }
    else if(novo_numero_de_sala <= LIMITE_INFERIOR){
        throw invalid_argument ("deu ruim");
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Preco::setPreco(float novo_preco) throw (invalid_argument){

    validar(novo_preco);
    preco = novo_preco;

}
void Preco::validar(float novo_preco) throw (invalid_argument){

    if(novo_preco > LIMITE_SUPERIOR){
        throw invalid_argument ("deu ruim");
    }
    else if(novo_preco < LIMITE_INFERIOR){
        throw invalid_argument ("deu ruim");
    }

}




///////////não sei pq mas não funfou botar essa função no arquivo de dominios.cpp (o certo), tenho que arrumar isso mais tarde/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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




    return 0;
}
