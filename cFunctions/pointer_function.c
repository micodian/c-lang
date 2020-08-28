#include<stdio.h>

//welcome display function and prototyping
void display();
int adding(int x, int y);
int substracting(int x, int y);
void pointer_values(int *, int *,int a,int b);

int main(){
    display();
    int sum;
    int difference;    
    
    sum = adding(15,9);
    difference= substracting(15,9);
    //function to display the pointer values
    pointer_values(&sum,&difference,sum,difference);
   
    

    return 0;
}


void display(){

    printf("This is a program to show how pointers work\n\n");
    printf("1st pointer\t2nd pointer\tVar1\tVar2\n");
}

void pointer_values(int*p,int*q,int a, int b){

printf("%d\t\t%d\t\t%d\t%d\n",*p,*q, a, b);


}
int adding(int x, int y){
    int temp = x + y;

    return temp;


}
int substracting(int x, int y){
    int temp = x - y;

    return temp;
}
