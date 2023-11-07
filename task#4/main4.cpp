#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    int positive, negative;
    vector<int> vec = {-100, -50, -5, 1, 10, 15, 101, 102};
    for (int i = 0; i < vec.size(); ++i)
    {
        if (vec[i] > 0)
        {
            positive = i;
            negative = i - 1;
            break;
        }
    }
    cout << "Result:";
    while (positive != vec.size() && negative != -1)
    {
        if (abs(vec[negative]) > vec[positive])
        {
            cout << " " << vec[positive];
            positive++;
        }
        else
        {
            cout << " " << vec[negative];
            negative--;
        }
    }
    int g = vec.size() - positive + negative + 1;
    for (int i = 0; i < g; i++)
    {
        if (vec.size() - positive)
        {
            cout << " " << vec[positive];
            positive++;
        }
        if (negative >= 0)
        {
            cout << " " << vec[negative];
            negative--;
        }
    }
}