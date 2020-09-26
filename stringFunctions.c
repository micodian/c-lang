#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//strlen
//strcopy
//strcat
//strcmp


int main(int argc, char *argv[]){

char myString[]=" Johnson Hathaway Alive!";
char string2[50]; 
char input[100];
strcpy(string2,myString);

int stringLength = strlen(myString);

//printf("The length of the string is %d\n",stringLength);
printf("New string is %s\n",string2);

printf("Enter the sentence you want to add\n");
scanf("%s",input);

printf("The new sentence is %s \n", strcat(input,myString));

printf("to compare C and A, we get %d\n",strcmp("C","A"));


    return 0;
}