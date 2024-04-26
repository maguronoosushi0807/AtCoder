#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int H = 0, W = 0;
    vector<vector<int>> X;
    cin >> H >> W;

    X.resize(H);
    for (int y = 0; y < H; y++)
    {
        X[y].resize(W);
        for (int x = 0; x < W; x++)
        {
            cin >> X[y][x];
        }
    }

    int Q = 0;
    cin >> Q;

    for (int i = 0; i < Q; i++)
    {
        int A = 0, B = 0, C = 0, D = 0;
        cin >> A >> B >> C >> D;

        int Answer = 0;
        int begin_x = A - 1;
        int begin_y = B - 1;
        int w = C - A + 1;
        int h = D - B + 1;

        for (int y = 0; y < h; y++)
        {
            for (int x = 0; x < w; x++)
            {
                Answer += X[begin_y + y][begin_x + x];
            }
        }

        cout << Answer << endl;
    }

    return 0;
}