#include<stdio.h>
void main() {
    int i,j;
    for(i=1;i<=5;i++){
        for(int k=i;k<5;k++){
            printf("\t");
        }
        for(j=1;j<=i;j++){
            printf("*\t");
        }
        printf("\n");
        
        }
}
