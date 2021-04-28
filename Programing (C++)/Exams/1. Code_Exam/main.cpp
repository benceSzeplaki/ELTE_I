#include <iostream>

using namespace std;

int main()
{
    int N,i,ev=2020;
    cout << "N=";
    cin >> N;
    if(0<N)
    {
        int nullpluszdb=0, y[N+1], legidosebbkor, szul[N+1], nem[N+1], Max = 1;
        string nev[N+1], vercsop[N+1], allapot[N+1], legidosebbnev, nullplusz[N+1];
        bool vanolyan;
        for(int i = 1; i <= N; i++)
        {
            cout << i <<". nev: ";
            getline(cin, nev[i]);
            getline(cin, nev[i]);
            cout << i << ". szul: ";
            cin >> szul[i];
            cout << i << ". nem (no: 0, ferfi: 1): ";
            cin >> nem[i];
            cout << i << ". vercsop: ";
            cin >> vercsop[i];
            cout << i <<". allapot: ";
            cin >> allapot[i];
        }
        // A feladat:
        i = 1;
        while(i<=N && !(((ev - szul[i]<65) && nem[i] == 1 && allapot[i]=="elhunyt")))
              {
                  i=i+1;
              }
        vanolyan=(i<=N);
        //B feladat:
        for(i = 2; i <= N; i++)
        {
                if(szul[i]<szul[Max])
                {
                    Max=i;
                }
                legidosebbnev=nev[Max];
                legidosebbkor=ev - szul[Max];
        }
        //C feladat:
        for(i = 1; i <= N; i++)
        {
            if(vercsop[i]=="0+")
            {
                nullpluszdb=nullpluszdb+1;
                y[nullpluszdb]=i;
            }
        }
        for(i = 1; i <= nullpluszdb; i++)
        {
            nullplusz[i]=nev[y[i]];
        }
        //Kiiratas:
        if(vanolyan == true)
        {
            cout  << "Van 65 ev alatti elhunyt ferfi." << endl;
        }
        if(vanolyan == false)
        {
            cout << "Nincs 65 ev alatti elhunyt ferfi." << endl;
        }
        cout << "A legidosebb fertozott neve: " << legidosebbnev << " es kora: "<<legidosebbkor<<endl;
        cout << "0+ -os vercsoportu szemelyek nevei: " << endl;
        for(i = 1; i <= nullpluszdb; i++)
        {
            cout << nullplusz[i] << endl;
        }
        return 0;
    }
}
