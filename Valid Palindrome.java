/* 
    A phrase is a palindrome if, after converting all uppercase letters into lowercase letters
    and removing all non-alphanumeric characters, it reads the same forward and backward.
    Alphanumeric characters include letters and numbers.

    Given a string s, return true if it is a palindrome, or false otherwise.
    --------
    Example 1:

    Input: s = "A man, a plan, a canal: Panama"
    Output: true
    Explanation: "amanaplanacanalpanama" is a palindrome.
    --------
    Example 2:

    Input: s = "race a car"
    Output: false
    Explanation: "raceacar" is not a palindrome.
    --------
    Example 3:

    Input: s = " "
    Output: true
    Explanation: s is an empty string "" after removing non-alphanumeric characters.
    Since an empty string reads the same forward and backward, it is a palindrome.

*/
 
class Solution {
    public boolean isPalindrome(String s) {
        s=s.toLowerCase();
        //System.out.println(s);
        String word="";
        for(int i=0;i<s.length();i++)
        {
            char ch=s.charAt(i);
            if(ch>=97 && ch<=122 || ch>=48 && ch<=57) 
            {
                word+=ch; 
            }
            else
            {
                continue;
            }
        }
        //System.out.println(word);
        String rw="";
        for(int i=0;i<word.length();i++)
        {
            char ch=word.charAt(i);
            if(ch!=32)
            {
                rw=ch+rw;
            }
        }
        //System.out.println(rw);
        if(rw.equals(word))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
