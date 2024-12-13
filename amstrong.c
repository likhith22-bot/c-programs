#include<stdio.h>
#include<math.h>
void main(){
    int sum=0,n,rem,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n>0) {
        rem=n%10;
        sum=sum+pow(rem,3);
        n=n/10;
    }
    if(sum==temp){
        printf("The given number %d is amstrong number",sum);
    }
    else {
        printf("The given number %d is not a amstrong",sum);
    }
}
