/**
 * @file   muestreo.c
 * @author Rosas Cruz Erick Alejandro (e.alejandro.rc@gmail.com)
 * @date   Febrero, 2017
 * @brief  Programa que genere una señal senoidal discreta
 *
 * Programa que generá una señal senoidal discreta con una frecuencia fundamental f y una frecuencia 
 * de muestreo fs. El función senoidal discreta esta dada por:
 *
 *                               (2 * PI * f_n)
 *                   x[ n ] = sin(------------)
 *                               (     f_s    )
 * Compilar:
 *          make
 * Ejecutar:
            ./bin/muestreo.out
 * Graficar:
            gnuplot
            load '../graf_seno.gnu'
 *
 */
#include "defs.h"
#include "procesamiento.h"
#include "archivos.h"


int main( void ){
  float seno[ MUESTRAS ];
  
  genera_seno( seno );

  guarda_datos( seno );

  return 0;
}
