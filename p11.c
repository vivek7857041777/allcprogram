#include<stdio.h>
int main(){
    int a,b,c=0;
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("%d \n%d",a,b);
    return 0;
}