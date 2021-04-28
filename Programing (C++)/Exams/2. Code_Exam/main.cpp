#include <iostream>
#include <string>
#include <cmath>

#define MAX_N 100

using namespace std;

int main()
{
    int N, H;
    //Beolvasas:
    cin >> N >> H;
    int Nap[N+1], No[N+1], Ea[N+1];
    string esemeny[N+1];
    for(int i = 1; i <= N; i++)
    {
       cin >> Nap[i] >> No[i] >> Ea[i];
       cin >> esemeny[i];
    }
    //1. feladat:
    cout << "#" << endl;
    int x = 0;
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            if(No[i] == No[j] && Ea[i] == Ea[j] && i != j && x == 0)
            {
                cout << No[i] << " " << Ea[i] << " ";
                x++;

            }
        }
    }
    if(x == 0)
    {
        cout << "-1 -1";
    }
    cout << endl << "#" << endl;
    //2. feladat:
    x = 0;
    int esemenynap[N+1], y = 0;
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            y = Nap[j] - Nap[i];
            if( y > 0 && y <= H && i != j)
            {
                x++;
            }
        }
        esemenynap[i] = x;
        x = 0;
    }
    int maxErt = 0, maxInd = 0;
    for(int i = 1; i <= N; i++)
    {
        if(maxErt < esemenynap[i])
        {
            maxErt = esemenynap[i];
            maxInd = i;
        }
    }
    if(N == 1)
    {
        cout << Nap[1] << endl << "#" <<endl;
    }
    else
    {
        cout << Nap[maxInd] << endl << "#" << endl;
    }
    //3. feladat:
    x = 0;
    maxErt = 0;
    int NoInd1, NoInd2, EaInd1, EaInd2;
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            x = (abs(No[i]-No[j]) + min((abs(Ea[i] - Ea[j])),(360-abs(Ea[i]-Ea[j]))));
            if (maxErt < x)
            {
                maxErt = x;
                NoInd1 = No[i];
                NoInd2 = No[j];
                EaInd1 = Ea[i];
                EaInd2 = Ea[j];
            }
        }
    }
    if(N == 1)
    {
        cout << No[1] << " " << Ea[1] << endl;
    }
    else
    {
        cout << NoInd1 << " " << EaInd1 << endl << NoInd2 << " " << EaInd2 << endl;
    }
    cout << "#" << endl;
    //4. feladat:
    int db[N] = {0};
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            if(esemeny[i] == esemeny[j] && i != j && esemeny[i] != "0")
            {
                db[i] = db[i] + 1;
                esemeny[j] = "0";
            }
        }
    }
    x = 0;
    for(int i = 1; i <= N; i++)
    {
        if(esemeny[i] != "0")
        {
            x++;
        }
    }
    cout << x << endl;
    for(int i = 1; i <= N; i++)
    {
        if(esemeny[i] != "0")
        {
            cout << esemeny[i] << endl;
        }
    }
    return 0;
}
