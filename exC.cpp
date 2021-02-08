#include <iostream>

using namespace std;

int main()
{
    int a, N=0;
    for (int i=0; i>-1; i++)
    {
        cin >> a;
        if (a != 0)
        {
            if (a % 2 == 0)
            {
                N++;
            }
        }
        else
            {
            i = -2;
        }
    }
    cout << N;
}