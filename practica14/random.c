#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
int main(int argc, char *argv[])
{
        int fd; //Declaracion de un descriptor de archivos.
        char *archivo="/dev/random";
	int guardanumero; //almacenamos el numero en un entero
        fd=open(archivo,O_RDONLY);
	//Valido
        if(fd==-1)
                fprintf(stderr,"No se pudo abrir el archivo");
	        printf("Descriptor de archivo: %d\n",fd);
	if(read(fd,&guardanumero,sizeof(int))!=0)
                printf("Numero: %i\n",guardanumero);
	if(close(fd)==-1)
                fprintf(stderr,"No se pudo cerrar el descriptor de archivo");
}
