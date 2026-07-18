#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int num;

    while (true)
    {
        cin >> num;

        if (num < 0)
            break;

        sum += num;
    }

    cout << "The sum of all the positive numbers is: " << sum << endl;

    return 0;
}
