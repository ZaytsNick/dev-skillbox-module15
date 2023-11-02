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
    bool answer(false);
    for (int i = 0; i < a.size() && !(answer); ++i)
    {
        if (a[i] < sum)
        {
            for (int j = i; j < a.size() && !(answer); ++j)
            {
                if ((a[i] + a[j]) == sum)
                {
                    index_start = i;
                    index_end = j;
                    answer = true;
                }
            }
        }
    }
    cout << "\nпервое число: " << a[index_start] << "\nпоследнее число: " << a[index_end] << endl;
}