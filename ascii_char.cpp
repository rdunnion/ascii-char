// list character a-z with their associated number

#include <iostream>
using namespace std;

int main()
{
    char letter{ 'a' };
    int number = letter;

    while (letter < '{')
    {
        cout << letter << " " << number << "\n";
        ++letter;
        ++number;
    }

}