/*
Santiago Patricio Gómez Ochoa
A01735171
24/05/2024
Programación orientada a objetos
*/

#include <iostream>
#include "tablero.cpp"
#include <ctime>
using namespace std;

int tirarDado(){
    return rand() % 6 + 1;
    
}
int main(){
    srand(static_cast<unsigned int>(time(0)));
    
    int pos1 = 0;
    int pos2 = 0;
    int nTurno = 1;
    string menu;
    Tablero tablero;
    cout << "--------------- SERPIENTES Y ESCALERAS ---------------" << endl;
    cout << "¡Bienvenido!" << endl;
    cout << endl;
    cout << "Este juego es para mínimo, y máximo, 2 jugadores." << endl;
    cout << "Antes de continuar, porfavor asegúrate de que cuentas con otra persona para jugar." << endl;
    cout << "Decidan quién será el jugador 1 y quién será el jugador 2" << endl;
    cout << endl;
    cout << "El objetivo es llegar a la última casilla del tablero." << endl;
    cout << "El primero que llegue a la útima casilla gana el juego." << endl;
    cout << endl;
    cout << "Ambos jugadores comienzan en la primera casilla" << endl;
    cout << "Por turnos, cada jugador tirará un dado virtual, que le indicará" << endl;
    cout << "cuántas casillas se moverá en su turno." << endl;
    cout << endl;
    cout << "Hay 3 tipos de casilla:" << endl;
    cout << endl;
    cout << "---------- Casillas normales ( N ) ----------" << endl;
    cout << "Si un jugador cae en este tipo de casillas, no se afecta su movimiento" << endl;
    cout << endl;
    cout << "-------------- Escaleras ( L ) --------------" << endl;
    cout << "Si un jugador cae en una escalera, avanzará otras 3 casillas a partir de la casilla de escalera" << endl;
    cout << endl;
    cout << "------------- Serpientes ( S ) -------------" << endl;
    cout << "Si un jugador cae en una serpiente, regresará otras 3 casillas a partir de la casilla de serpiente" << endl;
    cout << endl;
    cout << "------ Jugadores en la misma casilla ( B ) -------" << endl;
    cout << "Esta casilla solamente aparecerá cuando ambos jugadores se encuentren en la misma casilla" << endl;
    cout << endl;
    cout << "Por favor, elige alguna de estas opciones: " << endl;
    cout << "< C > ---- Continuar" << endl;
    cout << "< E > ---- Salir" << endl;
    cin >> menu;
    menu[0] = toupper(menu[0]);

    while(menu != "C" || menu != "E"){
        if(menu == "C"){
            cout << "¡Comienza el juego!" << endl;
            cout << endl;
            tablero.printTablero(pos1, pos2);
            cout << "El jugador 1 y el jugador 2 se encuentran en la primera casilla" << endl;
            while (pos1 < 30 && pos2 < 30){
      for(int turn= 1; turn < 3; turn++){
            cout << "--------------- TURNO NÚMERO " << nTurno << " DEL JUGADOR " << turn << " ---------------" << endl;
            //cout << "Turno del jugador " << turn << endl;
            cout << "Teclea la letra < D > para tirar el dado" << endl;
            string tirarTurno;
            int dado = tirarDado();
            cin >> tirarTurno;
            tirarTurno[0] = toupper(tirarTurno[0]);
            cout << endl;

            while(tirarTurno != "D"){
              if(tirarTurno == "D"){
                dado = tirarDado();
             }
              else{
                cout << "Teclea la letra < D > para tirar el dado" << endl;
                cin >> tirarTurno;
                tirarTurno[0] = toupper(tirarTurno[0]);
                cout << endl;
             }  
            }
            cout << "El jugador " << turn << " se mueve " << dado << " casillas" << endl;
            cout << endl;
            if(turn == 1){
                pos1 += dado;
                 
                tablero.printTablero(pos1, pos2);
                pos1 = tablero.getUpdatedPosition(pos1);
                cout << "El jugador 1 se encuentra en la casilla " << pos1+1 << endl;
                cout << endl;

               if(pos1 >= 29 && pos2 < 29){
                   tablero.printTablero(29, pos2);
                   cout << "------------------------- GAME OVER -------------------------" << endl;
                   cout << "¡El jugdor 1 gana!" << endl;
                   cout << endl;
                   cout << "Gracias por jugar :)" << endl;
                   return 0;
               } 
            }
            if(turn == 2){
                pos2 += dado;
                 
                tablero.printTablero(pos1, pos2);
                pos2 = tablero.getUpdatedPosition(pos2);
                cout << "El jugador 2 se encuentra en la casilla " << pos2+1 << endl;
                cout << endl; 
                
                if(pos1 < 29 && pos2 >= 29){
                    tablero.printTablero(pos1, 29);
                    cout << "--------------- GAME OVER ---------------" << endl;
                    cout << "¡El jugdor 2 gana!" << endl;
                    cout << endl;
                    cout << "Gracias por jugar :)" << endl;
                    return 0;
                        }

                    }
                
                }  
                nTurno += 1;
         } 
        
        
        }
        if(menu == "E"){
            cout << "¡Hasta pronto! :)" << endl;
            return 0;
        }
        else{
            cout << "Introduce una opción válida" << endl;
            cout << "< C > ---- Continuar" << endl;
            cout << "< E > ---- Salir" << endl;
            cin >> menu;
            menu[0] = toupper(menu[0]);
        }
    }

    
return 0;    
}