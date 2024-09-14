#include <stdio.h>

int main() { 
    int n;    
    
    for (int i = 0; i < 5; i++) {
        
        for (int j = 0; j < 5 - i - 1; j++) {
            printf("  ");
        }

        n = 10 - i;

        for (int j = n; j <= 10; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0; 
}