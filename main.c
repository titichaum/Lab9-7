#include <stdio.h>
#include<stdio.h>
float base,Rpower=1;
int i,exponent;

float result(float base,int exponent){
  for(i=1;i<=exponent;i++){
       Rpower = Rpower * base;}
       return Rpower;
        }      
     
    
int main()
{
    //int base,exponent,i,Rpower=1;
    printf("Enter Base value : ");
    scanf("%f",&base);
    printf("Enter Exponent value : ");
    scanf("%d",&exponent);
    result(base,exponent);
    
      printf("Result is %.2f",Rpower);
  return 0;
}