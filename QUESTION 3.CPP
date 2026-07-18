#include <iostream>
using namespace std;

int main()
{
    int num, largest;

    cin >> num;
    largest = num;

    while (num != 0)
    {
        cin >> num;

        if (num > largest)
            largest = num;
    }

    cout << "Largest number: " << largest << endl;

    return 0;
}
