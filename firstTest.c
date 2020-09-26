#include<stdio.h>

int main(int argc, char *argv[]){
    int numberOfArguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];
    char *argument3 = argv[2];

    printf("the number of arguments is %d\n",numberOfArguments);
    printf("Program argument is %s\n", argument1);
    printf("First argument is %s\n", argument2);
    printf("hello\n");
    printf("Second argument is %s\n", argument3);

    return 0;
}