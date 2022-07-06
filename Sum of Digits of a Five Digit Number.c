#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, sum, i;
    scanf("%d", &n);
    for(i=0; i<5; i++){
        sum += ((n%(int)pow(10, i+1)))/pow(10, i);
    }
    printf("%d",sum);  
    return 0;
}
