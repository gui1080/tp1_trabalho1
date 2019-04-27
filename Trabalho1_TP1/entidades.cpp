#include "dominios.h"
#include <string>

void Usuario::setUsuario(int novo_num_cpf, string novo_senha) throw (invalid_argument){

cpf.setCPF(novo_num_cpf);
senha.setSenha(novo_senha);

}

void Usuario::getUsuario(CPF *cpf_f, Senha *senha_f){

    cpf_f->setCPF(this->cpf.getCPF());
    senha_f->setSenha(this->senha.getSenha());

    return;

}


void Ingresso::setIngresso(int novo_codigo) throw (invalid_argument){

cout << novo_codigo << endl;
codigo.setCodigo_de_Ingresso(novo_codigo);

}

void Ingresso::getIngresso(Codigo_de_Ingresso *codigo_f){

    codigo_f->setCodigo_de_Ingresso(this->codigo.getCodigo_de_Ingresso());
    return;
}


void Cartao_de_credito::setCartao_de_credito(long long int numero_f, int codigo_f, string data_f) throw (invalid_argument){

numero.setNumero_Cartao_Credito(numero_f);
codigo.setCodigo_de_Seguranca_Cartao_Credito(codigo_f);
data.setData_Validade_Cartao_Credito(data_f);

}

void Cartao_de_credito::getCartao_de_credito(Numero_Cartao_Credito *numero_f, Codigo_de_Seguranca_Cartao_Credito *codigo_f, Data_Validade_Cartao_Credito *data_f){

    numero_f->setNumero_Cartao_Credito(this->numero.getNumero_Cartao_Credito());
    cout << this->numero.getNumero_Cartao_Credito() << endl;
    codigo_f->setCodigo_de_Seguranca_Cartao_Credito(this->codigo.getCodigo_de_Seguranca_Cartao_Credito());
    cout << this->codigo.getCodigo_de_Seguranca_Cartao_Credito() << endl;
    //cout << this->data.getData_Validade_Cartao_Credito() << endl;
    data_f->setData_Validade_Cartao_Credito(this->data.getData_Validade_Cartao_Credito());
    //cout << this->data.getData_Validade_Cartao_Credito() << endl;

    return;
}


