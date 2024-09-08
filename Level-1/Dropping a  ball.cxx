#include <stdio.h>

float simpleSqrt(float number) {
    float guess = 1.0;
    float increment = 0.01;
    while (guess * guess < number) {
        guess += increment;
    }
    return guess;
}

int main() {
    int totalFloors;
    float floorHeight, gravity;

    // your code
    printf("Enter total floors: ");
    scanf("%d", &totalFloors);
    
    printf("Enter floor height: ");
    scanf("%f", &floorHeight);
    
    printf("Enter gravity: ");
    scanf("%f", &gravity);
    
    for (int i = totalFloors; i > 0; i--) {
        float height = i * floorHeight;   
        float time = simpleSqrt((2 * height) / gravity);  
        printf("Time to reach floor %d: %.2f seconds\n", i, time);
    }
    
    return 0;
}
