#include<stdio.h>
void main() {
    int rev=0,rem,n,p;
    printf("Enter  a number:");
    scanf("%d",&n);
    p=n;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
  if(p==rev){
      printf("The given number %d is palindrom ");
  }
  else {
      printf("The given number %d is not a palindrom");
  }
}
