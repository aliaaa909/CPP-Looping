#include <iostream>
using namespace std;

int main()
{
    int n;

    cout<< "masukkan nilai tabbel perkalian:" ;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j<= n; j++)
        {
         cout << i *  j << "\t";
        }
        cout << endl;
    }

    return 0;
}
