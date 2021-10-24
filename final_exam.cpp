#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// vector<int> v1;
// int set[100000][2];
// int check(int i, int j)
// {
//     if(count(v1.begin(),v1.end(),set[i][j]))
//     {
//         if(j==0)
//             return check(i-1,1);
//         else if(j==1)

//     }
// }
int min(int a, int b)
{
    return (a < b) ? a : b;
}
int main()
{
    int t;
    cin >> t;
    for (int p = 0; p < t; p++)
    {
        vector<int> v1;
        int n, m;
        cin >> n >> m;
        int set[n][2];
        for (int i = 0; i < n; i++)
        {
            cin >> set[i][0] >> set[i][1];
        }
        int sample[m];
        for (int i = 0; i < m; i++)
            cin >> sample[i];
        cout << "Case #" << p + 1 << ": ";
        for (int i = 0; i < m; i++)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                if (sample[i] >= set[j][1])
                {
                    int p1 = sample[i] - set[j][1];
                    int p2 = set[j + 1][0] - sample[i];
                    int k = min(p1, p2);
                    if (k == p1)
                    {
                        if (count(v1.begin(), v1.end(), set[j][1]))
                        {
                            if (set[j][0] > set[j][1] - 1)
                                continue;
                            else
                            {
                                cout << set[j][1] - 1 << " ";
                                v1.push_back(set[j][1] - 1);
                                set[j][1] = set[j][1] - 1;
                            }
                        }
                        else
                        {
                            cout << set[j][1] << " ";
                            v1.push_back(set[j][1]);
                        }
                        break;
                    }
                    else
                    {
                        if (count(v1.begin(), v1.end(), set[j + 1][0]))
                        {
                            if (count(v1.begin(), v1.end(), set[j][1]))
                            {
                                if (set[j][0] > set[j][1] - 1)
                                    continue;
                                else
                                {
                                    cout << set[j][1] - 1 << " ";
                                    v1.push_back(set[j][1] - 1);
                                    set[j][1] = set[j][1] - 1;
                                }
                            }
                            else
                            {
                                cout << set[j][1] << " ";
                                v1.push_back(set[j][1]);
                            }
                        }
                        else
                        {
                            cout << set[j + 1][0] << " ";
                            v1.push_back(set[j + 1][0]);
                        }
                        break;
                    }
                }
                if (sample[i] >= set[j][0])
                {
                    int p1 = sample[i] - set[j][0];
                    int p2 = set[j][1] - sample[i];
                    int k = min(p1, p2);
                    if (k == p1)
                    {
                        if (count(v1.begin(), v1.end(), set[j][0]))
                        {
                            if (count(v1.begin(), v1.end(), set[j - 1][1]))
                            {
                                if (set[j - 1][0] > set[j - 1][1] - 1)
                                    continue;
                                else
                                {
                                    cout << set[j - 1][1] - 1 << " ";
                                    v1.push_back(set[j - 1][1] - 1);
                                    set[j - 1][1] = set[j - 1][1] - 1;
                                }
                            }
                            else
                            {
                                cout << set[j - 1][1] << " ";
                                v1.push_back(set[j - 1][1]);
                            }
                        }
                        else
                        {
                            cout << set[j][0] << " ";
                            v1.push_back(set[j][0]);
                        }
                    }
                    else
                    {
                        if (count(v1.begin(), v1.end(), set[j][1]))
                        {
                            if (set[j][0] > set[j][1] - 1)
                                continue;
                            else
                            {
                                cout << set[j][1] - 1 << " ";
                                v1.push_back(set[j][1] - 1);
                                set[j][1] = set[j][1] - 1;
                            }
                        }
                        else
                        {
                            cout << set[j][1] << " ";
                            v1.push_back(set[j][1]);
                        }
                    }
                    break;
                }
                else if (sample[i] < set[0][0])
                {
                    cout << set[0][0] << " ";
                    break;
                }
            }
        }
        cout << "\n";
    }
}