#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <string>

using namespace std;
void upperCase(string &s1)
{

    for (size_t i = 0; i < s1.size(); i++)
    {
        if(s1[i]>=97 && s1[i]<=122) s1[i]-=32;
    }
}


int main(int argc, char const *argv[])
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    upperCase(s);
    cout<<s;
    

    return 0;
}
