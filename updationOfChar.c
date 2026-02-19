#include<stdio.h>
#include<string.h>
int main(){
    char name[] = "Amrin"; //Amein
    printf("Original string : %s\n", name);
    name[2] = 'e';
    printf("Updated string : %s\n", name);
    return 0;
}