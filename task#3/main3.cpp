#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vect{1,3,5,7,9};
    int number;

    while (number != -2)
    {
        cout << "input: ";
        cin >> number;
        if (number == -1)
        {
            cout << "conclusion: " << vect[4] << endl;
            number=vect[4];
        }
        if (vect[4] > number)
        {
            vect[4] = number;
            for (int i(4); i > 0; --i)
            {
                if (vect[i] < vect[i - 1])
                {
                    swap(vect[i], vect[i - 1]);
                }
                else
                {
                    break;
                }
            }
        }
        
    }
}