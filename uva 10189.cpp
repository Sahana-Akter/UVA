#include <bits/stdc++.h>
using namespace std;
int main()
{
    char mf[100][100];
    string s;
    int x[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
    int y[8] = {0, 1, 1, 1, 0, -1, -1, -1};
    int n, m, c = 0, i, j, k, ax, ay, nx, ny;
    while (cin >> n >> m)
    {
        if (n == 0 && m == 0)
        {
            break;
        }
        else
        {
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < m; j++)
                {
                    cin >> mf[i][j];
                }
            }
            int temp = 0;
            if (c)
                cout << endl;
            c++;
            cout << "Field #" << c << ":" << endl;
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < m; j++)

                {
                    if (mf[i][j] == '*')
                    {
                        cout << "*";
                        continue;
                    }
                    else
                    {
                        ax = i;
                        ay = j;
                        for (k = 0; k < 8; k++)
                        {
                            nx = ax + x[k];
                            ny = ay + y[k];
                            if ((nx >= 0 && nx < n) && (ny >= 0 && ny < m))
                            {
                                if (mf[nx][ny] == '*')
                                {
                                    temp++;
                                }
                                else
                                {
                                    continue;
                                }
                            }

                            nx = 0;
                            ny = 0;
                        }
                        cout << temp;
                        temp = 0;
                    }
                }
                cout << endl;
            }
        }
    }
}
