#include <stdio.h>

int main() {

    int a;
    long b;#include <stdio.h>

    int buildNumber(int a, int b, int c, int d){
        return (a*1000 + b*100 + c*10 + d*1)*5;
    }

int main() {
    
    int a, b, c, d;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    int res = buildNumber(a, b, c, d);
    
    printf("The number is: %d\n", res);
     
    return 0;
}

    char c;
    float d;
    double e;
    
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    
    printf("%d\n%ld\n%c\n%0.3f\n%0.9lf\n", a, b, c, d, e);
    
    return 0;
}
