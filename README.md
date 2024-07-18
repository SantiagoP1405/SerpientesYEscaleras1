# SerpientesYEscaleras1
Primera versión del juego de serpientes y escaleras. El tablero, el número de jugadores, la cantidad y posición de las casillas de serpientes y escaleras, la cantidad de casillas que avanzan o retroceden al caer en ellas y el número de turnos son fijos

Santiago Patricio Gómez Ochoa | A01735171
Programación Orientada a Objetos
24/05/2024

INSTRUCCIONES DE USO DEL JUEGO DE SERPIENTES Y ESCALERAS

NÚMERO DE JUGADORES: 2

----- PRIMER PASO -----
Se debe descomnprimir los archivos de la carpeta .zip. 
Dicha carpeta incluye el archivo .h y el archivo .cpp 
de la clase "Tablero" y el archivo main llamado "snakes.cpp".
Este último es el archivo que se ejecutará para comenzar el juego. 

----- SEGUNDO PASO -----
Una vez descomprimida la carpeta, abrir una powershell o
una terminal en la ubicación en la que se descargaron los archivos,
y una vez realizado esto, ingresar en la powershell o terminal las siguientes instrucciones:

Instrucción para compilar el programa
> g++ snakes.cpp    

Instrucción para ejecutar el programa
> ./a.out

Una vez hecho esto, esperar a que aparezca la siguiente leyenda:
"--------------- SERPIENTES Y ESCALERAS ---------------"

----- TERCER PASO -----
Seguir las instrucciones que aparecen a continuación.
Se le pedirá que elija una de las opciones entre "C" (continuar con el juego)
y "E" (salir del juego). El juego no le dejará ingresar ninguna otra letra
y le seguirá pidiendo que ingrese alguna de estas dos letras. Puede ingresarlas
ya sea en mayúscula o en minúscula.

Si ingresa la tecla "E", el programa terminará, y tendrá que volver
a ingresar las instrucciones en la powershell (indicadas en el SEGUNDO PASO)
para volver a ejecutar el programa. 

Si ingresa la tecla "C", el juego comenzará.

----- CUARTO PASO -----
El juego imprimirá el tablero en el que ambos jugadores aparecerán en la misma casilla (la primera).
Cada jugador tiene que teclear la letra "D" para tirar el dado. Una vez que lo hagan, 
se mostrará su nueva posición en el tablero, cuántas casillas avanzó, en qué número de casilla se encuentra,
y en qué tipo de casilla cayó. Posteriormente, será el turno del siguiente jugador. Esto se repetirá hasta
que un jugador llegue a la última casilla. Cuando eso suceda, el juego indicará cuál jugador ganó, 
y el programa terminará. 


