#include <stdio.h>
#define PI 3.1416   

int main() {
    float radius;
    
    
    scanf("%f", &radius);
    
    
    float area = PI * radius * radius;
    float circumference = 2 * PI * radius;
    
    
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);
    
    return 0;
}