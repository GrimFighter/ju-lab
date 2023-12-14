#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <string>

using namespace std;

void countVC(string s)
{
    int vowels = 0, consonant = 0;

    for (size_t i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
            s[i] == 'o' || s[i] == 'u' || s[i] == 'A' ||
            s[i] == 'E' || s[i] == 'I' || s[i] == 'O' ||
            s[i] == 'U')
        {
            ++vowels;
        }

        else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            ++consonant;
        }
    }

    cout << "Vowels: " << vowels << " "
         << "Consonants: " << consonant << endl;
}

int main(int argc, char const *argv[])
{
    cout << "Enter your string: ";
    string s1;

    getline(cin,s1);
    countVC(s1);

    return 0;
}
