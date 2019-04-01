#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

class Codigo_de_Evento{
    // especificacao: ter 9 digitos

    private:
            int codigo_de_evento;

            const static int limite_tamanho = 999999999;

            // Método responsável por validação.

            void validar(int) throw (invalid_argument);

    public:
            // metodos de acesso.

            void setCodigo_de_Evento(int) throw (invalid_argument);

            int getCodigo_de_Evento() const {
                return codigo_de_evento;
            }

};

#endif // DOMINIOS_H_INCLUDED
