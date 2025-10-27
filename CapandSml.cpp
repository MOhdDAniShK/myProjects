#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sen;
    string Cap, Sml, Sps; // use string accumulators instead of raw char arrays

    getline(cin, sen);

    for (size_t i = 0; i < sen.length(); ++i)
    {
        unsigned char ch = sen[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            Cap.push_back(ch);
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            Sml.push_back(ch);
        }
        else
        {
            Sps.push_back(ch);
        }
    }

    cout << "Number of Capital letters is: " << Cap.size() << "\nCapital Letters are: " << Cap << endl;
    cout << "Number of Small letters is: " << Sml.size() << "\nSmall Letters are: " << Sml << endl;
    cout << "Number of other characters is: " << Sps.size() << "\nOther characters are: " << Sps << endl;

    return 0;
}