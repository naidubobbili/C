#include <stdio.h>
int main() {
    float x;
    // your code
    printf("Enter x value: ");
    scanf("%f",&x);
    
    x=1-(x/2)+((x*x)/4)-((x*x*x)/6);
    
    printf("%.2f",x);
    
    return 0;

}
