#include <stdio.h>
int main(){
    const float pi=3.14;
    float r,area,circumference;
    printf("Enter value of r:");
    scanf("%f",&r);
    area=pi*r*r;          //area of circle=pi*r^2
    circumference=2*pi*r;
    printf("Area of radius %.4f is %.4f",r,area);
    printf("Circumference of radius %.4f is %.4f",r,circumference);
}