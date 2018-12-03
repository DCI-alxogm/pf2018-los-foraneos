correlacion: main.c funcion.c
	gcc main.c funcion.c -I ./libs -o correlacion.o

clean:
	rm correlacion.o
