/**
 * @file   procesamiento.c
 * @author Rosas Cruz Erick Alejandro (e.alejandro.rc@gmail.com)
 * @date   Febrero, 2017
 * @note   Para cambiar los valores de MUESTRAS, F_N y F_S, se encuentran en 'defs.h' 
 */
#include "procesamiento.h"
#include "defs.h"

#include <math.h>


void genera_seno( float seno[] ){
  register int n;

  for( n = 0; n < MUESTRAS; n++ ){
    seno[ n ] = sinf( 2 * M_PI * n * F_N / F_S );
  }

}