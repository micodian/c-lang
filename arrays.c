#include<stdio.h>

int main(){
    
    int size=6;
    int myScore[size];
    for(int i =0;i<size;i++){
        scanf("%d",&myScore[i]);

    }
    for(int i = 0; i<size; i++){
        printf("The element in %d is %d\n", i, myScore[i]);
    }
    

    return 0;
}