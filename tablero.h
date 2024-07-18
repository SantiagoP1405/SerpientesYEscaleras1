/*
Santiago Patricio Gómez Ochoa
A01735171
24/05/2024
Programación orientada a objetos
*/

#include <string>
#include <list>
class Tablero{
private:
    std::string board[30];
    
public:
    Tablero();
    Tablero(int posJ1, int posJ2);

    void printTablero(int pos1, int pos2);
    
    void printWinner(int pos1, int pos2);
    int getUpdatedPosition(int position);
    std::string to_string();
};