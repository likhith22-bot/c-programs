#include<stdio.h>
void main() {
    int count=0,i,n;
    printf("Enter the n value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            count+=1;
        }
    }
    if(count==2) {
        printf("Given number %d is prime");
    }
    else {
        printf("Given number %d is not prime");
    }
}
