#==================================================================================================#
#---------------------------------- INSTITUTO POLITECNICO NACIONAL --------------------------------#
#----------------------------------- ESCUELA SUPERIOR DE COMPUTO ----------------------------------#
#--------------------------------------------------------------------------------------------------#
#------------------------------------ ROSAS CRUZ ERICK ALEJANDRO ----------------------------------#
#==================================================================================================#

all: ./bin/muestreo.out

./obj/muestreo.o: ./main/muestreo.c
	gcc -o ./obj/muestreo.o \
      -c ./main/muestreo.c \
      -I./include \
      -Wall

./obj/procesamiento.o: ./src/procesamiento.c
	gcc -o ./obj/procesamiento.o \
      -c ./src/procesamiento.c \
      -I./include \
      -Wall

./obj/archivos.o: ./src/archivos.c
	gcc -o ./obj/archivos.o \
      -c ./src/archivos.c \
      -I./include \
      -Wall

./bin/muestreo.out: ./obj/muestreo.o ./obj/procesamiento.o ./obj/archivos.o
	gcc \
      ./obj/muestreo.o \
      ./obj/procesamiento.o \
      ./obj/archivos.o \
      -o ./bin/muestreo.out \
      -I./include \
      -lm
#--------------------------------------------------------------------------------------------------#
.PHONY: clean
clean:
	rm -f ./obj/*.o ./bin/muestreo.out
