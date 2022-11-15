#include<stdio.h>
int main()
{
    int n,a,d1,d2,d3;
    printf("Enter the number :");
    scanf("%d",&n);//153
    a=n/10;//15
    d3=n%10;//3 
    d1=a/10;//1 
    d2=a%10;//5
    printf("%d %d %d",d1,d2,d3);
    a=(d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3);
    if(a==n){
        printf("\nThe number is an armstrong number");
    }
    else{
        printf("\nThe number is not an armstrong number ");
    }
    return 0;
}
