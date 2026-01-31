#include <stdio.h>
int main(){
    const float pi=3.14;
    float r,area;
    printf("Enter value of r");
    scanf("%f",&r);
    area=pi*r*r;          //area of circle=pi*r^2
    printf("Area of radius %f is %f",r,area);
}