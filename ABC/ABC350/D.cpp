#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> A(M);
    vector<int> B(M);
    vector<vector<bool>> f(N);
    for (int n = 0; n < N; n++)
    {
        f[n].resize(N, false);
        f[n][n] = true;
    }

    for (int i = 0; i < M; i++)
    {
        cin >> A[i] >> B[i];
        f[A[i] - 1][B[i] - 1] = true;
    }

    int ans = 0;
    for (int a = 0; a < N; a++)
    {
        for (int b = a + 1; b < N; b++)
        {

            if (f[a][b] == true)
            {
                for (int c = b + 1; c < N; c++)
                {
                    if (f[b][c] == true && f[a][c] == false)
                    {
                        f[a][c] = true;
                        ans++;
                    }
                }
            }
        }
    }

    cout << ans;

    return 0;
}