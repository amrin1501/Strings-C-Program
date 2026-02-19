#include<stdio.h>
#include<string.h>
int main(){
    int n , count = 0;
    printf("Enter the length of the string: ");
    scanf("%d" , &n);

    char str[n+1];

    printf("Enter the string: ");
    scanf(" %[^\n]s" , str);

    //counting the number of vowels
    for(int i = 0 ; str[i] != '\0' ; i++){
        if(str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u'){
            count++;
        }
    }

    //printing
    printf("You entered: %s\n" , str);
    printf("Number of vowels: %d" , count);
}