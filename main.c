#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


char tablero[9][2];
int lugar_ocupado[9],movimiento;
int main()
{
    char res[5];
    int y,respuesta;
    llenado();

        while(1)
        {
            system("cls");
            tablero_dibujado(); //FUNCION DE DIBUJAR EL TABLERO
            printf("desea poner una X?\t");
            scanf("%s",&res);
            if (strcmp(res,"si")==0)
            {
                printf("ingrese un numero del 1 al 9\n¿ donde quiere poner la X ? = ");
                scanf("%d",&respuesta);
                if (lugar_ocupado[respuesta-1]==0 && respuesta > 0 && respuesta < 10)
                {
                    strcpy(tablero[respuesta-1],"X");//en casillero que pone el usuario pone una O
                    lugar_ocupado[respuesta-1]=1;//se va a ocupar el lugar donde el usuario quiera
                }

            }
            if(strcmp(res,"no")==0)
            {
                break;
            }
        }
        while(1)
        {
            system("cls");
            tablero_dibujado(); //FUNCION DE DIBUJAR EL TABLERO
            printf("desea poner una O?\t");
            scanf("%s",&res);
            if (strcmp(res,"si")==0)
            {
                system("cls");
                tablero_dibujado();//FUNCION DE DIBUJAR EL TABLERO
                printf("ingrese un numero del 1 al 9\n¿donde quiere pon er la O ? = ");
                scanf("%d",&respuesta);
                if (lugar_ocupado[respuesta-1]==0 && respuesta > 0 && respuesta < 10)
                {
                    strcpy(tablero[respuesta-1],"O");//en casillero que pone el usuario pone una O
                    lugar_ocupado[respuesta-1]=1;//se va a ocupar el lugar donde el usuario quera
                }
            }
            if(strcmp(res,"no")==0)
            {
                break;
            }
        }
        Atacar();

    system("cls");
    tablero_dibujado();
}
// FUNCION DE LLENAR VECTORES EN VACIO
void llenado()
{
    int x=0;
    for(x=0;x<9;x++)
    {
        strcpy(tablero[x]," ");
    }
}
//FUNCION DE DIBUJAR EL TABLERO
void tablero_dibujado()
{
    printf(" %s | %s | %s \n---+---+---\n %s | %s | %s\n---+---+---\n %s | %s | %s\n",tablero[0],tablero[1],tablero[2],tablero[3],tablero[4],tablero[5],tablero[6],tablero[7],tablero[8]);
}
//FUNCION IA
int Atacar()
{
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
                if(strcmp(tablero[0],"O")==0 && strcmp(tablero[3],"O")==0)
                {
                    if(strcmp(tablero[6]," ")==0)
                    {
                        strcpy(tablero[6],"O");
                        movimiento=1;
                        return 0;
                    }
                }
                if(strcmp(tablero[1],"O")==0 && strcmp(tablero[4],"O")==0)
                {
                    if(strcmp(tablero[7]," ")==0)
                    {
                        strcpy(tablero[7],"O");
                        movimiento=1;
                        return 0;
                    }
                }
                if(strcmp(tablero[2],"O")==0 && strcmp(tablero[5],"O")==0)
                {
                    if(strcmp(tablero[8]," ")==0)
                    {
                        strcpy(tablero[8],"O");
                        movimiento=1;
                        return 0;
                    }
                }
    //diagonal  Digonal de la derecha= 0-0 | Medio= 1-1  | abajo izquierda= 2-2
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
            if(strcmp(tablero[0],"O")==0 && strcmp(tablero[8],"O")==0)
            {
                if(strcmp(tablero[4]," ")==0)
                {
                    strcpy(tablero[4],"O");
                    movimiento=1;
                    return 0;
                }
            }

}
