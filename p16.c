#include<stdio.h>
int main(){
    int a,b,c,d,e,average; // a,b,c,d,e are math science english physics,digital electronics respictevely
    scanf("%d%d%d%d%d\n",&a,&b,&c,&d,&e);
    average = (a+b+c+d+e)/5;
    printf("average of totle marks is >> %d",average);
    if(average > 30){
        printf("pass \n");
    }
    else{
    
        printf("fail");
    }
    return 0;
}