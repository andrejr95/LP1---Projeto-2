//#pragma once
#ifndef _PLAYLIST_HPP
#define _PLAYLIST_HPP

#include <string>
#include "musica.hpp"
#include "node.hpp"
#include "lista.hpp"

using namespace std;

class Playlist{
private:
    // Atributos da playlist
    std::string nome;
    Lista* playlist;
    int proxima;

public:
    // Métodos da playlist
    Playlist();
    ~Playlist();

    Playlist(const Playlist &copia); // construtor copia
    bool adicionaMusicaInicio(Musica musica);
    bool adicionaMusicaFim(Musica musica);
    bool adicionaMusicaFim(Playlist* playlist2); // metodo sobrecarregado para inserir uma playlist a outra
    bool adicionaMusicaPos(int posicao, Musica musica);
    void removeMusicaPos(int posicao);
    void removeMusicaPos(Playlist* playlist2);
    void moveMusica(int pos_inicial, int pos_final);
    void imprime(Node* node, int contador);
    Musica *proxMusica();
    Lista* getLista();
    void setLista(Lista* lista);
    std::string getNome();
    void setNome(std::string);
    Playlist* operator+(Playlist &plus);
    Playlist* operator+(Musica &musica);
    Playlist* operator-(Playlist &playlist);
    Playlist* operator-(Musica &musica);
    void  operator<<(Musica &obj);



};

#endif