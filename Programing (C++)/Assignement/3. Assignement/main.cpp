#include <iostream>

using namespace std;

int main()
{
    int sor = 0, db = 0, legkisebb = 0, nincs = 0, vegsorszam = 0;
    cin >> sor;
    int menetido[sor] = {}, lassu[sor] = {}, lassusorszam[sor] = {};
    for (int i = 0; i < sor; i++)
    {
        cin >> menetido[i];
    }
    if(1 <= sor && sor <= 100)
    {
        for(int j = 0; j < sor; j++)
        {
            if(1 <= menetido[j] && menetido[j] <= 300)
            {
                if(120 < menetido[j])
                {
                    lassu[db] = menetido[j];
                    lassusorszam[db] = j + 1;
                    db++;
                }
                else
                {
                    nincs++;
                }
            }
        }
    }
    else {return 0;}
    legkisebb = lassu[0];
    for(int q = 0; q < db; q++)
    {
        if(lassu[q]< legkisebb)
        {
            legkisebb = lassu[q];
            vegsorszam = lassusorszam[q];
        }
    }
    if (vegsorszam == 0)
    {
        vegsorszam = vegsorszam + 1;
    }
    if(nincs == sor)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << vegsorszam << " " << legkisebb <<endl;
    }
    return 0;
}
