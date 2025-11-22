#include <stdio.h>

int area(int length, int width){
    int area = (length*width);
    return area;
}

int main() {
    
    int l, b;
    
    scanf("%d %d",&l, &b);
    printf("The area is: %d units", area(l, b));
    return 0;
}