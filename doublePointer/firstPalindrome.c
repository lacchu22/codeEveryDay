/*
******************************************************************************
  * @file           : firstPalindrome.c
  * @creator        : Lakshmi Narayanan S
******************************************************************************
 
Problem Statement: Given an array of strings, find the first palindrome and print the value, if no palindrome is present print an empty string.

This solution is in C programming language.

The C code has been achieved without any usage of built-in functions.
 
*/


#include<stdio.h>
#include<stdbool.h>

//Function to find palindrome and returns boolean value
bool ispalindrome(char *word)
{
    int len,i=0;
    char *str;
    bool pflag=0;
	//Find the length of the string
    for(str=word; *str; ++str);
    len=str-word;
  
    //Iterate and verify if the values from both the ends are matching until midpoint is crossed
	while(word[i]==word[len-i-1] && i!=(len-i-1) && i<(len-i-1))
        i++;

	//if midpoint is reached set flag  
    if(i>=(len-i-1))
        pflag=1;
	return pflag;
}

char* firstPalindrome(char** words, int wordsSize) {

    for(int i=0; i<wordsSize; i++)
    {
        if(ispalindrome(words[i]))
            return words[i]; //return the first palindrome element of the array
    }
	//retun empty string if elemnt is not identified
    return empty; 
    
}



int main()
{
    //string pointer array
	char *strings[] = {"aaaha", "addaada", "addadda", "madam", "haha"};   
    
    //double pointer pointing to the string pointer array
	char **str=strings;
    
    //function call 
	char *pal = firstPalindrome(str, 5);
    
    //result
	printf("First Palindrome: %s \n", pal);
}



