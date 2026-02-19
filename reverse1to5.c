#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("Enter the length of the string: ");
    scanf("%d",&n);
    char str[n+1];
    printf("Enter the string: ");
    scanf("%s" , str);
    //reverse from position 2 to 5 
    int start = 2;
    int end = 5;
    for(int i = 0 ; i < ( end - start + 1) / 2 ; i++){
        char temp = str[start + i];
        str[start + i] = str[end -i];
        str[end - i] = temp;
    }
    printf("The required string is: %s" , str);
    return 0;
}