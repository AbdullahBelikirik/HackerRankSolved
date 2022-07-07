#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int i, j, maxAnd=0, maxOr=0, maxXor=0;
    for(i=1; i<n; i++){
        for(j=i+1; j<n+1; j++){
            if(((i&j)<k) && ((i&j)>maxAnd)){
                maxAnd = i&j;
            }
            if(((i|j)<k) && ((i|j)>maxOr)){
                maxOr = i|j;
            }
            if(((i^j)<k) && ((i^j)>maxXor)){
                maxXor = i^j;
            }
        }
    }
    printf("%d\n%d\n%d",maxAnd,maxOr,maxXor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
