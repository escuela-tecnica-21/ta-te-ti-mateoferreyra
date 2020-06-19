#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <conio2.h>


char tablero[9][2]; //Se usa para almacebar los datos del tablero
int lugar_ocupado[9],movimiento; //Lugar_ocupado sirve para que no sobreescribir los datos osea que no se pueda poner una ficha sobre la otra
int main()
{
    char respuesta1[3]; // respuesta1 lo que almacena es la respuesta de SI o NO
    int y,respuesta;
    llenadoVector(); // FUNCION DE LLENAR VECTORES EN VACIO

        while(1)
        {
            system("cls");
            Dibujar_tablero(); //FUNCION DE DIBUJAR EL TABLERO
            printf("desea poner una X? si o no\t");
            scanf("%s",&respuesta1);
            if (strcmp(respuesta1,"si")==0)
            {
                printf("ingrese un numero del 1 al 9\n¿ donde quiere poner la X ? = ");
                scanf("%d",&respuesta);
                if (lugar_ocupado[respuesta-1]==0 && respuesta > 0 && respuesta < 10)
                {
                    strcpy(tablero[respuesta-1],"X");//en casillero que pone el usuario pone una O
                    lugar_ocupado[respuesta-1]=1;//se va a ocupar el lugar donde el usuario quiera
                }

            }
            if(strcmp(respuesta1,"no")==0)
            {
                break;
            }
        }
        while(1)
        {
            system("cls");
            Dibujar_tablero(); //FUNCION DE DIBUJAR EL TABLERO
            printf("desea poner una O? si o no\t");
            scanf("%s",&respuesta1);
            if (strcmp(respuesta1,"si")==0)
            {
                system("cls");
                Dibujar_tablero();//FUNCION DE DIBUJAR EL TABLERO
                printf("ingrese un numero del 1 al 9\n¿donde quiere pon er la O ? = ");
                scanf("%d",&respuesta);
                if (lugar_ocupado[respuesta-1]==0 && respuesta > 0 && respuesta < 10)
                {
                    strcpy(tablero[respuesta-1],"O");//en casillero que pone el usuario pone una O
                    lugar_ocupado[respuesta-1]=1;//se va a ocupar el lugar donde el usuario quiera
                }
            }
            if(strcmp(respuesta1,"no")==0)
            {
                break;
            }
        }
        DefensaIA(); //Sirve para que la maquina sepa en donde poner la ficha evitando que el jugador gane
        AtaqueIA(); //Sirve para ver si hay dos fichas iguales para poder poner la tercera y ganar

    system("cls");
    Dibujar_tablero();
}
// FUNCION DE LLENAR VECTORES EN VACIO
void llenadoVector()
{
    int x=0;
    for(x=0;x<9;x++)
    {
        strcpy(tablero[x]," ");
    }
}
//FUNCION DE DIBUJAR EL TABLERO
void Dibujar_tablero()
{
    printf(" %s | %s | %s \n---+---+---\n %s | %s | %s\n---+---+---\n %s | %s | %s\n",tablero[0],tablero[1],tablero[2],tablero[3],tablero[4],tablero[5],tablero[6],tablero[7],tablero[8]);
}
//FUNCION IA
int AtaqueIA()
{
    //FILA 1 ----------------------------------------------------------------
        if(strcmp(tablero[0],"O")==0 && strcmp(tablero[1],"O")==0)
                {
                    if(strcmp(tablero[2]," ")==0)
                    {
                        strcpy(tablero[2],"O");
                        movimiento=1;
                        return 0;
                    }
                }

                if(strcmp(tablero[0],"O")==0 && strcmp(tablero[2],"O")==0)
                {
                    if(strcmp(tablero[1]," ")==0)
                    {
                        strcpy(tablero[1],"O");
                        movimiento=1;
                        return 0;
                    }
                }
                if(strcmp(tablero[1],"O")==0 && strcmp(tablero[2],"O")==0)
                {
                    if(strcmp(tablero[0]," ")==0)
                    {
                        strcpy(tablero[0],"O");
                        movimiento=1;
                        return 0;
                    }
                }
    //FILA 2 ---------------------------------------------------------------
                if(strcmp(tablero[3],"O")==0 && strcmp(tablero[4],"O")==0)
                {
                    if(strcmp(tablero[5]," ")==0)
                    {
                        strcpy(tablero[5],"O");
                        movimiento=1;
                        return 0;
                    }
                }
                if(strcmp(tablero[3],"O")==0 && strcmp(tablero[5],"O")==0)
                {
                    if(strcmp(tablero[4]," ")==0)
                    {
                        strcpy(tablero[4],"O");
                        movimiento=1;
                        return 0;
                    }
                }
                if(strcmp(tablero[4],"O")==0 && strcmp(tablero[5],"O")==0)
                {
                    if(strcmp(tablero[3]," ")==0)
                    {
                        strcpy(tablero[3],"O");
                        movimiento=1;
                        return 0;
                    }
                }
     //FILA 3 -------------------------------------------------------------
                if(strcmp(tablero[6],"O")==0 && strcmp(tablero[7],"O")==0)
                {
                    if(strcmp(tablero[8]," ")==0)
                    {
                        strcpy(tablero[8],"O");
                        movimiento=1;
                        return 0;
                    }
                }
                if(strcmp(tablero[6],"O")==0 && strcmp(tablero[8],"O")==0)
                {
                    if(strcmp(tablero[7]," ")==0)
                    {
                        strcpy(tablero[7],"O");
                        movimiento=1;
                        return 0;
                    }
                }
                if(strcmp(tablero[8],"O")==0 && strcmp(tablero[7],"O")==0)
                {
                    if(strcmp(tablero[6]," ")==0)
                    {
                        strcpy(tablero[6],"O");
                        movimiento=1;
                        return 0;
                    }
                }
  //COLUMNA 1 ---------------------------------------------------------------
                if(strcmp(tablero[0],"O")==0 && strcmp(tablero[3],"O")==0)
                {
                    if(strcmp(tablero[6]," ")==0)
                    {
                        strcpy(tablero[6],"O");
                        movimiento=1;
                        return 0;
                    }
                }
                if(strcmp(tablero[0],"O")==0 && strcmp(tablero[6],"O")==0)
                {
                    if(strcmp(tablero[3]," ")==0)
                    {
                        strcpy(tablero[3],"O");
                        movimiento=1;
                        return 0;
                    }
                }
                if(strcmp(tablero[6],"O")==0 && strcmp(tablero[3],"O")==0)
                {
                    if(strcmp(tablero[0]," ")==0)
                    {
                        strcpy(tablero[0],"O");
                        movimiento=1;
                        return 0;
                    }
                }
    //COLUMNA 2 -------------------------------------------------------------
                if(strcmp(tablero[1],"O")==0 && strcmp(tablero[4],"O")==0)
                {
                    if(strcmp(tablero[7]," ")==0)
                    {
                        strcpy(tablero[7],"O");
                        movimiento=1;
                        return 0;
                    }
                }
                if(strcmp(tablero[1],"O")==0 && strcmp(tablero[7],"O")==0)
                {
                    if(strcmp(tablero[4]," ")==0)
                    {
                        strcpy(tablero[4],"O");
                        movimiento=1;
                        return 0;
                    }
                }
                if(strcmp(tablero[4],"O")==0 && strcmp(tablero[7],"O")==0)
                {
                    if(strcmp(tablero[1]," ")==0)
                    {
                        strcpy(tablero[1],"O");
                        movimiento=1;
                        return 0;
                    }
                }
    //COLUMNA 3 ---------------------------------------------------------------
                if(strcmp(tablero[2],"O")==0 && strcmp(tablero[5],"O")==0)
                {
                    if(strcmp(tablero[8]," ")==0)
                    {
                        strcpy(tablero[8],"O");
                        movimiento=1;
                        return 0;
                    }
                }
                if(strcmp(tablero[2],"O")==0 && strcmp(tablero[8],"O")==0)
                {
                    if(strcmp(tablero[5]," ")==0)
                    {
                        strcpy(tablero[5],"O");
                        movimiento=1;
                        return 0;
                    }
                }
                if(strcmp(tablero[8],"O")==0 && strcmp(tablero[5],"O")==0)
                {
                    if(strcmp(tablero[2]," ")==0)
                    {
                        strcpy(tablero[2],"O");
                        movimiento=1;
                        return 0;
                    }
                }
    //DIAGONAL 1 ----------------------------------------------------
     if(strcmp(tablero[0],"O")==0 && strcmp(tablero[4],"O")==0)
            {
                if(strcmp(tablero[8]," ")==0)
                {
                    strcpy(tablero[8],"O");
                    movimiento=1;
                    return 0;
                }
            }

            if(strcmp(tablero[4],"O")==0 && strcmp(tablero[8],"O")==0)
            {
                if(strcmp(tablero[0]," ")==0)
                {
                    strcpy(tablero[0],"O");
                    movimiento=1;
                    return 0;
                }
            }
            if(strcmp(tablero[4],"O")==0 && strcmp(tablero[8],"O")==0)
            {
                if(strcmp(tablero[0]," ")==0)
                {
                    strcpy(tablero[0],"O");
                    movimiento=1;
                    return 0;
                }
            }
    //DIAGONAL 2------------------------------------------------------------
            if(strcmp(tablero[4],"O")==0 && strcmp(tablero[2],"O")==0)
            {
                if(strcmp(tablero[6]," ")==0)
                {
                    strcpy(tablero[6],"O");
                    movimiento=1;
                    return 0;
                }
            }
            if(strcmp(tablero[2],"O")==0 && strcmp(tablero[6],"O")==0)
            {
                if(strcmp(tablero[4]," ")==0)
                {
                    strcpy(tablero[4],"O");
                    movimiento=1;
                    return 0;
                }
            }
            if(strcmp(tablero[6],"O")==0 && strcmp(tablero[4],"O")==0)
            {
                if(strcmp(tablero[2]," ")==0)
                {
                    strcpy(tablero[2],"O");
                    movimiento=1;
                    return 0;
                }
            }

}
int DefensaIA()
{
    //FILA 1 ----------------------------------------------------------------
                if(strcmp(tablero[0],"X")==0 && strcmp(tablero[1],"X")==0)
                {
                    if(strcmp(tablero[2]," ")==0)
                    {
                        strcpy(tablero[2],"O");
                        movimiento=1;
                        return 0;
                    }
                }
                if(strcmp(tablero[0],"X")==0 && strcmp(tablero[2],"X")==0)
                {
                    if(strcmp(tablero[1]," ")==0)
                    {
                        strcpy(tablero[1],"O");
                        movimiento=1;
                        return 0;
                    }
                }
                if(strcmp(tablero[1],"X")==0 && strcmp(tablero[2],"X")==0)
                {
                    if(strcmp(tablero[0]," ")==0)
                    {
                        strcpy(tablero[0],"O");
                        movimiento=1;
                        return 0;
                    }
                }
    //FILA 2 ---------------------------------------------------------------
                if(strcmp(tablero[3],"X")==0 && strcmp(tablero[4],"X")==0)
                {
                    if(strcmp(tablero[5]," ")==0)
                    {
                        strcpy(tablero[5],"O");
                        movimiento=1;
                        return 0;
                    }
                }
                if(strcmp(tablero[3],"X")==0 && strcmp(tablero[5],"X")==0)
                {
                    if(strcmp(tablero[4]," ")==0)
                    {
                        strcpy(tablero[4],"O");
                        movimiento=1;
                        return 0;
                    }
                }
                if(strcmp(tablero[4],"X")==0 && strcmp(tablero[5],"X")==0)
                {
                    if(strcmp(tablero[3]," ")==0)
                    {
                        strcpy(tablero[3],"O");
                        movimiento=1;
                        return 0;
                    }
                }
     //FILA 3 -------------------------------------------------------------
                if(strcmp(tablero[6],"X")==0 && strcmp(tablero[7],"X")==0)
                {
                    if(strcmp(tablero[8]," ")==0)
                    {
                        strcpy(tablero[8],"O");
                        movimiento=1;
                        return 0;
                    }
                }
                if(strcmp(tablero[6],"X")==0 && strcmp(tablero[8],"X")==0)
                {
                    if(strcmp(tablero[7]," ")==0)
                    {
                        strcpy(tablero[7],"O");
                        movimiento=1;
                        return 0;
                    }
                }
                if(strcmp(tablero[8],"X")==0 && strcmp(tablero[7],"X")==0)
                {
                    if(strcmp(tablero[6]," ")==0)
                    {
                        strcpy(tablero[6],"O");
                        movimiento=1;
                        return 0;
                    }
                }
  //COLUMNA 1 ---------------------------------------------------------------
                if(strcmp(tablero[0],"X")==0 && strcmp(tablero[3],"X")==0)
                {
                    if(strcmp(tablero[6]," ")==0)
                    {
                        strcpy(tablero[6],"O");
                        movimiento=1;
                        return 0;
                    }
                }
                if(strcmp(tablero[0],"X")==0 && strcmp(tablero[6],"X")==0)
                {
                    if(strcmp(tablero[3]," ")==0)
                    {
                        strcpy(tablero[3],"O");
                        movimiento=1;
                        return 0;
                    }
                }
                if(strcmp(tablero[6],"X")==0 && strcmp(tablero[3],"X")==0)
                {
                    if(strcmp(tablero[0]," ")==0)
                    {
                        strcpy(tablero[0],"O");
                        movimiento=1;
                        return 0;
                    }
                }
    //COLUMNA 2 -------------------------------------------------------------
                if(strcmp(tablero[1],"X")==0 && strcmp(tablero[4],"X")==0)
                {
                    if(strcmp(tablero[7]," ")==0)
                    {
                        strcpy(tablero[7],"O");
                        movimiento=1;
                        return 0;
                    }
                }
                if(strcmp(tablero[1],"X")==0 && strcmp(tablero[7],"X")==0)
                {
                    if(strcmp(tablero[4]," ")==0)
                    {
                        strcpy(tablero[4],"O");
                        movimiento=1;
                        return 0;
                    }
                }
                if(strcmp(tablero[4],"X")==0 && strcmp(tablero[7],"X")==0)
                {
                    if(strcmp(tablero[1]," ")==0)
                    {
                        strcpy(tablero[1],"O");
                        movimiento=1;
                        return 0;
                    }
                }
    //COLUMNA 3 ---------------------------------------------------------------
                if(strcmp(tablero[2],"X")==0 && strcmp(tablero[5],"X")==0)
                {
                    if(strcmp(tablero[8]," ")==0)
                    {
                        strcpy(tablero[8],"O");
                        movimiento=1;
                        return 0;
                    }
                }
                if(strcmp(tablero[2],"X")==0 && strcmp(tablero[8],"X")==0)
                {
                    if(strcmp(tablero[5]," ")==0)
                    {
                        strcpy(tablero[5],"O");
                        movimiento=1;
                        return 0;
                    }
                }
                if(strcmp(tablero[8],"X")==0 && strcmp(tablero[5],"X")==0)
                {
                    if(strcmp(tablero[2]," ")==0)
                    {
                        strcpy(tablero[2],"O");
                        movimiento=1;
                        return 0;
                    }
                }
    //DIAGONAL 1 ----------------------------------------------------
     if(strcmp(tablero[0],"X")==0 && strcmp(tablero[4],"X")==0)
            {
                if(strcmp(tablero[8]," ")==0)
                {
                    strcpy(tablero[8],"O");
                    movimiento=1;
                    return 0;
                }
            }

            if(strcmp(tablero[4],"X")==0 && strcmp(tablero[8],"X")==0)
            {
                if(strcmp(tablero[0]," ")==0)
                {
                    strcpy(tablero[0],"O");
                    movimiento=1;
                    return 0;
                }
            }
            if(strcmp(tablero[4],"X")==0 && strcmp(tablero[8],"X")==0)
            {
                if(strcmp(tablero[0]," ")==0)
                {
                    strcpy(tablero[0],"O");
                    movimiento=1;
                    return 0;
                }
            }
    //DIAGONAL 2------------------------------------------------------------
            if(strcmp(tablero[4],"X")==0 && strcmp(tablero[2],"X")==0)
            {
                if(strcmp(tablero[6]," ")==0)
                {
                    strcpy(tablero[6],"O");
                    movimiento=1;
                    return 0;
                }
            }
            if(strcmp(tablero[2],"X")==0 && strcmp(tablero[6],"X")==0)
            {
                if(strcmp(tablero[4]," ")==0)
                {
                    strcpy(tablero[4],"O");
                    movimiento=1;
                    return 0;
                }
            }
            if(strcmp(tablero[6],"X")==0 && strcmp(tablero[4],"X")==0)
            {
                if(strcmp(tablero[2]," ")==0)
                {
                    strcpy(tablero[2],"O");
                    movimiento=1;
                    return 0;
                }
            }


}


