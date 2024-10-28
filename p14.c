#include<stdio.h>
int main(){
    int age;
    printf("enter the human age");
    scanf("%d\n",&age);
    if(age>18){
        printf("he is eligible for voting ");
    }
    else{
        printf("he is not eligible for voting");
    }
    return 0;
}