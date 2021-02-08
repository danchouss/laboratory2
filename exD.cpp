#include <iostream>

using namespace std;

int main()
{
    int N, tmp, sch=0;
    cin >> N;
    for (int i=0; i<N; i++)
    {
        if (N % 2 == 0 && N !=0)
        {
            tmp=N/2;
            N=tmp;
        }
        else{
            sch++;
        }
    }
    if (N==1)
    {
        sch=0;
    }
    if (sch==0)
    {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}