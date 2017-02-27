/**
 * @file   muestreo.c
 * @author Rosas Cruz Erick Alejandro (e.alejandro.rc@gmail.com)
 * @date   Febrero, 2017
 * @brief  Programa que genere una señal senoidal discreta
 *
 * Programa que genere una señal senoidal discreta con una frecuencia fundamental f y una frecuencia 
 * de muestreo fs. El función senoidal discreta esta dada por:
 *
 *                               (2 * PI * f_n)
 *                   x[ n ] = sin(------------)
 *                               (     f_s    )
 * Compilar:
 *          gcc muestreo.c -o muestreo.out -lm -Wall
 * Ejecutar:
            ./muestreo.out
 * Graficar:
            gnuplot
            load '../graf_seno.gnu'
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef MUESTRAS
#define MUESTRAS 512
#endif

#ifndef F_N
#define F_N 1000
#endif

#ifndef F_S
#define F_S 45000
#endif

/**
 * @brief  Genera una señal senoidal discreta con una frecuencia fundamental F_N y una frecuencia de
 * muestreo F_S.
 * @param  seno apuntador a un arreglo donde se van a guardar los datos de tamaño MUESTRAS
 */
void genera_seno( float seno[] );

/**
 * @brief  Guarda los datos en un archivo 'seno.dat'
 * @param  datos apuntador a un arreglo de flotantes de tamaño MUESTRAS que contiene los datos 
 */
void guarda_datos( float datos[] );

int main( void ){
  float seno[ MUESTRAS ];
  
  genera_seno( seno );

  guarda_datos( seno );

  return 0;
}

void genera_seno( float seno[] ){
  register int n;

  for( n = 0; n < MUESTRAS; n++ ){
    seno[ n ] = sinf( 2 * M_PI * n * F_N / F_S );
  }

}

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
