#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(int argc, const char * argv[])
{
    string bad[] = {"poop", "balls"};
    set<string> bad_words(bad, bad + sizeof(bad) / sizeof(string));

    string input;
    int i=0;
    int j=0;
    while(cin >> input)
    {
        i++;
        cout <<i;

        if(bad_words.find(input)!=bad_words.end()){
                j++;
        cout <<j;
            cout << "bleep! ";
        }
        else {
            cout << input << " ";
        }
    }
}
