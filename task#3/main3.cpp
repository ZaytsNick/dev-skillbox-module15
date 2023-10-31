#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> vect;
    int number;
    while (number != -2)
    {
        cout << "input: ";
        cin >> number;
        if (number == -1)
        {
            for (int j = 0; j < vect.size(); j++)
    {
        for (int i = 0; i < vect.size() - 1; i++)
        {
            if (vect[i] > vect[i + 1])
                swap(vect[i], vect[i + 1]);
        }
    }
    cout << "conclusion: " << vect[4] << "(in sorted form the array looks like this: {";
    for (int i = 0; i < vect.size(); ++i)
    {
        cout << vect[i] << " ";
    }
    cout << "})";
        }
        else
            vect.push_back(number);
    }
}