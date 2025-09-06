#include <stdio.h>

int main(){
    float x , y;
    printf("Write the x cordinate : \n");
    scanf("%f",&x);
    printf("Write the y cordinate : \n");
    scanf("%f",&y);
    if (x == 0 || y==0){
        printf("The point (%.2f, %.2f) doesn't lie in any quadrant, it lies on the axis line.",x,y);
    }
    else if (x > 0) {
        if (y > 0){
            printf("The point (%.2f, %.2f) lies in quadrant I",x,y);
        }
        else {
            printf("The point (%.2f, %.2f) lies in quadrant IV",x,y);
        }
    }
    else {
        if (y > 0){
            printf("The point (%.2f, %.2f) lies in quadrant II",x,y);
        }
        else {
            printf("The point (%.2f, %.2f) lies in quadrant III",x,y);
        }

    }

    return  0;
}