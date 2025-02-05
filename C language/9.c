#include <stdio.h>
#include <math.h>

int main() {
    double H, L, depth;
    scanf("%lf %lf", &H, &L);
    
    depth = (L * L - H * H) / (2 * H);
    
    printf("%.13f\n", depth);
    
    return 0;
}
