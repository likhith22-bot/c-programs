#include<stdio.h>
#include<math.h>
void main() {
    int a,b,c,d;
    float r1,r2;
    printf("enter the a b c values:");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0){
        printf("Real & distinct");
        r1=-b+sqrt(d/(2*a));
        r2=-b-sqrt(d/(2*a));
        printf("r1=%f\nr2=%f",r1,r2);
    }
    else if(d<0){
        printf("Real & imaginary");
    }
    else
    {
        printf("Real & equal");
        r1=-b/(2*a);
        r2=r1;
     printf("r1=%f\nr2=%f",r1,r2);
    }
}
