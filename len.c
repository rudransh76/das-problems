#include<stdio.h>
int main(){
    char x[200];
    printf("enter string");
    scanf("%s",x);
    int len=0;

    while(x[len]!=0){
        len++;
    }
    for (int i = 0; i < len / 2; i++) {
        if (x[i] != x[len - i - 1]) {
            printf("not palindrome\n");
            break;
            
        }
        if (x[i] == x[len - i - 1]) {

            printf("palindrome\n");
            break;
        }    
    }
    printf("len is %d",len);
}