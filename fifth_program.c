#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    // WAP to calculate the length of String using printf function
        
    char Str[100];
    printf("Enter the String: ");
    scanf("%s", Str);
    int length = strlen(Str);
    printf("Length of Str is %d", length);
    return 0;
}
