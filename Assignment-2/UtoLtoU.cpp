#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string s1;
    cout << "Enter string: ";
    getline(cin, s1);

    for (size_t i = 0; i < s1.length(); i++)
    {
        if (s1[i] >= 97 && s1[i] <= 122)
            s1[i] -= 32;
        else if (s1[i] >= 65 && s1[i] <= 90)
            s1[i] += 32;
    }
    cout<<s1<<endl;
    return 0;
}
