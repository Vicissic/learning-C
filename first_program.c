#include <stdio.h>
#include <math.h>


int main(void){
    int num1, num2;
    char operation;
    printf("please input a number\n");
    scanf("%d", &num1);
    printf("please input an operation\n");
    scanf("%s", &operation);
    printf("please input another number\n");
    scanf("%d", &num2);
    printf("%d\n", num1*5);
}
