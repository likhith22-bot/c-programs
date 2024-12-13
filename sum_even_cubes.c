#include<stdio.h>
#include<math.h>
void main() {
    int n,sum=0,i=1;
    printf("Enter the upper limit:");
    scanf("%d",&n);
    while(i<=n){
        if(i%2==0){
            sum=sum+pow(i,3);
        }
        i++;
    }
    printf("the sum is %d",sum);
}
