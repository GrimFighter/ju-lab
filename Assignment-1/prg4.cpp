#include <iostream>
using namespace std;

string one[] = {"", "one ", "two ", "three ", "four ",
                "five ", "six ", "seven ", "eight ",
                "nine ", "ten ", "eleven ", "twelve ",
                "thirteen ", "fourteen ", "fifteen ",
                "sixteen ", "seventeen ", "eighteen ",
                "nineteen "};

string ten[] = {"", "", "twenty ", "thirty ", "forty ",
                "fifty ", "sixty ", "seventy ", "eighty ",
                "ninety "};

string result = "";

string convert(int n, string s)
{
    if (n == 0)
        ;

    if (n > 20)
    {
        result += ten[(n / 10)] + one[n % 10];
    }

    result += one[n] + s;
    return result;
}

int main(int argc, char const *argv[])
{

    int number;
    cout << "Enter a number:" << endl;
    cin >> number;

    result = convert((number / 100), "hundred ");

    result = convert((number % 100), " ");

    cout << result << endl;
  
    return 0;
}
