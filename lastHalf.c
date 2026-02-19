#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("Enter the length of the string: ");
    scanf("%d",&n);
    char str[n+1];
    printf("Enter the string: ");
    scanf("%s" , str);
    //printing the second half
    for(int i = n / 2 ; i < n ; i++){
        printf("%c" , str[i]);
    }
    return 0;
}