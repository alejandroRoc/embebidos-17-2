/*Este programa genrea una señal senoidal discreta con una frecuencia fundamental f
y una frecuencia de muestreo fs

*/

#include <stdio.h>
#include <math.h>
#include "defs.h"

void genera_seno( float seno[] ){

	float f = 1000, fs= 45000;
	register int n;

	for(n=0 ; n < MUESTRAS ; n++ ){
		seno[n] = sinf(2*n*M_PI*f/fs);
	}
}