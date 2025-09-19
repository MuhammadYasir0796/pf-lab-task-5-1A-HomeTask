#include <stdio.h>
#include <math.h>

float PI=3.1415;
int main(){
    float radius=0.0;
    printf("Enter the radius: ");
    scanf("%f",&radius);
    double area=PI * (radius*radius);
    double circumference=2*PI*radius;
    double squareRootOfRadius=sqrt(radius);
    printf("Radius: %.2lf\nArea: %.2lf\nCircumference: %.2lf\nSquare root of radius: %.2lf\n",radius,area,circumference,squareRootOfRadius);
    return 0;
}