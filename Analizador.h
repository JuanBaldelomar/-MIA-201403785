#include <string.h>
#include <stdio.h>
#include <stdlib.h>


char size[60];
int tamanio;
char unit[1]=" ";
char path[300];
char name[150];
char type[1]=" ";
char fit[2]=" ";
char deletee[10]=" ";
char add[60];
char id[20];


void analizarComando(char *primeraInstruccion,char *otrasInstrucciones);


void analizarComando(char *primeraInstruccion,char *otrasInstrucciones){
    if(strcasecmp(primeraInstruccion,"pru")==0){
        int s;
        s =20;
        char pru[40]="preba";
        printf("%s %i",pru,s);
    }else if(strcasecmp(primeraInstruccion,"mkdisk")==0){
        char *splitTemp=strtok(otrasInstrucciones," ");
        while((splitTemp = strtok(NULL,"::"))!=NULL){
            if(strcasecmp(splitTemp,"-size")==0){
                splitTemp = strtok(NULL, " ");
                if (splitTemp[0] == ':'){
                memmove(splitTemp, splitTemp+1, strlen(splitTemp));
                }
                strcpy(size, splitTemp);
                tamanio = atoi(size);
            }else if(strcasecmp(splitTemp,"+unit")==0){
                      splitTemp = strtok(NULL, " ");
                if (splitTemp[0] == ':'){
                memmove(splitTemp, splitTemp+1, strlen(splitTemp));
                }
                strcpy(unit, splitTemp);
            }else if(strcasecmp(splitTemp,"-path")==0){
                splitTemp = strtok(NULL, " ");
                if (splitTemp[0] == ':'){
                memmove(splitTemp, splitTemp+1, strlen(splitTemp));
                }
                strcpy(path, splitTemp);
            }else if(strcasecmp(splitTemp,"-name")==0){
                          splitTemp = strtok(NULL, " ");
                if (splitTemp[0] == ':'){
                memmove(splitTemp, splitTemp+1, strlen(splitTemp));
                }
                strcpy(unit, splitTemp);
            }
        }
    }else if(strcasecmp(primeraInstruccion,"rmdisk")==0){
        char *splitTemp=strtok(otrasInstrucciones," ");
        while((splitTemp = strtok(NULL,"::"))!=NULL){
            if(strcasecmp(splitTemp,"-path")==0){
                splitTemp = strtok(NULL, " ");
                if (splitTemp[0] == ':'){
                memmove(splitTemp, splitTemp+1, strlen(splitTemp));
                }
                strcpy(path, splitTemp);
            }
        }
    }else if(strcasecmp(primeraInstruccion,"fdisk")==0){
         char *splitTemp=strtok(otrasInstrucciones," ");

        while((splitTemp = strtok(NULL,"::"))!=NULL){
            if(strcasecmp(splitTemp,"-size")==0){
                splitTemp = strtok(NULL, " ");
                if (splitTemp[0] == ':'){
                memmove(splitTemp, splitTemp+1, strlen(splitTemp));
                }
                strcpy(size, splitTemp);

            }else if(strcasecmp(splitTemp,"+unit")==0){
                      splitTemp = strtok(NULL, " ");
                if (splitTemp[0] == ':'){
                memmove(splitTemp, splitTemp+1, strlen(splitTemp));
                }
                strcpy(unit, splitTemp);

            }else if(strcasecmp(splitTemp,"-path")==0){
                splitTemp = strtok(NULL, " ");
                if (splitTemp[0] == ':'){
                memmove(splitTemp, splitTemp+1, strlen(splitTemp));
                }
                strcpy(path, splitTemp);

            }else if(strcasecmp(splitTemp,"+type")==0){
                          splitTemp = strtok(NULL, " ");
                if (splitTemp[0] == ':'){
                memmove(splitTemp, splitTemp+1, strlen(splitTemp));
                }
                strcpy(type, splitTemp);

            }else if(strcasecmp(splitTemp,"+fit")==0){
                splitTemp = strtok(NULL, " ");
                if (splitTemp[0] == ':'){
                memmove(splitTemp, splitTemp+1, strlen(splitTemp));
                }
                strcpy(fit, splitTemp);

            }else if(strcasecmp(splitTemp,"+delete")==0){
                splitTemp = strtok(NULL, " ");
                if (splitTemp[0] == ':'){
                memmove(splitTemp, splitTemp+1, strlen(splitTemp));
                }
                strcpy(deletee, splitTemp);

            }else if(strcasecmp(splitTemp,"-name")==0){
                splitTemp = strtok(NULL, " ");
                if (splitTemp[0] == ':'){
                memmove(splitTemp, splitTemp+1, strlen(splitTemp));
                }
                strcpy(name, splitTemp);

            }else if(strcasecmp(splitTemp,"+add")==0){
                splitTemp = strtok(NULL, " ");
                if (splitTemp[0] == ':'){
                memmove(splitTemp, splitTemp+1, strlen(splitTemp));
                }
                strcpy(add, splitTemp);

            }
        }
    }else if(strcasecmp(primeraInstruccion,"mount")==0){
         char *splitTemp=strtok(otrasInstrucciones," ");
        while((splitTemp = strtok(NULL,"::"))!=NULL){
            if(strcasecmp(splitTemp,"-path")==0){
                splitTemp = strtok(NULL, " ");
                if (splitTemp[0] == ':'){
                memmove(splitTemp, splitTemp+1, strlen(splitTemp));
                }
                strcpy(path, splitTemp);
            }else if(strcasecmp(splitTemp,"-name")==0){
                splitTemp = strtok(NULL, " ");
                if (splitTemp[0] == ':'){
                memmove(splitTemp, splitTemp+1, strlen(splitTemp));
                }
                strcpy(name, splitTemp);
            }
        }
    }else if(strcasecmp(primeraInstruccion,"umount")==0){
        char idsplitTemp[]="-ide";
        int conta=1;
        char *splitTemp=strtok(otrasInstrucciones," ");
        while((splitTemp = strtok(NULL,"::"))!=NULL){
            idsplitTemp[3] = conta + '0';
            if(strcasecmp(splitTemp,idsplitTemp)==0){
                splitTemp = strtok(NULL, " ");
                if (splitTemp[0] == ':'){
                memmove(splitTemp, splitTemp+1, strlen(splitTemp));
                }
                strcpy(id, splitTemp);
            }
            conta++;
        }
    }else if(strcasecmp(primeraInstruccion ,"rep")==0){
        char *splitTemp=strtok(otrasInstrucciones," ");
        while((splitTemp = strtok(NULL,"::"))!=NULL){
            if(strcasecmp(splitTemp,"-name")==0){
                   splitTemp = strtok(NULL, " ");
                if (splitTemp[0] == ':'){
                memmove(splitTemp, splitTemp+1, strlen(splitTemp));
                }
                strcpy(name, splitTemp);
            }else if(strcasecmp(splitTemp,"-path")==0){
                  splitTemp = strtok(NULL, " ");
                if (splitTemp[0] == ':'){
                memmove(splitTemp, splitTemp+1, strlen(splitTemp));
                }
                strcpy(path, splitTemp);
            }else if(strcasecmp(splitTemp,"-id")==0){
                   splitTemp = strtok(NULL, " ");
                if (splitTemp[0] == ':'){
                memmove(splitTemp, splitTemp+1, strlen(splitTemp));
                }
                strcpy(id, splitTemp);
            }

        }
    }
}
