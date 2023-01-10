#include <stdio.h>
#include <stdlib.h>
 
int main() {        
    int *pi1; 
    int *pi2;
 
    pi1 = (int *)malloc(sizeof(int) * 3); //할당
    printf("malloc : %d %d %d\n", pi1[0], pi1[1], pi1[2]);
    
    pi2 = (int *)calloc(3, sizeof(int)); //할당
    printf("calloc : %d %d %d\n", pi2[0], pi2[1], pi2[2]);
 
    free(pi1); //메모리 해제
    free(pi2); //메모리 해제
}

[]
B f
1
2
3


pa 4
{
    1. 4 랑 a 
    2. f 4 4 B swap
    3. f--;

}
3 

정렬 저희가 임의로
