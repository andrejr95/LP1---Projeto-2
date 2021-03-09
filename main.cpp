#include <iostream>
#include <sstream>
#include <cstdlib>
#include <string>
#include "musica.hpp"
#include "node.hpp"
#include "lista.hpp"
#include "playlist.hpp"


using namespace std;


int main(int argc, char const *argv[]){

    Musica musica;
    
    // Lista de todas as músicas do sistema
    Lista *musicas_sistema = new Lista;

    // Lista 2
    Lista *lista2 = new Lista;

    // Lista 3
    Lista *lista3 = new Lista;


    system("clear");

    cout << "-------------ADICIONAR LISTA A OUTRA LISTA SEM MUSICA-----------------" << endl << endl;

    musica.setNome("Musica_1_L2");
    musica.setArtista("Art_1");
    lista2->insereFim(musica);

    musica.setNome("Musica_2_L2");
    musica.setArtista("Art_2");
    lista2->insereFim(musica);

    musica.setNome("Musica_3_L2");
    musica.setArtista("Art_3");
    lista2->insereFim(musica);

    cout << "Imprimir lista 2:" << endl;
    lista2->imprime();
    cout << endl;

    musicas_sistema->insereFim(lista2); // adiciona lista2 na musicas_sistema (lista 1)

    cout << "Imprimir lista 1 após adicionar lista 2:" << endl;
    musicas_sistema->imprime();
    cout << endl;

    lista2->removePos(1); // testando se a remover de uma afeta a outra

    cout << "Imprimir lista 2 após remover um elemento da lista 2:" << endl;
    lista2->imprime();
    cout << endl;

    cout << "Imprimir lista 1 após remoção de um elemento da lista 2:" << endl;
    musicas_sistema->imprime();
    cout << endl;


    //LISTA COM ELEMENTO
    cout << "-------------ADICIONAR LISTA A OUTRA LISTA CONTENDO MUSICAS-----------------" << endl << endl;
    musica.setNome("Musica_1_L1");
    musica.setArtista("Art_1");
    musicas_sistema->insereFim(musica);

    cout << "Imprimir lista 1 antes de adicionar:" << endl;
    musicas_sistema->imprime();
    cout << endl;

    musica.setNome("Musica_1_L3");
    musica.setArtista("Art_1");
    lista3->insereFim(musica);

    musica.setNome("Musica_2_L3");
    musica.setArtista("Art_2");
    lista3->insereFim(musica);

    cout << "Imprimir lista 3 antes de adicionar:" << endl;
    lista3->imprime();
    cout << endl;

    musicas_sistema->insereFim(lista3); // adiciona lista3 na musicas_sistema (lista 1)

    cout << "Tamanho lista 1: " << musicas_sistema->getTamanho() << endl;

    cout << "Imprimir lista 1 após somar:" << endl;
    musicas_sistema->imprime();
    cout << endl;

    cout << "-------------TESTANDO CONSTRUTOR COPIA LISTA-----------------" << endl << endl;
    
    Lista *copia = new Lista(*musicas_sistema); // chama o construtor copia - copiando a lista musicas_sistema para a lista copia.
    cout << "Imprimir lista 1 :" << endl;
    musicas_sistema->imprime();
    cout << "Imprimir copia :" << endl;  // teste para comprovar se elas estão iguais
    copia->imprime();
    musica.setNome("Musica_1_Copia");
    musica.setArtista("Art_Copia");
    musicas_sistema->insereFim(musica);
    cout << "Imprimir lista 1 após adicionar uma musica:" << endl;  // teste para comprovar que a alteração em uma mão afeta a outra
    musicas_sistema->imprime();
    cout << endl;
    cout << "Imprimir copia após adição de uma musica da lista 1:" << endl;
    copia->imprime();
    cout << endl;
    cout << "Imprimir lista 1 após remover uma musica:" << endl;  // teste para comprovar que a alteração em uma mão afeta a outra
    musicas_sistema->removePos(1);
    musicas_sistema->imprime();
    cout << endl;
    cout << "Imprimir copia após remoção de uma musica da lista 1:" << endl;
    copia->imprime();
    cout << endl; 

    cout << "--------------REMOVER LISTA 2----------------" << endl << endl;

    cout << "Imprimir lista 1 antes da remoção:" << endl;
    musicas_sistema->imprime();
    cout << endl;
    cout << "Imprimir lista 2 antes da remoção:" << endl;
    lista2->imprime();
    cout << endl;
    musicas_sistema->removePos(lista2); // remove lista 2 de musicas_sistema
    cout << "Imprimir lista 1 apos remoção:" << endl;
    musicas_sistema->imprime();
    cout << endl;   
    
    cout << "--------------REMOVER LISTA 3----------------" << endl << endl; 
    cout << "Imprimir lista 1 antes da remoção:" << endl;
    musicas_sistema->imprime();
    cout << endl;
    cout << "Imprimir lista 3 antes da remoção:" << endl;
    lista3->imprime();
    cout << endl; 
    musicas_sistema->removePos(lista3);

    cout << "Imprimir lista 1 apos remoção:" << endl;
    musicas_sistema->imprime();   
	
	cout << "-------------- Somar Lista 2 e 3----------------" << endl << endl;  

    cout << "\nImprimir lista 2:" << endl;
    lista2->imprime(); 
    cout << endl;  
	
	cout << "\nImprimir lista 3:" << endl;
    lista3->imprime();
    cout << endl;   
	
	cout << "\nImprimir lista 2 + 3:" << endl;
	Lista *soma2e3 = *lista2 + *lista3;
    soma2e3->imprime();
    cout << endl;

    cout << "-------------TESTANDO CONSTRUTOR COPIA PLAYLIST-----------------" << endl << endl;
    
    Playlist *playlist1 = new Playlist;
    musica.setNome("Musica_Playlist 1-1");
    musica.setArtista("Art_PL1-1");
    playlist1->adicionaMusicaFim(musica);
    musica.setNome("Musica_Playlist 1-2");
    musica.setArtista("Art_PL1-2");
    playlist1->adicionaMusicaFim(musica);
    cout << "Imprimir playlist1 :" << endl;
    playlist1->imprime(playlist1->getLista()->buscaPos(0), 1);
    cout <<endl<< endl;
    Playlist *copiaplay = new Playlist(*playlist1); // chamando construtor copia
    cout << "Imprimir copia :" << endl;  // teste para comprovar se elas estão iguais
    if(copiaplay->getLista()->getTamanho() > 1){ // Verifica se há músicas na playlist
        copiaplay->imprime(copiaplay->getLista()->buscaPos(0), 1); // Imprime as músicas da playlist
        cout << endl;
	}
    else{
    	cout << "Não há nenhuma música nessa playlist!" << endl << endl;
    }
    
    cout << "-------------ADICIONAR PLAYLIST A OUTRA PLAYLIST -----------------" << endl << endl;
    Playlist *playlist2 = new Playlist;
    musica.setNome("Musica_Playlist 2-1");
    musica.setArtista("Art_PL2-1");
    playlist2->adicionaMusicaFim(musica);

    musica.setNome("Musica_Playlist 2-2");
    musica.setArtista("Art_PL2-2");
    playlist2->adicionaMusicaFim(musica);
    
    cout << "Imprimir playlist1 :" << endl<< endl;
  	playlist1->imprime(playlist1->getLista()->buscaPos(0), 1);
    cout <<endl<< endl;
  	cout << "Imprimir playlist2 :" << endl<< endl;
  	playlist2->imprime(playlist2->getLista()->buscaPos(0), 1);
    cout <<endl<< endl;
  	playlist1->adicionaMusicaFim(playlist2);
  	cout << "Imprimir playlist1 apos a soma :" << endl<< endl;
  	playlist1->imprime(playlist1->getLista()->buscaPos(0), 1);
    cout <<endl<< endl;

    cout << "-------------REMOVER PLAYLIST DE OUTRA PLAYLIST -----------------" << endl << endl;
    cout << "Imprimir playlist1 antes da remoção:" << endl<< endl;
    playlist1->imprime(playlist1->getLista()->buscaPos(0), 1);
    cout <<endl<< endl;
    cout << "Imprimir playlist2 antes da remoção:" << endl<< endl;
    playlist2->imprime(playlist2->getLista()->buscaPos(0), 1);
    cout <<endl<< endl;
    cout << "Realizando a remoção da playlist2 na playlist1:" << endl << endl;
    playlist1->removeMusicaPos(playlist2);
    cout << "Imprimir playlist1 apos a remoção da playlist2:" << endl << endl;
    playlist1->imprime(playlist1->getLista()->buscaPos(0), 1);
    cout <<endl<< endl;

    cout << "-------------- Somar Playlist 1 e 2----------------" << endl << endl;  

    cout << "\nImprimir lista 1:" << endl;
    playlist1->imprime(playlist1->getLista()->buscaPos(0), 1); 
    cout << endl<<endl;  
    
    cout << "\nImprimir lista 2:" << endl;
    playlist2->imprime(playlist2->getLista()->buscaPos(0), 1);
    cout << endl<<endl;   
    
    cout << "\nImprimir Playlist 1 + 2:" << endl;
    Playlist *somaplay1e2 = *playlist1 + *playlist2;
    somaplay1e2->imprime(somaplay1e2->getLista()->buscaPos(0), 1);
    cout << endl<<endl;

    cout << "-------------- Somar Playlist 1 e uma musica----------------" << endl << endl;  

    cout << "\nImprimir lista 1:" << endl;
    playlist1->imprime(playlist1->getLista()->buscaPos(0), 1); 
    cout << endl<<endl;
    musica.setNome("Musica_Playlist1-teste+");
    musica.setArtista("Art_PL1-teste+");  
    cout << "\nImprimir Playlist 1 + musica:" << endl;
    Playlist *somaplay1emusica = *playlist1 + musica;
    somaplay1emusica->imprime(somaplay1emusica->getLista()->buscaPos(0), 1);
    cout << endl<<endl;

    cout << "-------------- Subtrair Playlist 1 e 2----------------" << endl << endl;  

    cout << "\nImprimir lista 1:" << endl;
    playlist1->imprime(playlist1->getLista()->buscaPos(0), 1); 
    cout << endl<<endl;  
    
    cout << "\nImprimir lista 2:" << endl;
    playlist2->imprime(playlist2->getLista()->buscaPos(0), 1);
    cout << endl<<endl;   
    
    cout << "\nImprimir Playlist 1 - 2:" << endl;
    Playlist *subplay1e2 = *playlist1 - *playlist2;
    subplay1e2->imprime(subplay1e2->getLista()->buscaPos(0), 1);
    cout << endl<<endl;

    cout << "-------------- Subtrair Playlist 1 e uma musica----------------" << endl << endl; 
    // adicionando 2 musicas de teste 
    musica.setNome("Musica_Playlist1-teste1- musica");
    musica.setArtista("Art_PL1-teste1- musica");
    *playlist1 << musica;
    musica.setNome("Musica_Playlist1-teste2- musica");
    musica.setArtista("Art_PL1-teste2- musica");
    *playlist1 << musica;
    //declarando musica para teste1 que sera removida
    musica.setNome("Musica_Playlist1-teste1- musica");
    musica.setArtista("Art_PL1-teste1- musica");
    cout << "\nImprimir lista 1:" << endl;
    playlist1->imprime(playlist1->getLista()->buscaPos(0), 1); 
    cout << endl<<endl;
    //removendo a musica teste1 da playlist1     
    cout << "\nImprimir Playlist 1 - musica:" << endl;
    Playlist *subplay1emusica = *playlist1 - musica;
    subplay1emusica->imprime(subplay1emusica->getLista()->buscaPos(0), 1);
    cout << endl<<endl;

    cout << "-------------TESTE DO OPERADOR << PARA ADICONAR MUSICA NO FIM DA PLAYLIST -----------------" << endl << endl;
    cout << "Imprimir playlist1 :" << endl<< endl;
    playlist1->imprime(playlist1->getLista()->buscaPos(0), 1);
    cout <<endl<< endl;
    cout <<"utilizando operador << para adicionar uma musica na playlist1"<<endl;
    musica.setNome("Musica_Playlist1-teste<<");
    musica.setArtista("Art_PL1-teste<<");
    *playlist1 << musica;
    cout << "Imprimir playlist1 apos <<:" << endl<< endl;
    playlist1->imprime(playlist1->getLista()->buscaPos(0), 1);
    cout <<endl<< endl;

    



    cout << "Programa encerrado!" << endl << endl;

    // Libera os espaços de memória alocados dinamicamente para as músicas do sistema e para as playlists
    delete musicas_sistema;
    delete lista2;
    delete lista3;
    delete copia;
    delete soma2e3;
    delete playlist1;
    delete playlist2;
    delete somaplay1e2;
    delete somaplay1emusica;
    delete subplay1e2;
    delete subplay1emusica;

    return 0;
}