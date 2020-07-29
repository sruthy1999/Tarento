 qs)Program 1:

Given a paragraph count the frequency of vowels and consonants in each word and capitalize the vowels/consonants in each word whose frequency is the highest. If the frequency of vowels and consonants are equal then capitalize the whole word.

Sample Input and Output

Input : Hey! How are you? I hope you are fine.
Output: HeY! HoW ArE yOU? I HOPE yOU ArE FINE.



program


#include <iostream>
using namespace std;

int main()
{
    string line;
    char str[];
    int vowels, consonants;

    int vowels=0,consonents=0;

    cout << "Enter a line of string: ";
    getline(cin, line);
    void split(string str) 
   { 
    string word = ""; 
    string final=" ";
    for (auto x : str) // SEPARATING WORDS
       { 
       if (x == ' ') 
       { 
           cout << word << endl; 
           final = ""; 
       } 
       else
       { 
           word = word + x; 
           str vowel=" ";
           str consonants=" ";
           for(int i = 0; i < word.length(); ++i) //checking whether each character is vowel,if it is increasing the count of vowel
           {
            if(word[i]=='a' || word[i]=='e' || word[i]=='i' ||
            word[i]=='o' || word[i]=='u' || word[i]=='A' ||
            word[i]=='E' || word[i]=='I' || word[i]=='O' ||
            word[i]=='U')
            {
             ++vowels;
             vowel +=word[i];
             }
           else
            {
            ++consonants;
            consonants +=word[i]; //if the character is consonant increasing count of consonant
            } 
           }
           if(vowels>consonants)
           for(int j=0;j<word.length;j++)
           {
             if(word[i]=='a' || word[i]=='e' || word[i]=='i' ||
            word[i]=='o' || word[i]=='u' || word[i]=='A' ||
            word[i]=='E' || word[i]=='I' || word[i]=='O' ||
            word[i]=='U')
               {
                 word[i]=toupper(word[i]);
               }
             else if(vowels<consonents)
             for(int j=0;j<word.length;j++)
           {
             if(word[i]=='a' || word[i] !=='e' || word[i] !=='i' ||
            word[i] !=='o' || word[i] !=='u' || word[i] !=='A' ||
            word[i] !=='E' || word[i] !=='I' || word[i] !=='O' ||
            word[i] !=='U')
               {
                 word[i]=toupper(word[i]);
               }
         else
            {
             for(int j=0;j<word.length;j++)

             {
               word[i]=toupper(word[i]);
              }
            }
           final +=word[i]
           putline(cout,final) 
}

           