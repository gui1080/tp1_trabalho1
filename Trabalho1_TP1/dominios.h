#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <iostream>

using namespace std;

class Codigo_de_Evento {
private:
        int codigo_de_evento;

        const static int LIMITE = 999;

        // M�todo respons�vel por valida��o.

        bool validar(int);

public:
        // M�todos de acesso.

        void setCodigo_de_Evento(int);

        int getCodigo_de_Evento() const {
            return codigo_de_evento;
        }
};



#endif // DOMINIOS_H_INCLUDED
