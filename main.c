#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Analizador.h"
//Variables globales
char instruccion[300];
char instruccionLinea[300];
char instruccionTemp[300];
//Se declaran metodos
void insercioninstruccion();

int main()
{

    printf("Sistema de archivos ext2/ext3\n");
    do{
        printf("Exit para salir Sistema\n");
         printf(">> ");
    scanf(" %[^\n]s", instruccion);

    if(instruccion[0]=='#'){
        printf("Se ingnoro la instruccion porque es comentario\n");
    }else if(instruccion[strlen(instruccion)-1]=='\\'){
        scanf(" %[^\n]s", instruccionLinea);
        strncpy(instruccionTemp, instruccion, strlen(instruccion)-1);
        strcat(instruccionTemp, instruccionLinea);
        strcpy(instruccion, instruccionTemp);
        char *primeraIns = strtok(instruccionTemp, " ");
        analizarComando(primeraIns,instruccion);
    }else{
        strcpy(instruccionTemp, instruccion);
        char *primeraIns = strtok(instruccionTemp, " ");
        analizarComando(primeraIns,instruccion);
    }
    }while(strcasecmp(instruccion,"exit")!=0);
    return 0;
}
