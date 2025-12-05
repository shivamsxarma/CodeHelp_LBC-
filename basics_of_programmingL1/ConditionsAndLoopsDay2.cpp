#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {


        for (int k = 5 - 1 - i; k >= 0; k--)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2*i-1 ; j++)
        {
            cout<<"* ";
        }

        cout << endl;
    }

    return 0;
}