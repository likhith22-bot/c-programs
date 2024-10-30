#include<stdio.h>
void main() {
    int num,temp;
    printf("enter the number:");
    scanf("%d",&num);
    temp=num%2;
    switch(temp){
        case 0:printf("the given number %d is even",num);
        break;
        case 1:printf("the given number %d is odd",num);
        break;
    }
}
