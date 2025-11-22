#include <stdio.h>

    void split(int n){
        printf("%d %d %d", (n/100), (n/10%10), (n%10));
    }

int main() {

    int n;
    
    scanf("%d", &n);
    
    split(n);
    
    return 0;
}
