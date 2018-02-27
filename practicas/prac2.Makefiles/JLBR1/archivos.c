#include <stdio.h>
#include <stdlib.h>
#include "defs.h"

void guarda_datos(float datos[])
{
	FILE* archivo;
	register int n;

	archivo=fopen("seno.dat","w");
	
	if (!archivo)
	{
		perror("Error al abrir el archivo");
		exit(EXIT_FAILURE);	
	}
	
	for (n=0;n<MUESTRAS;n++)
	{
		fprintf(archivo,"%f \n",datos[n]);
	}

	fclose(archivo);	
}
