#include "dominios.h"

//Definições de constantes.

// Definições de métodos.

void Codigo_de_Evento::validar(int codigo_de_evento) throw (invalid_argument){

    // avisa se ocorre erro

    if (codigo_evento <= LIMITE)
        throw invalid_argument("Argumento invalido.");
}

void Codigo_de_Evento::setCodigo_de_Evento(int codigo_de_evento) throw (invalid_argument){
    validar(codigo_de_evento);
    this->codigo_de_evento = codigo_de_evento;
}
