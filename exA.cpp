#include <iostream>

using namespace std;

int main()
{
    int a, b, nod;
    cin >> a;
    cin >> b;
    if (a>b)
    {
        for (int i=a; i>0; i--)
        {
            if (b % i == 0 && a % i == 0)
            {
                nod=i;
                i=0;
            }

        }
    }
    else
        {
        for (int i = b; i > 0; i--)
        {
            if (b % i == 0 && a % i == 0) {
                nod = i;
                i = 0;
            }
        }
    }
    cout << nod;
    return 0;
}