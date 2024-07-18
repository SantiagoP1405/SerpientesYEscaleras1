/*
Santiago Patricio Gómez Ochoa
A01735171
24/05/2024
Programación orientada a objetos
*/

#include "tablero.h"
#include <math.h>
#include <iostream>
using namespace std;


Tablero::Tablero(){
    for (int i = 0; i < 30; i++){
        board[i] = 'N';
    }
    board[4] = "S";
    board[12] = "S";
    board[16] = "S";
    board[27] = "S";

    board[7] = "L";
    board[14] = "L";
    board[19] = "L";
    board[26] = "L";
}


void Tablero::printTablero(int posJ1, int posJ2){
    for(int i = 0; i < 30; i++){
        if(i == posJ1 && posJ1 == posJ2){
            cout << "B ";
        }
        else if(i == posJ1){
            cout << "1 ";
        }
        else if(i == posJ2){
            cout << "2 ";
        }
        else{
        cout << board[i] + " ";
        }
        if((i+1) % 6 == 0){
            cout << '\n';
        }
        
        if (board[posJ1] == "L" ) {
        posJ1 += 3;
        }
        if (board[posJ1] == "S") {
        posJ1 -= 3;
        }
        if (board[posJ2] == "L") {
        posJ2 += 3;
        }
        if (board[posJ2] == "S") {
        posJ2 -= 3;
        } 
        
    
}
cout << endl;
}

int Tablero::getUpdatedPosition(int position) {
    if (board[position] == "L") {
        cout << "Ha caído en una casilla de escaleras ( L )" << endl;
        cout << "Avanza 3 casillas" << endl;
        return position + 3;
    }
    if (board[position] == "S") {
        cout << "Ha caído en una casilla de serpiente ( S )" << endl;
        cout << "Retrocede 3 casillas" << endl;
        return position - 3;
    }
    if (board[position] == "N") {
        
        cout << "Ha caído en una casilla normal ( N )" << endl;
        return position;
        
    }
}




