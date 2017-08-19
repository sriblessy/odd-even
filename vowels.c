#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
 if(ch==97 || ch==101 || ch==105 || ch==111 || ch==117 || ch==65 || ch==69 || ch==73 || ch==79 || ch==85)
    {
        printf("%c is VOWEL.", ch);
    }
    else if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
    {
     printf("%c is CONSONANT.", ch);
    }
    return 0;
}
