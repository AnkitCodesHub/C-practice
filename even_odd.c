#include<stdio.h>
int main(){
    int a;
    printf("Enter the Num: ");
    scanf("%d",&a);
    if(a%2==0){
        printf("Given Number is even");
    }
    else{
        printf("%d is odd number",a);
    }
    return 0;
}