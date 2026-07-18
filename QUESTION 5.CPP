#include <iostream>
using namespace std;

int main()
{
    int num;
    int sum = 0;

    while (true)
    {
        cin >> num;

        if (num % 3 != 0)
            break;

        sum += num;
    }

    cout << "Sum of multiples of 3: " << sum << endl;

    return 0;
}
