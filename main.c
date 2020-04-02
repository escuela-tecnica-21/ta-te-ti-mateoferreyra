#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


char tablero[9]= "";
int x[9],o[9],lugar_ocupado[9];
int main()
{
    int y,respuesta;

    for (y=0;y<9;y++)
    {
        x[y]=y+1;
        o[y]=y+1;
        lugar_ocupado[y]=0;
    }
    y=0;
    while (y<9)
    {
        if (y%2==0)
        {
            system("cls");
            tablero_dibujado(); //FUNCION DE DIBUJAR EL TABLERO
            printf("ingrese un numero del 1 al 9\n¿ donde queire poner la X ? = ");
            scanf("%d",&respuesta);
            if (lugar_ocupado[respuesta-1]==0 && respuesta > 0 && respuesta < 10)
            {
                tablero[respuesta-1]= 'X';//en casillero que pone el usuario pone una O
                lugar_ocupado[respuesta-1]=1;//se va a ocupar el lugar donde el usuario quiera
                x[respuesta-1]=13;//se le asigna un valor al vector de las x
                y++;// si lo anterior no se cumple se vuelve a repetir ciclo
            }
            else { y=y; }
        }
        else
        {
            system("cls");
            tablero_dibujado();//FUNCION DE DIBUJAR EL TABLERO
            printf("ingrese un numero del 1 al 9\n¿donde quiere pon er la O ? = ");
            scanf("%d",&respuesta);
            if (lugar_ocupado[respuesta-1]==0 && respuesta > 0 && respuesta < 10)
            {
                tablero[respuesta-1]= 'O';//en casillero que pone el usuario pone una O
                lugar_ocupado[respuesta-1]=1;//se va a ocupar el lugar donde el usuario quera
                o[respuesta-1]=14;//se le asigna un valor al vector de las O
                y++; // si lo anterior no se cumple se vuelve a repetir ciclo
            }
            else { y=y; }
        }
    }
    system("cls");
    printf(" %c | %c | %c \n---+---+---\n %c | %c | %c\n---+---+---\n %c | %c | %c\n",tablero[0],tablero[1],tablero[2],tablero[3],tablero[4],tablero[5],tablero[6],tablero[7],tablero[8]);
}
//FUNCION DE DIBUJAR EL TABLERO
void tablero_dibujado()
{
    printf(" %c | %c | %c \n---+---+---\n %c | %c | %c\n---+---+---\n %c | %c | %c\n",tablero[0],tablero[1],tablero[2],tablero[3],tablero[4],tablero[5],tablero[6],tablero[7],tablero[8]);
}
