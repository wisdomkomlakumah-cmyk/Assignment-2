#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    int count = 0;

    while (true)
    {
        cin >> input;

        if (input == "done")
            break;

        count++;
    }

    cout << "Number of strings entered: " << count << endl;

    return 0;
}
