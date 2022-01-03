#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int IsElf(char *str) {
    // char *tmp = "7f454c46" ;
 
    // printf("[Debug] Valeur de str : |%s| VERSUS |%x| \n",str,tmp[0]);
    printf("\n%x\n", (int) *str);
   return strcmp(str, "7f454c46" );
}

void lectureHead(FILE *f){
    
    int compteur = 0;
    char c ;
    char type[9];
    if(f!=NULL){
       c =  fgetc(f);
       type[compteur] = c;
       compteur++;
       while(compteur <= 7) {
           
           printf("%x",c);
           c =  fgetc(f);
           type[compteur] = c;
           compteur++;
    }
       printf("\n");
    type[8] = '\0';
    if(IsElf(type) != 0) {
        printf("[Erreur] Fichier non ELF \n");
        exit(1);
        }
          
    //    while(c != EOF) {
           
    //        //printf("%x",c);
    //        c =  fgetc(f);

    //    }
    }
    fclose(f);
}



void main(int argc , char **argv)
{
    FILE *f;
    f = fopen(argv[1],"r");
    lectureHead(f);
}
