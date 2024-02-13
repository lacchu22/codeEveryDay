#include<stdio.h>
#include<stdbool.h>

bool ispalindrome(char *word)
{
    int len,i=0;
    char *str;
    bool pflag=0;
    for(str=word; *str; ++str);
    len=str-word;
    if(len%2==0)
    {
        while(word[i]==word[len-i-1] && i<(len-i-1))
            i++;
        if(i>=(len-i-1))
            pflag=1;
    }
    else
    {
        while(word[i]==word[len-i-1] && i!=(len-i-1) && i<(len-i-1))
            i++;

        if(i>=(len-i-1))
            pflag=1;
    }
    return pflag;
}

char* firstPalindrome(char** words, int wordsSize) {

    int len=0, val=0, i;
    for(i=0; i<wordsSize; i++)
    {
        val=ispalindrome(words[i]);
        if(val==1)
            break;
    }
    return words[i];
    
}


int main()
{
    char *strings[] = {"aaaha", "addaada", "addadda", "madam", "haha"};   
    
    char **str=strings;
    
    char *pal = firstPalindrome(str, 5);
    
    printf("First Palindrome: %s \n", pal);
}