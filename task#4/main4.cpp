#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    vector<int> vec = {-100, -50, -5, 1, 10, 15};
    for (int i = 0; i < vec.size(); ++i)
    {
        for (int j = 0; j < vec.size(); ++j)
        {
            if (abs(vec[j]) > abs(vec[j + 1]))
                swap(vec[j], vec[j + 1]);
        }
    }
    cout<<"Result:";
    for(int i = 0; i < vec.size(); ++i)
    {
        cout<<" "<<vec[i];
    }
}