#include <stdio.h>
int main() {
    int intValue;
    float floatValue;
    char charValue;
// your code

printf("Enter an integer value: ");
scanf("%d",&intValue);

printf("Enter a float value: ");
scanf("%f",&floatValue);


getchar();

printf("Enter a character value: ");
scanf("%c",&charValue);

printf("Auto-converted float from int: %f\n",(float)intValue);

printf("Auto-converted int from char: %d\n", charValue);


printf("Manually converted int from float: %d\n",(int)floatValue);

printf("Manually converted char from int: %c\n",intValue);

return 0;

}
