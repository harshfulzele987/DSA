#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
    int i, was_bad = false;
    string input, bad[] = {"poop", "balls" , "fuck" };
    vector <string> badwords(bad, bad + sizeof(bad) / sizeof(string));

    while (cin >> input)
    {
        for (i = 0; i < badwords.size(); ++i)
            if (badwords[i] == input)
            {
                cout << "Bleep! ";
                was_bad = true;
                break;
            }

        if (!was_bad)
            cout << input << " ";

        was_bad = false;
    }

    return 0;
}
