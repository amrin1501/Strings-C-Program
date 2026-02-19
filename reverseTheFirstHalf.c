#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("Enter the length of the string: ");
    scanf("%d",&n);
    char str[n+1];
    printf("Enter the string: ");
    scanf("%s" , str);
    //reverse only the 1st half of the string
    for(int i = 0 ; i < n/4 ; i++){
        char temp = str[i];
        str[i] = str[( n / 2 ) - 1 - i];
        str[( n / 2 ) - 1 - i] = temp;
    }
    printf("The required string is: %s" , str);
    return 0;
}