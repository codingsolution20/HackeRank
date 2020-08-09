#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    printf("Hello, World!\n%s",s);   
    return 0;
}