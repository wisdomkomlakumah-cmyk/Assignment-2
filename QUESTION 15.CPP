
#include <iostream>
using namespace std;

int main()
{
    double power, totalLoad = 0;

    while (totalLoad <= 3000)
    {
        cout << "Enter appliance power rating (W): ";
        cin >> power;

        totalLoad += power;
    }

    cout << "Load limit exceeded. Do not add more appliances." << endl;
    cout << "Final Total Load = " << totalLoad << " W" << endl;

    return 0;
}
