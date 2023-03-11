#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

// O(n) time and O(n) space complexity

char getNewLetter(char letter, int key, string alphabet)
{
    int newLetterCode = alphabet.find(letter)+key;
    if (newLetterCode <= 25)
        return alphabet[newLetterCode];
    else
        return alphabet[-1 + newLetterCode % 25];
}
string CeaserCipherEncryption(string s, int key)
{
    vector<char> newLetters;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int newKey = key % 26;
    for (int i = 0; i < s.size(); i++)
    {
        newLetters.push_back(getNewLetter(s[i], newKey,alphabet));
    }
    return string(newLetters.begin(), newLetters.end());
}
