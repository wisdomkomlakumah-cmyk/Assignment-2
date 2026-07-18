#include <iostream>
using namespace std;

int main()
{
    char ch;
    int vowel_count = 0;

    cin >> ch;

    while (ch != 'q')
    {
        if (ch=='a' || ch=='e' || ch=='i' ||
            ch=='o' || ch=='u' || ch=='A' ||
            ch=='E' || ch=='I' || ch=='O' ||
            ch=='U')
        {
            vowel_count++;
        }

        cin >> ch;
    }

    cout << "Number of vowels entered: "
         << vowel_count << endl;

    return 0;
}
