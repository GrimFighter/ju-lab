#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <string>

using namespace std;
void check(string &s1)
{

    int i = 0, j = s1.size() - 1;

    while (i < j)
    {
        if (s1[i++] == s1[j--])
        {
            continue;
        }
        else
        {
            cout << "String is not a palindrome" << endl;
            return;
        }
    }
    cout << "String is a palindrome" << endl;


}
int main(int argc, char const *argv[])
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    check(s);

    return 0;
}
