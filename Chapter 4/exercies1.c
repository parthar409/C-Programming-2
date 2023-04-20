#include<stdio.h>

int main(){
    char s[10],d[11];
    printf("Enter the string: ");
    scanf("%4s%10s",s,d);

    printf("(a) %s %s\n",s,d);
    printf("(b) %s\n    %s\n",s,d);
    printf("(c) %.1s.%.1s",s,d);

    return 0;
}