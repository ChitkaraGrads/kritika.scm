#include<stdio.h>

float area(float radius){
    return 3.14 * radius * radius;
}
float circumference(float radius){
    return 2 * 3.14 * radius;
}
int main() {
    float radius;
    printf("Enter the radius of the circle\n");
    scanf("%f", &radius);
    printf("Area of the circle is %f\n", area(radius));
    printf("Circumference of the circle is %f\n", circumference(radius));
    return 0;
}
