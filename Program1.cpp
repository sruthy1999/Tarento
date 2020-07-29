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
    for (auto x : str) 
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
           for(int i = 0; i < word.length(); ++i)
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
            consonants +=word[i];
            } 
           }
           if(vowels>consonents)
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

           