#include<cstdlib>
#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    string s1,s2;
    cout<<"Enter string: "<<endl;
    getline(cin,s1);
    s2=s1;

    for (size_t i = 0; i < s1.length(); i++)
    {
        s2[i]+=1;
    }

    cout<<s2<<endl;
    

    return 0;
}
