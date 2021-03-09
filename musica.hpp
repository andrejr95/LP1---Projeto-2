//#pragma once
#ifndef _MUSICA_HPP
#define _MUSICA_HPP

#include <string>

class Musica{

private:
    // Atributos da classe
    std::string nome, artista;

public:
    // Métodos da classe

    Musica();
    ~Musica();

    std::string getNome();
    void setNome(std::string nome);

    std::string getArtista();
    void setArtista(std::string artista);

};

#endif