#include<stdio.h>
void main() {
    int sum=0,rem,n;
    printf("Enter  a number:");
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("the sum of digits of a number is:%d",sum);
}
