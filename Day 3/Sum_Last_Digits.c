#include <stdio.h>

int sumLastDigits(int a, int b){
    int ld = ((a%10)+(b%10));
    return ld;
}
    
int main() {
    
    int num1, num2;
    
    scanf("%d %d", &num1, &num2);
    
    printf("The sum of last digits is: %d", sumLastDigits(num1,num2));
    
    return 0;
}