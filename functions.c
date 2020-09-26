#include <stdio.h>
#include <stdlib.h>

void printMessage(void);

int addNumbers(int x, int y);
//main function 
int main (int argc, char *argv[]){

    printMessage();
    int x =atoi(argv[1]);
    int y =atoi(argv[2]);

    int result = addNumbers(atoi(argv[1]),atoi(argv[2]));
    int test = addNumbers(x,y);

    printf("%d\n",result);
    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",test);


    //printf("The addition of the two numbers is %d\n", result);
    return 0;
}
//print statement 
void printMessage(void){

    printf("sup bruh.....\n");
    return;
}
//adding number function 
int addNumbers(int x, int y){

    int result;
    result = x + y;
    return result;
}