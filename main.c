#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <conio2.h>


int Iniciar_Tablero(char Tablero);
void Dibujar_tablero(char Tablero);
int PartidaTerminada(char Tablero);
int Victoria(char Tablero);
int verificador_de_espacioblanco(char Tablero[],char simbolo, int a, int b, int c);
int Empate(char Tablero);
int Contador_de_Vacio(char Tablero[]);
int Lugar_Vacio(char Tablero, int Posicion);
//int Turno_Jugador(char Tablero);
//int Turno_Maquina();
//int Ganar_Maquina();

int const posibilidad[][3]= {{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}};


int main()
{
     char Tablero[9];
    Iniciar_Tablero(Tablero);
    Dibujar_tablero(Tablero);
    while(Estado_Partido(Tablero)==0)
    {
        Turno_Jugador(Tablero);
        Dibujar_tablero(Tablero);
        Tablero[Turno_Maquina(Tablero)]== 'O';
        Dibujar_tablero(Tablero);
    }
    return 0;
}
void Iniciar_Tablero()
{
    int x=0;
    for(x=0;x<9;x++)
    {
        strcpy(tablero[x]," ");
    }
}
void Dibujar_tablero(char tablero[])
{
    printf(" %s | %s | %s \n---+---+---\n %s | %s | %s\n---+---+---\n %s | %s | %s\n",tablero[0],tablero[1],tablero[2],tablero[3],tablero[4],tablero[5],tablero[6],tablero[7],tablero[8]);
}
int Victoria(char Tablero[])
{
    for(int x=0;x<9;x++){
       if(Contador(Tablero, 'X', posibilidad[x][0], posibilidad[x][1], posibilidad[x][2])==3)
            return 0;
       if(Contador(Tablero, 'O', posibilidad[x][0], posibilidad[x][1], posibilidad[x][2])==3)
            return 0;
    }return 1;
}
int Contador_de_Victoria(char Tablero[],char simbolo, int a, int b, int c)
{
    int Suma=0;
    if(Tablero[a]==simbolo)Suma++;
    if(Tablero[b]==simbolo)Suma++;
    if(Tablero[c]==simbolo)Suma++;
    return Suma;
}
int Contador_de_Vacio(char Tablero[])
{
    int Suma;
    for(int x=0;x<9;x++)
        {
        if(Tablero[x]==" ")suma++;
        }
    return Suma;

    }
int Empate(char Tablero[])
{
     if(Contador_de_Vacio(Tablero)==0)
        return 1;
    else{
        return 0;
    }
}
int PartidaTerminada(char tablero[])
{
    return (Victoria(tablero) || Empate(tablero));
}
int Lugar_Vacio(char Tablero, Posicion)
{
    if(Tablero[Posicion]==' ')
        return 0;
    printf("Lugar no disponible");
    return 1;
}
