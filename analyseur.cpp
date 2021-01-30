/*
    Lagrida.com 2018 &copy;
    Pour voir le cours complet :
         http://lagrida.com/informatique/informatique_theorique/analyseur_lexicale.html
*/
#include<stdio.h>
#include<stdlib.h>

// Lire le fichier source
const char* fileName = "C:\\Users\\LAGRIDA\\Desktop\\analyseur\\myfile.lag";
FILE *fileSrc = fopen(fileName, "r");

#include "functions.c"

int main(){
    int k;
    token currentToken = getToken();
    do{
         k = (int) currentToken.name;
         printf("%s ", tokens[k]);
         currentToken = getToken(); 
    }while(currentToken.name != EOF_TOKEN);
    printf("\n\n");
    system("pause");
    return 0;
}
