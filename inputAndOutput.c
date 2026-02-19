#include<stdio.h>
#include<string.h>
int main(){
    char ch [100];
    printf("Enter your name: ");
    scanf("%[^\n]s",ch);
    //gets(ch);
    //puts(ch);
    printf("Your name is: %s", ch);
}
