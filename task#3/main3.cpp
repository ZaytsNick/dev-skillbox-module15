#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vect[5];
    int number;

    while (number != -2)
    {
        cout << "input: ";
        cin >> number;
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
        if (number == -1)
        {
            cout << "conclusion: " << vect[4]<<endl;

            // for (int j = 0; j < vect.size(); j++)
            // {
            //     for (int i = 0; i < vect.size() - 1; i++)
            //     {
            //         if (vect[i] > vect[i + 1])
            //             swap(vect[i], vect[i + 1]);

            //     }
            // }
            // cout << "conclusion: " << vect[4] << "(in sorted form the array looks like this: {";
            // for (int i = 0; i < vect.size(); ++i)
            // {
            //     cout << vect[i] << " ";
            // }
            // cout << "})";
        }
    }
}