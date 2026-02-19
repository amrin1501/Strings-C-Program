#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("Enter the size of s string: ");
    scanf("%d" , &n);
    char s[n+1];
    printf("Enter the s string: ");
    scanf("%s" , s);
    int m;
    printf("Enter the size of t string: ");
    scanf("%d" , &m);
    char t[m+1];
    printf("Enter the t string: ");
    scanf("%s" , t);
    //checking the lengths
    if(n != m){
        printf("It's not an anagram.");
        return 0;
    }
    //sorting of s string
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = i + 1 ; j < n ; j++){
            if(s[i] > s[j]){
                //swap
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    //sorting of t string
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = i + 1 ; j < n ; j++){
            if(t[i] > t[j]){
                //swap
                char temp = t[i];
                t[i] = t[j];
                t[j] = temp;
            }
        }
    }
    if(strcmp(s , t) == 0){ // s == t
        printf("It's an anagram");
    }
    else{
        printf("It's not an anagram.");
    }
    return 0;
}