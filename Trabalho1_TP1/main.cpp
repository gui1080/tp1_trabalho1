
#include "dominios.h"

using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Codigo_de_Evento::setCodigo_de_Evento(int novo_codigo_de_evento) {

    if(validar(novo_codigo_de_evento) == 0){
        codigo_de_evento = novo_codigo_de_evento;
    }
    else{
        cout << "deu ruim meu patrão";
    }
}

bool Codigo_de_Evento::validar(int novo_codigo_de_evento){

    if( novo_codigo_de_evento > LIMITE){
        return 1;
    }
    else if (novo_codigo_de_evento < LIMITE){
        return 0;
    }

}


///////////não sei pq mas não funfou botar essa função no arquivo de dominios.cpp (o certo), tenho que arrumar isso mais tarde/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    //daqui rodaremos os testes
    cout << "to com saudade do printf\n";

    int x;
    Codigo_de_Evento codigo1;
    codigo1.setCodigo_de_Evento(123);
    x = codigo1.getCodigo_de_Evento();
    cout << x;

    return 0;
}
