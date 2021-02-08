#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int speed, sum=0;
    string letter_plate;
    for(int i=0; i>-1; i++)
    {
        cin >> speed >> letter_plate;
        if (letter_plate[0] == 'A' && letter_plate[1] == '9' && letter_plate[2] == '9' && letter_plate[3] == '9' && letter_plate[4] == 'A' && letter_plate[5] == 'A')
        {
            i=-2;
        }
        else
        {
            if (speed > 60)
            {
                if (letter_plate[1] == letter_plate[2] && letter_plate[2] == letter_plate[3])
                {
                    sum+=1000;
                }
                else
                {
                    if(letter_plate[1] == letter_plate[2] || letter_plate[1] == letter_plate[3] || letter_plate[2] == letter_plate[3])
                    {
                        sum+=500;
                    }
                    if (letter_plate[1] != letter_plate[2] && letter_plate[2]!= letter_plate[3] && letter_plate[1] != letter_plate[3])
                    {
                        sum+=100;
                    }
                }
            }
        }
    }
    cout << sum;
    return 0;
}
