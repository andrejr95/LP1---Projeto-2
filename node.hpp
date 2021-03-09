//#pragma once
#ifndef _NODE_HPP
#define _NODE_HPP

#include<string>
#include "musica.hpp"

class Node{

public:
    // Atributos da classe
    Musica* musica;
    Node* next;

    // Métodos da classe
    Node();
    ~Node();
};

#endif