#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int m,n,arr[10][10];
    scanf("%d %d",&m,&n);
    for(int i = 0; i < m;i++) {
        for(int j = 0; j < n;j++) {
               scanf("%d",&arr[i][j]); 
        }
    }
    for(int i = 0; i < m;i++) {
        for(int j = 0; j < n;j++) {
               printf("%d ",arr[i][j]); 
        }
        printf("\n");
    }
}
