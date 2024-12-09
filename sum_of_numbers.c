#include <stdio.h>
void main() {
    int i,n,sum=0;
    printf("Enter the n value:");
    scanf("%d",&n);
    for(i=1;i<=n;++i){
        sum +=i;
    }
    printf("the sum of first %d numbers is:%d",n,sum);
}
