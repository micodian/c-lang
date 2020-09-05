#include<stdio.h>

/*
int main(){
    int age;
    printf("Enter age\n");
    scanf("%d",&age);
    printf("age is %d",age);
    return 0;
}
*/

int main(){
    int pid;
    pid =fork();
    printf("%d\n",pid);
    return 0;
}