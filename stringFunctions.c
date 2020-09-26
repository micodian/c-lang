#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//strlen
//strcopy
//strcat
//strcmp


int main(int argc, char *argv[]){

char myString[]="Johnson Hathaway Alive!";
char string2[50]; 
strcpy(string2,myString);

int stringLength = strlen(myString);

//printf("The length of the string is %d\n",stringLength);
printf("New string is %s",string2);

    return 0;
}