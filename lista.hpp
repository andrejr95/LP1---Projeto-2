//#pragma once
#ifndef _LISTA_HPP
#define _LISTA_HPP

#include <string>
#include "musica.hpp"
#include "node.hpp"

class Lista{
private:
    // Atributos da lista
    Node *head, *tail;
    int tamanho=0;

public:
    // Métodos da lista
    Lista();
    ~Lista();

    Lista(const Lista &copia); // construtor copia
    bool insereInicio(Musica musica);
    bool insereFim(Lista* lista);
    bool insereFim(Musica musica);
    bool inserePos(int posicao, Musica musica);
    void removePos(int posicao);
    void  removePos(Lista* lista);
    Node* busca(Musica musica);
    Node* buscaPos(int posicao);
    Musica* buscaMusica(Musica musica);
    Musica* buscaMusicaPos(int posicao);
    void imprime();
    int getTamanho();
    void setTamanho(int tamanho);
	Lista* operator+(Lista &plus);
};

#endif