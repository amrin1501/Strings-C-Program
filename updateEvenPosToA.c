#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("Enter the size of the string: ");
    scanf("%d",&n);
    char str[n+1];
    printf("Enter the string: ");
    scanf("%s",str);
    //updation of positive positions to 'a'
    for(int i = 0 ; str[i] != '\0' ; i++){
        if(i % 2 == 0){ //condition for the indec being even
            str[i] = 'a';
        } 
    }
    printf("Updated string is: %s\n" , str);
    return 0;
}