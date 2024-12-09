#include <stdio.h>
#include<stdlib.h>
void main() {
    int i,n,even_sum=0,odd_sum=0;
    printf("Enter the n value:");
    scanf("%d",&n);
    for(i=1;i<=n;++i){
        if(i%2==0){
        even_sum +=i;
    }
    else {
        odd_sum +=i;
    }
    }
    printf("the sum of first %d even numbers is:%d\n",n,even_sum);
    printf("The sum of first %d odd numbers is;%d\n",n,odd_sum);
    printf("The diffrence between even and odd numbers is:%d\n",abs(even_sum - odd_sum));
}
