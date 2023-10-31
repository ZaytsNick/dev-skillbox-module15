#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    for(int i = 0; i < a.size(); ++i)
    {
        cout<<a[i]<<" ";
    }
    int index_start, index_end, sum;
    for (int i = 0; i < a.size(); ++i)
    {
        int temp_sum(0);
        if (a[i] > a[i + 1])
        {
            for (int j = i; j < a.size(); ++j)
            {
                temp_sum+=a[j];
               // sum?0:sum=temp_sum-1;
                if(temp_sum>sum)
                {
                    sum=temp_sum;
                    index_start=i;
                    index_end=j;
                }
            }

        }

        // if(temp_sum>sum)
    }
    cout<< "\nпервое число: "<<index_start<<"\nпоследнее число: "<<index_end<<endl;
}