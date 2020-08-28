#include<stdio.h>



int main(){
    //create pointer to hold address in the FILE type
FILE *Fpointer;

Fpointer=fopen("testFile.txt","a");

//check if file is opened
if(Fpointer==NULL){
printf("Cannot create the file");
}
else{
printf("file created successfully");
//close file
fclose(Fpointer);
}

    return 0;
}