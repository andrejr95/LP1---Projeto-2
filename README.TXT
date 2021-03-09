README - Projeto 2 da disciplina: IMD0030 - LINGUAGEM DE PROGRAMAÇÃO I - T02 (2020.2)

Professor: Renan Cipriano Moioli

Aluno: André Luis Gurgel de Faria Junior - Matrícula: 20190045378

Parte do código da primeira unidade disponibilizado pelo aluno Diego Filgueiras.

Para compilar e rodar o programa basta abrir um terminal Linux(foi usado Ubuntu 20.04 no caso), na pasta contendo os arquivos, e digitar make para executar o makefile. Isso ira criar os arquivos main.o musica.o lista.o playlist.o node.o e o executável exec. Para rodar o programa ainda no terminal, digitar: ./exec
Para limpar a pasta dos arquivos criados basta digitar make clean.

Ao executar os casos de teste já estão disponíveis no main, aparecendo no terminal assim que o programa for executado.

Segue como deve aparecer ao executar:


-------------ADICIONAR LISTA A OUTRA LISTA SEM MUSICA-----------------

Imprimir lista 2:
1. Musica_1_L2 Artista: Art_1
2. Musica_2_L2 Artista: Art_2
3. Musica_3_L2 Artista: Art_3


Imprimir lista 1 após adicionar lista 2:
1. Musica_1_L2 Artista: Art_1
2. Musica_2_L2 Artista: Art_2
3. Musica_3_L2 Artista: Art_3


Imprimir lista 2 após remover um elemento da lista 2: // testando se elas estão independentes entre si
1. Musica_2_L2 Artista: Art_2
2. Musica_3_L2 Artista: Art_3


Imprimir lista 1 após remoção de um elemento da lista 2:
1. Musica_1_L2 Artista: Art_1
2. Musica_2_L2 Artista: Art_2
3. Musica_3_L2 Artista: Art_3


-------------ADICIONAR LISTA A OUTRA LISTA CONTENDO MUSICAS-----------------

Imprimir lista 1 antes de adicionar:
1. Musica_1_L2 Artista: Art_1
2. Musica_2_L2 Artista: Art_2
3. Musica_3_L2 Artista: Art_3
4. Musica_1_L1 Artista: Art_1


Imprimir lista 3 antes de adicionar:
1. Musica_1_L3 Artista: Art_1
2. Musica_2_L3 Artista: Art_2


Tamanho lista 1: 6                   // testando se o tamanho esta aumentando de acordo com o numero adicionado de musicas
Imprimir lista 1 após somar:
1. Musica_1_L2 Artista: Art_1 		// testando se elas estão independentes entre si
2. Musica_2_L2 Artista: Art_2
3. Musica_3_L2 Artista: Art_3
4. Musica_1_L1 Artista: Art_1
5. Musica_1_L3 Artista: Art_1
6. Musica_2_L3 Artista: Art_2


-------------TESTANDO CONSTRUTOR COPIA LISTA-----------------

construtor copia finalizado       // cout do construtor copia para comprovar que ele foi chamado
Imprimir lista 1 :
1. Musica_1_L2 Artista: Art_1
2. Musica_2_L2 Artista: Art_2
3. Musica_3_L2 Artista: Art_3
4. Musica_1_L1 Artista: Art_1
5. Musica_1_L3 Artista: Art_1
6. Musica_2_L3 Artista: Art_2

Imprimir copia :
1. Musica_1_L2 Artista: Art_1
2. Musica_2_L2 Artista: Art_2
3. Musica_3_L2 Artista: Art_3
4. Musica_1_L1 Artista: Art_1
5. Musica_1_L3 Artista: Art_1
6. Musica_2_L3 Artista: Art_2

Imprimir lista 1 após adicionar uma musica:    
1. Musica_1_L2 Artista: Art_1
2. Musica_2_L2 Artista: Art_2
3. Musica_3_L2 Artista: Art_3
4. Musica_1_L1 Artista: Art_1
5. Musica_1_L3 Artista: Art_1
6. Musica_2_L3 Artista: Art_2
7. Musica_1_Copia Artista: Art_Copia


Imprimir copia após adição de uma musica da lista 1:   // testando se elas estão independentes entre si
1. Musica_1_L2 Artista: Art_1
2. Musica_2_L2 Artista: Art_2
3. Musica_3_L2 Artista: Art_3
4. Musica_1_L1 Artista: Art_1
5. Musica_1_L3 Artista: Art_1
6. Musica_2_L3 Artista: Art_2


Imprimir lista 1 após remover uma musica:   // testando se elas estão independentes entre si
1. Musica_2_L2 Artista: Art_2
2. Musica_3_L2 Artista: Art_3
3. Musica_1_L1 Artista: Art_1
4. Musica_1_L3 Artista: Art_1
5. Musica_2_L3 Artista: Art_2
6. Musica_1_Copia Artista: Art_Copia


Imprimir copia após remoção de uma musica da lista 1:   // testando se elas estão independentes entre si
1. Musica_1_L2 Artista: Art_1
2. Musica_2_L2 Artista: Art_2
3. Musica_3_L2 Artista: Art_3
4. Musica_1_L1 Artista: Art_1
5. Musica_1_L3 Artista: Art_1
6. Musica_2_L3 Artista: Art_2


--------------REMOVER LISTA 2----------------

Imprimir lista 1 antes da remoção:
1. Musica_2_L2 Artista: Art_2
2. Musica_3_L2 Artista: Art_3
3. Musica_1_L1 Artista: Art_1
4. Musica_1_L3 Artista: Art_1
5. Musica_2_L3 Artista: Art_2
6. Musica_1_Copia Artista: Art_Copia


Imprimir lista 2 antes da remoção:
1. Musica_2_L2 Artista: Art_2
2. Musica_3_L2 Artista: Art_3


foram removidas  2 musicas! 

Imprimir lista 1 apos remoção:
1. Musica_1_L1 Artista: Art_1
2. Musica_1_L3 Artista: Art_1
3. Musica_2_L3 Artista: Art_2
4. Musica_1_Copia Artista: Art_Copia


--------------REMOVER LISTA 3----------------

Imprimir lista 1 antes da remoção:
1. Musica_1_L1 Artista: Art_1
2. Musica_1_L3 Artista: Art_1
3. Musica_2_L3 Artista: Art_2
4. Musica_1_Copia Artista: Art_Copia


Imprimir lista 3 antes da remoção:
1. Musica_1_L3 Artista: Art_1
2. Musica_2_L3 Artista: Art_2


foram removidas  2 musicas! 

Imprimir lista 1 apos remoção:
1. Musica_1_L1 Artista: Art_1
2. Musica_1_Copia Artista: Art_Copia

-------------- Somar Lista 2 e 3----------------


Imprimir lista 2:
1. Musica_2_L2 Artista: Art_2
2. Musica_3_L2 Artista: Art_3



Imprimir lista 3:
1. Musica_1_L3 Artista: Art_1
2. Musica_2_L3 Artista: Art_2



Imprimir lista 2 + 3:
1. Musica_2_L2 Artista: Art_2
2. Musica_3_L2 Artista: Art_3
3. Musica_1_L3 Artista: Art_1
4. Musica_2_L3 Artista: Art_2


-------------TESTANDO CONSTRUTOR COPIA PLAYLIST-----------------

Imprimir playlist1 :
1. Musica_Playlist 1-1 Artista: Art_PL1-1
2. Musica_Playlist 1-2 Artista: Art_PL1-2


construtor copia finalizado
Imprimir copia :
1. Musica_Playlist 1-1 Artista: Art_PL1-1
2. Musica_Playlist 1-2 Artista: Art_PL1-2

-------------ADICIONAR PLAYLIST A OUTRA PLAYLIST -----------------

Imprimir playlist1 :

1. Musica_Playlist 1-1 Artista: Art_PL1-1
2. Musica_Playlist 1-2 Artista: Art_PL1-2


Imprimir playlist2 :

1. Musica_Playlist 2-1 Artista: Art_PL2-1
2. Musica_Playlist 2-2 Artista: Art_PL2-2


Imprimir playlist1 apos a soma :

1. Musica_Playlist 1-1 Artista: Art_PL1-1
2. Musica_Playlist 1-2 Artista: Art_PL1-2
3. Musica_Playlist 2-1 Artista: Art_PL2-1
4. Musica_Playlist 2-2 Artista: Art_PL2-2


-------------REMOVER PLAYLIST DE OUTRA PLAYLIST -----------------

Imprimir playlist1 antes da remoção:

1. Musica_Playlist 1-1 Artista: Art_PL1-1
2. Musica_Playlist 1-2 Artista: Art_PL1-2
3. Musica_Playlist 2-1 Artista: Art_PL2-1
4. Musica_Playlist 2-2 Artista: Art_PL2-2


Imprimir playlist2 antes da remoção:

1. Musica_Playlist 2-1 Artista: Art_PL2-1
2. Musica_Playlist 2-2 Artista: Art_PL2-2


Realizando a remoção da playlist2 na playlist1:

foram removidas  2 musicas! 

Imprimir playlist1 apos a remoção da playlist2:

1. Musica_Playlist 1-1 Artista: Art_PL1-1
2. Musica_Playlist 1-2 Artista: Art_PL1-2


-------------- Somar Playlist 1 e 2----------------


Imprimir lista 1:
1. Musica_Playlist 1-1 Artista: Art_PL1-1
2. Musica_Playlist 1-2 Artista: Art_PL1-2



Imprimir lista 2:
1. Musica_Playlist 2-1 Artista: Art_PL2-1
2. Musica_Playlist 2-2 Artista: Art_PL2-2



Imprimir Playlist 1 + 2:
1. Musica_Playlist 1-1 Artista: Art_PL1-1
2. Musica_Playlist 1-2 Artista: Art_PL1-2
3. Musica_Playlist 2-1 Artista: Art_PL2-1
4. Musica_Playlist 2-2 Artista: Art_PL2-2


-------------- Somar Playlist 1 e uma musica----------------


Imprimir lista 1:
1. Musica_Playlist 1-1 Artista: Art_PL1-1
2. Musica_Playlist 1-2 Artista: Art_PL1-2
3. Musica_Playlist 2-1 Artista: Art_PL2-1
4. Musica_Playlist 2-2 Artista: Art_PL2-2



Imprimir Playlist 1 + musica:
1. Musica_Playlist 1-1 Artista: Art_PL1-1
2. Musica_Playlist 1-2 Artista: Art_PL1-2
3. Musica_Playlist 2-1 Artista: Art_PL2-1
4. Musica_Playlist 2-2 Artista: Art_PL2-2
5. Musica_Playlist1-teste+ Artista: Art_PL1-teste+


-------------- Subtrair Playlist 1 e 2----------------


Imprimir lista 1:
1. Musica_Playlist 1-1 Artista: Art_PL1-1
2. Musica_Playlist 1-2 Artista: Art_PL1-2
3. Musica_Playlist 2-1 Artista: Art_PL2-1
4. Musica_Playlist 2-2 Artista: Art_PL2-2
5. Musica_Playlist1-teste+ Artista: Art_PL1-teste+



Imprimir lista 2:
1. Musica_Playlist 2-1 Artista: Art_PL2-1
2. Musica_Playlist 2-2 Artista: Art_PL2-2



Imprimir Playlist 1 - 2:
foram removidas  2 musicas! 

1. Musica_Playlist 1-1 Artista: Art_PL1-1
2. Musica_Playlist 1-2 Artista: Art_PL1-2
3. Musica_Playlist1-teste+ Artista: Art_PL1-teste+


-------------- Subtrair Playlist 1 e uma musica----------------


Imprimir lista 1:
1. Musica_Playlist 1-1 Artista: Art_PL1-1
2. Musica_Playlist 1-2 Artista: Art_PL1-2
3. Musica_Playlist1-teste+ Artista: Art_PL1-teste+
4. Musica_Playlist1-teste1- musica Artista: Art_PL1-teste1- musica
5. Musica_Playlist1-teste2- musica Artista: Art_PL1-teste2- musica



Imprimir Playlist 1 - musica:
1. Musica_Playlist 1-1 Artista: Art_PL1-1
2. Musica_Playlist 1-2 Artista: Art_PL1-2
3. Musica_Playlist1-teste+ Artista: Art_PL1-teste+
4. Musica_Playlist1-teste2- musica Artista: Art_PL1-teste2- musica


-------------TESTE DO OPERADOR << PARA ADICONAR MUSICA NO FIM DA PLAYLIST -----------------

Imprimir playlist1 :

1. Musica_Playlist 1-1 Artista: Art_PL1-1
2. Musica_Playlist 1-2 Artista: Art_PL1-2
3. Musica_Playlist1-teste+ Artista: Art_PL1-teste+
4. Musica_Playlist1-teste2- musica Artista: Art_PL1-teste2- musica


utilizando operador << para adicionar uma musica na playlist1
Imprimir playlist1 apos <<:

1. Musica_Playlist 1-1 Artista: Art_PL1-1
2. Musica_Playlist 1-2 Artista: Art_PL1-2
3. Musica_Playlist1-teste+ Artista: Art_PL1-teste+
4. Musica_Playlist1-teste2- musica Artista: Art_PL1-teste2- musica
5. Musica_Playlist1-teste<< Artista: Art_PL1-teste<<


Programa encerrado!


Infelizmente não foi possível a implementação funcional de todos os tópicos projeto, entre as maiores dificuldades que tive, continuam sendo principalmente o uso de ponteiros, acesso aos node da lista ligada necessário para as funções e operadores sobrecarregados e a dificuldade de ter acesso a um computador durante o tempo do projeto, visto que estou no aguardo da garantia da minha placa mãe, que ainda tem uma previsão de um mês a partir dessa data de envio.
