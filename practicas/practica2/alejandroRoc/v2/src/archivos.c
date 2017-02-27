/**
 * @file   archivos.c
 * @author Rosas Cruz Erick Alejandro (e.alejandro.rc@gmail.com)
 * @date   Febrero, 2017  
 */
#include "archivos.h"
#include "defs.h"

#include <stdio.h>
#include <stdlib.h>


void guarda_datos( float datos[] ){
  FILE * ptr_f;
  register int n;

  ptr_f = fopen( "seno.dat", "w" );

  if( !ptr_f ){
    perror( "Error al abrir" );
    exit( EXIT_FAILURE );
  }

  for( n = 0; n < MUESTRAS; n++ ){
    fprintf( ptr_f, "%f \n", datos[ n ] );
  }
  fclose(ptr_f);
}
