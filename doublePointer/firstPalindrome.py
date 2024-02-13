#******************************************************************************
#  * @file           : firstPalindrome.c
#  * @creator        : Lakshmi Narayanan S
#******************************************************************************
# 
#Problem Statement: Given an array of strings, find the first palindrome and print the value, if no palindrome is present print an empty string.
#The python code is achieved with 0(1) time complexity
#

from typing import List

class PalindromeFinder:
    def firstPalindrome(self, words: List[str]) -> str:
        # Iterate through each word in the list.
        for word in words:
            # Check if the current word is a palindrome by comparing it to its reversed version.
            if word == word[::-1]:
                # If a palindrome is found, return it immediately.
                return word
        
        # If no palindrome is found in the entire list, return an empty string.
        return ""

# Create an instance of the PalindromeFinder class
finder = PalindromeFinder()

# Call the firstPalindrome method on the instance
result = finder.firstPalindrome(["ahhaha", "aahaa", "addadda"])
print("First palindrome:", result)