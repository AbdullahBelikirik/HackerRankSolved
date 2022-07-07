#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s;
    int* nums = (int*) calloc(10, sizeof(int));
    
    while(scanf("%c",&s)==1){
        int x = s - '0';
        if (x >= 0 && x <= 9) *(nums+x)+=1;
    }
    for (int i = 0; i < 10; i++) printf("%d ", *(nums+i));
    
    return 0;
}
