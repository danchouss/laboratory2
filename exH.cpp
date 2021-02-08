#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, i=1, tmp;
    vector<int> v;
    cin >> N;
    tmp=N;
    for (int j=2; j<=tmp/2; j++)
    {
        while (N % j == 0) {
            v.push_back(j);
            N /= j;
        }
    }
    for (auto i: v)
    {
        cout << i << endl;
    }
    return 0;
}
