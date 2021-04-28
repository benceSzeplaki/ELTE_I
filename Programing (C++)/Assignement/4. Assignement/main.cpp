/*
Készítette: Széplaki Bence
Neptun-kód: STM3ML
E-mail: szeplakibence@gmail.com
        stm3ml@inf.elte.hu
Feladat: "ProgAlap beadandó feladatok" téma "Madárfajok egyedei több mint 90%-ban egy helységben" feladat
*/
#include <iostream>
#define BIRO
using namespace std;
int N, M, db = 0;
void beolvasas(float matrix[51][201])
{
    #ifdef BIRO
    do{
    cin >> M;
    }while (M < 1 || M > 50);
    do{
    cin >> N;
    }while (N < 1 || N > 200);
    #else
    cout << "Adja meg a helysegszamot: ";
    do
    {
        cin >> M;
        if(M < 1 || M > 50)
        {
            cout << "Helytelen bemenet!" << endl << "(A helysegszam legyen nagyobb, mint 1, de ne legyen nagyobb, mint 50.)" << endl << "Adja meg a helysegszamot: ";
        }
    }while(M < 1 || M > 50);
    cout << "Adja meg a madarfajszamot: ";
    do
    {
        cin >> N;
        if(N < 1 || N > 200)
        {
            cout << "Helytelen bemenet!" << endl << "(A madarfajszam legyen nagyobb, mint 1, de ne legyen nagyobb, mint 200.)"<< endl<< "Adja meg a madarfajszamot: ";
        }
    }while(N < 1 || N > 200);
    #endif
    #ifdef BIRO
    for(int i = 1; i <= M; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            do{
            cin >> matrix[i][j];
            }while(matrix[i][j] < 0 || matrix[i][j] > 1000);
        }
    }
    #else
    for(int i = 1; i <= M; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            cout << i << ". helyseg "<<j<<". madarfaj: ";
            do{
                cin >> matrix[i][j];
                if(matrix[i][j] < 0 || matrix[i][j] > 1000)
                {
                    cout << "Hibas bemenet! (A megfigyelt madarak darabszama 1 es 1000 kozott kell hogy legyen!)"<< endl << i << ". helyseg "<<j<<". madarfaj: ";
                }
            }while(matrix[i][j] < 0 || matrix[i][j] > 1000);
        }
    }
    #endif
}
void oszloposszeadas(float matrix[51][201], float oszloposszeg[201])
{
    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= M; ++j)
        {
            oszloposszeg[i] = oszloposszeg[i] + matrix[j][i];
        }
    }
}
void szazalek(float oszloposszeg[201])
{
    for(int i = 1; i <= N; i++)
    {
        oszloposszeg[i]= (oszloposszeg[i]*90)/100;
    }
}
void tobbmintkilencvenszamlalo(float matrix[51][201], float oszloposszeg[201])
{
    for(int i = 1; i<= N; i++)
    {
        for(int j = 1; j <= M; j++)
        {
            if(matrix[j][i] >= oszloposszeg[i] && oszloposszeg[i] != 0)
            {
                db++;
            }
        }
    }
}
void madarfajoksorszama(float matrix[51][201], float oszloposszeg[201], int madarfajok[201])
{
    for(int i = 1; i<= N; i++)
    {
        for(int j = 1; j <= M; j++)
        {
            if(matrix[j][i] >= oszloposszeg[i] && oszloposszeg[i] != 0)
            {
                madarfajok[i] = i;
            }
        }
    }
}
void kiiratas(int db, int madarfajok[201])
{
    #ifdef BIRO
    cout << db << endl;
    for(int i = 1; i <= N ;i++)
    {
        if(madarfajok[i] != 0)
        {
            cout << madarfajok[i]<< " ";
        }
    }
    #else
    if(db > 0)
    {
        cout << db << " darab madarfaj volt, amelyek egyedei tobb mint 90%-ban egy helysegben voltak megtalalhatoak."<< endl;
        cout << "Ezen madarfajok szamai: ";
        for(int i = 1; i <= N ;i++)
        {
            if(madarfajok[i] != 0)
            {
                cout << madarfajok[i]<< " ";
            }
        }
    }
    else
    {
        cout << "Nem volt olyan madarfaj, amelynek egyedei tobb mint 90%-ban egy helysegben fordultak volna elo."<<endl;
    }
    #endif
}
int main()
{
    float matrix[51][201], oszloposszeg[201] = {0};
    int madarfajok[201];
    beolvasas(matrix);
    oszloposszeadas(matrix,oszloposszeg);
    szazalek(oszloposszeg);
    tobbmintkilencvenszamlalo(matrix,oszloposszeg);
    madarfajoksorszama(matrix,oszloposszeg,madarfajok);
    kiiratas(db,madarfajok);
    return 0;
}
