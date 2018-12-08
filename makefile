correlacion: principal.c aleatorio.c diezpuntos.c 
	gcc principal.c aleatorio.c diezpuntos.c -I ./libs -o correlacion.o

clean:
	rm correlacion.o
