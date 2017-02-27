/**
 * @file   procesamiento.h
 * @author Rosas Cruz Erick Alejandro (e.alejandro.rc@gmail.com)
 * @date   Febrero, 2017
 * @note   Para cambiar los valores de MUESTRAS, F_N y F_S, se encuentran en 'defs.h' 
 */
 #ifndef RCEA_PROCESAMIENTO
 #define RCEA_PROCESAMIENTO

/**
 * @brief  Genera una señal senoidal discreta con una frecuencia fundamental F_N y una frecuencia de
 * muestreo F_S.
 * @param  seno apuntador a un arreglo donde se van a guardar los datos de tamaño MUESTRAS
 */
void genera_seno( float seno[] );

 #endif