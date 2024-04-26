#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0, Q = 0;
    cin >> N >> Q;

    vector<bool> teeth;
    teeth.resize(N, true);

    for (int i = 0; i < Q; i++)
    {
        int T;
        cin >> T;
        teeth[T - 1] = !teeth[T - 1];
    }

    int Answer = 0;
    for (int i = 0; i < N; i++)
    {
        if (teeth[i])
            Answer++;
    }

    cout << Answer;

    return 0;
}