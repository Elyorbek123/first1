#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

    char data[100];

    FILE *myfile = fopen("text.txt", "r");

    FILE *toqindex = fopen("Toqindex.txt", "a");

    FILE *juftindex = fopen("Juftindex.txt", "a");
    
    while(fgets(data, 100, myfile)) {

        for (int i= 0; i< strlen(data); i=i+2) {

            fputc(data[i], juftindex);

            
        }

         for (int i= 1; i< strlen(data); i=i+2) {

            fputc(data[i], toqindex);

            
        }
    }
   
   fclose(myfile);
   fclose(toqindex);
   fclose(juftindex);




    return 0;
}