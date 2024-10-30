#include<stdio.h>
void main() {
    int arr[5],sum=0,avg;
    for(int i=0;i<5;i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    avg=sum/5;
    //printf("%d",avg);
    if(avg>90){
        printf("A+");
    }
    else if(avg<=90 && avg>=80){
       printf("A"); 
    }
    else if(avg<=80 && avg>=70){
        printf("B");
    }
    else if(avg<=70 && avg>=60){
        printf("C");
    }
    else if(avg<=60 && avg>=50) {
        printf("D");
    }
    else if(avg<=50 && avg>=40){
        printf("E");
    }
    else {
        printf("F");
    }
}
