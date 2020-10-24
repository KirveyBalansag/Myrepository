#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float num[100], s=0.0, ave;

    cout << "Enter the numbers of data: ";
    cin >> n;

    while (n > 100 || n <= 0)
    {
        cout << "Error! number should in range of (1 to 100)." << endl;
        cout << "Enter the number again: ";
        cin >> n;
    }

    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> num[i];
        s += num[i];
    }

    ave = s / n;
    cout << "Average = " << ave;

    return 0;
}
