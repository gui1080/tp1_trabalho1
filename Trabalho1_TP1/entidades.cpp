/**
 * @file entidades.cpp
 *
 * @brief Arquivo com a declaração das entidades do programa
 *
 * @author Gabriel e Guilherme
 *
 */


#include "dominios.h"
#include <string>
#include <iostream>

void Usuario::setUsuario(long long int novo_num_cpf, string novo_senha) throw (invalid_argument){

    cpf.setCPF(novo_num_cpf);
    senha.setSenha(novo_senha);

}

void Usuario::getUsuario(CPF *cpf_f, Senha *senha_f){

    cpf_f->setCPF(this->cpf.getCPF());
    senha_f->setSenha(this->senha.getSenha());

    return;

}


void Ingresso::setIngresso(int novo_codigo) throw (invalid_argument){

codigo.setCodigo_de_Ingresso(novo_codigo);

}

void Ingresso::getIngresso(Codigo_de_Ingresso *codigo_f){

    codigo_f->setCodigo_de_Ingresso(this->codigo.getCodigo_de_Ingresso());
    return;
}


void Cartao_de_credito::setCartao_de_credito(long long int numero_f, int codigo_cartao_f, string data_f) throw (invalid_argument){

numero.setNumero_Cartao_Credito(numero_f);
codigo_cartao.setCodigo_de_Seguranca_Cartao_Credito(codigo_cartao_f);
data.setData_Validade_Cartao_Credito(data_f);

}

void Cartao_de_credito::getCartao_de_credito(Numero_Cartao_Credito *numero_f, Codigo_de_Seguranca_Cartao_Credito *codigo_cartao_f, Data_Validade_Cartao_Credito *data_f){

    numero_f->setNumero_Cartao_Credito(this->numero.getNumero_Cartao_Credito());

    codigo_cartao_f->setCodigo_de_Seguranca_Cartao_Credito(this->codigo_cartao.getCodigo_de_Seguranca_Cartao_Credito());

    data_f->setData_Validade_Cartao_Credito(this->data.getData_Validade_Cartao_Credito());

    return;
}


void Evento::setEvento(int novo_codigo, string novo_nome, string novo_cidade, string novo_estado,
                int novo_classe, string novo_faixa) throw (invalid_argument){

codigo.setCodigo_de_Evento(novo_codigo);
nome.setNome_de_Evento(novo_nome);
cidade.setCidade(novo_cidade);
estado.setEstado(novo_estado);
classe.setClasse_Evento(novo_classe);
faixa.setFaixa_Etaria(novo_faixa);

}

void Evento::getEvento(Codigo_de_Evento *codigo_f, Nome_de_Evento *nome_f, Cidade *cidade_f, Estados_Brasileiros *estado_f,
                   Classe_Evento *classe_f, Faixa_Etaria *faixa_f){

    codigo_f->setCodigo_de_Evento(this->codigo.getCodigo_de_Evento());
    nome_f->setNome_de_Evento(this->nome.getNome_de_Evento());
    cidade_f->setCidade(this->cidade.getCidade());
    estado_f->setEstado(this->estado.getEstado());
    classe_f->setClasse_Evento(this->classe.getClasse_Evento());
    faixa_f->setFaixa_Etaria(this->faixa.getFaixa_Etaria());

    return;

}


void Apresentacao::setApresentacao(int novo_codigo, string novo_data, string novo_horario, float novo_preco,
                int novo_sala, int novo_disponibilidade) throw (invalid_argument){

codigo.setCodigo_de_Apresentacao(novo_codigo);
data.setData(novo_data);
horario.setHorario(novo_horario);
preco.setPreco(novo_preco);
sala.setNumero_de_Sala(novo_sala);
disponibilidade.setDisponibilidade(novo_disponibilidade);

}

void Apresentacao::getApresentacao(Codigo_de_Apresentacao *codigo_f, Data *data_f, Horario *horario_f, Preco *preco_f,
                   Numero_de_Sala *sala_f, Disponibilidade *disponibilidade_f){

    codigo_f->setCodigo_de_Apresentacao(this->codigo.getCodigo_de_Apresentacao());
    data_f->setData(this->data.getData());
    horario_f->setHorario(this->horario.getHorario());
    preco_f->setPreco(this->preco.getPreco());
    sala_f->setNumero_de_Sala(this->sala.getNumero_de_Sala());
    disponibilidade_f->setDisponibilidade(this->disponibilidade.getDisponibilidade());

    return;
}


