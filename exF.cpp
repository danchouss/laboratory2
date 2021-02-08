#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a, max=0, sch=0;
    vector<int> v;
    for (int i=0; i>-1; i++)
    {
        cin >> a;
        if(a !=0)
        {
            v.push_back(a);
        }
        else{
            i = -2;
        }
    }
    for (auto i: v)
    {
        if(i>max)
        {
            max=i;
        }
    }
    for (auto i: v)
    {
        if (i==max)
        {
            sch++;
        }
    }
    cout << sch;
}
