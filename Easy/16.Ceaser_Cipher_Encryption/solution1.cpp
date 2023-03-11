#include<iostream>
#include<numeric>
#include<vector>

using namespace std;

// O(n) time and O(n) space complexity
char getNewLetter(char letter, int key)
{
    int newLetterCode = letter+key;
    if(newLetterCode <=122)
    return newLetterCode;
    else return 96+newLetterCode%122;
}
string CeaserCipherEncryption(string s, int key)
{
    vector<char> newLetters;
    int newKey = key % 26;
    for(int i = 0;i < s.size();i++)
    {
        newLetters.push_back(getNewLetter(s[i],newKey));
    }
    return string(newLetters.begin(),newLetters.end());
}

