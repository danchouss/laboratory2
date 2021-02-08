#include <iostream>

using namespace std;

int main()
{
    int N, sch=0;
    cin >> N;
    for (int i=2; i<N; i++)
    {
        if((N % i) == 0)
        {
            sch++;
        }
    }
    if (sch == 0)
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }
}