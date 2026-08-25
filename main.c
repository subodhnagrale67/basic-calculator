#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    
    printf("enter first digit-:");
    scanf("%d",&a);
    
    printf("enter second digit-:");
    scanf("%d",&b);
    
    c=a+b;
    d=a-b;
    e=a*b;
    f=a%b;
    
    printf("addtion value: %d\n",c);
    printf("subtraction value: %d\n",d);
    printf("multiplication value %d\n",e);
    printf("division value %d\n",f);
    
    return 0;
    
}