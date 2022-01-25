Geração aleatória de terrenos

==========================================

o O que foi feito
o O que faltou
o Possíveis mudanças futuras
o Compilação
==========================================
==========================================
==========================================
o O que foi feito:
	Um programa com 3 funções, que a partir de um valor aleatorio gerado, vai construindo os proximos valores
a com a variação também aleatória entre -2 e 2, a partir desses pontos o programa pinta todos os pixels desses para baixo,
da mesma cor, que no caso é a montanha.
	Nesse programa foram feitas 3 funções, duas que printam no arquivo terrain.ppm o painel ppm do tipo p3 e também as
cores que variam de 0-255. Alem disso foi usado o registro pontos, usado arrays e vetores e também feita a modularização
por partes para que o código fique mais organizado.
==========================================
==========================================
o O que faltou:
	Não consegui fazer o algoritmo do midpoint displacement então tentei improvisar algo com uma lógica que eu criei 
para que ficasse parecendo uma montanha...
==========================================
==========================================

o Possíveis mudanças futuras:
Adicionar o algoritmo do midpoint displacement, utilizar recursão para esse algoritmo, adicionar contorno na montanha,
 também adicionar uma lua e estrelas para que o código fique mais bonitinho :D, alem disso imprimir todo o programo usando
uma matriz.
==========================================
==========================================

o Compilação:

all: exec é o target principal
O exec chama as duas funções pra fazer os arquivos .o
o $FLAGS é útil e facilita caso eu precise de alguma alteração na compilação.



