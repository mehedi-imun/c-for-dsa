#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) { 
        
        int m1, m2, d;

        
        scanf("%d %d %d", &m1, &m2, &d);
        
        int totalFarmers = m1 + m2;
        int new = (m1 * d) / totalFarmers;
        
        int result = d - new;
        printf("%d\n", result);
    }
    
    return 0;
}
