#include <iostream>

using namespace std;

int main()
{
    int rows , mints , maxts , cold = 0;
    cin >> rows;
    for (int i = 0; i < rows; ++i)
        if (1 <= rows && rows <= 100)
            {
                cin >> mints >> maxts;
                if(-100 <= mints && maxts <= 100)
                {
                    if(mints < 0 || maxts < 0)
                    {
                        cold++;
                    }
                }
                else
                {
                    break;
                }
            }
        else{
                break;
            }
    cout << cold;
    return 0;
}
