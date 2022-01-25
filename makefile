FLAGS= -g -std=c99 -Wall -Wextra -Werror -pedantic

all: exec
exec: Mexe_no_arquivo.o function.o
	gcc main.c Mexe_no_arquivo.o function.o -o teste $(FLAGS)
Mexe_no_arquivo.o: Mexe_no_arquivo.c -c $(FLAGS)
function.o: function.c
	gcc function.c -c $(FLAGS)

