#include <iostream>
using namespace std;

class Pair
{
public:
    string first, second;
};
int main()
{
    int row = 0;
    cin >> row;
    string x,y, plants[row], result[row];
    Pair pairs[row], pairj, pairk, plantPairs[row];
    for(int i = 0; i < row; i++)
    {
        Pair pair1;
        cin >> x >> y;
        pair1.first = x;
        pair1.second = y;
        pairs[i] = pair1;
    }
    for(int j = 0; j < sizeof(pairs)/sizeof(pairs[0]); j++)
    {
        int counter = 0;
        bool isPlant = true;
        for(int k = 0; k < sizeof(pairs)/sizeof(pairs[0]); k++)
        {
            pairs[j] = pairj;
            pairs[k] = pairk;
            if(pairj.second == pairk.first)
            {
                isPlant = false;
                break;
            }
        }
        if(isPlant)
        {
            counter++;
            plantPairs[counter] = pairj;
            plants[counter] = pairj.second;
        }
    }

    for(int i = 0; i < sizeof(plantPairs)/sizeof(plantPairs[0]); i++){
        result[i] = plantPairs[i].first;
    }

    for(int i = 0; i < sizeof(plantPairs)/sizeof(plantPairs[0]); i++)
        {
            for(int j = 0; j < sizeof(pairs)/sizeof(pairs[0]); j++)
            {
                string first = plantPairs[i].first;
                if(first == pairs[j].first && pairs[j].first != plantPairs[i].first && pairs[j].second != plantPairs[i].second)
                {
                    bool contains = false;
                    for(int k=0; k< sizeof(plants)/sizeof(plants[0]); k++)
                    {
                        if(pairs[j].second==plants[k])
                        {
                            contains = true;
                        }
                    }
                    if(!contains)
                    {
                        for(int l=0; l < sizeof(result)/sizeof(result[0]); l++)
                        {
                            if(pairs[j].first == result[l])
                            {
                                result[l] = "";
                                cout << result[l] << endl;
                            }
                        }
                    }
                }
            }
        }
    for(int i = 0; i < sizeof(result)/sizeof(result[0]); i++)
    {
        cout << result[i] << endl;
    }
        return 0;
}
