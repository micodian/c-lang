#include <stdio.h>

int main(){
    int width = 0;
    int height =0;
    int perimeter;
    int area;
    
    printf("what is the width and height? \n");
    scanf("%d %d",width,height);
    
    perimeter = 2 * (width + height);
    area = width * height;
    
    printf("the perimeter is %d and the area is %d\n", perimeter,area);

    return 0;
}