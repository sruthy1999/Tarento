qs:
- Accept a String input
- Print the count of words in the String. Space is assumed to be the separator between words
- Print all numbers that are present in the String and also if they are odd or even. Numbers which are together should be counted as one number.

Eg. If the String input is
The boy had 2 apples, 23 oranges and 222 grapes.
then the output should be as below
Total words - 10
Even numbers - 2,222
Odd numbers - 23






#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    char str[50];
    int count = 0, i; 
    cout << "Enter a string : ";
    gets(str);
    for (i = 0; str[i] != '\0';i++)
    {
        if (str[i] == ' ')
            count++;    
    }
    cout << "Number of words in the string are: " << count + 1;
    return 0;
    finddigit(str)
}
int finddigit(string str) 
{ 
    // A temporary string 
    char temp[ ];
    string temp = “”; 
  
     // read each character in input string 
     for (char ch: str) 
    { 
       do
        { 
        // if current character is a digit 
        if (isdigit(ch)) 
            temp += ch;
         } 
         while(!isdigit(ch))
         temp = “ ”; // entering white space after reading number
        }
   
  
      stringstream strm;
      str_strm << temp; //converting temp into string stream
      string temp_str;
      int temp_int;
      while(!strm.eof())
      {
      strm >> temp_str; //take words into temp_str one by one
         if(stringstream(temp_str) >> temp_int) //try to convert string to int
            { 

                if(temp_str%2==0)
               {
                cout<<temp_str<<"is even";
     
                }
               else
               {
               cout<<temp_str<<"is odd ";
               }
            }
        }
    }