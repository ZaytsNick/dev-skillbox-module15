#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int index_start, index_end, sum(9);
    vector<int> a = {2, 11, 15, 6, 7};
    cout << "a = {";
    for (int i = 0; i < a.size(); ++i)
    {
        cout << a[i] << " ";
    }
    cout << "}. Результат = " << sum;
    for (int i = 0; i < a.size(); ++i)
    {
        if (a[i] < sum)
        {
            for (int j = i; j < a.size(); ++j)
            {
                if ((a[i] + a[j]) == sum)
                {
                    index_start = i;
                    index_end = j;
                    break;
                }
            }
        }
    }
    cout << "\nпервое число: " << a[index_start] << "\nпоследнее число: " << a[index_end] << endl;
}