#pragma GCC target("avx")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0, Q = 0;
    vector<int> A;
    vector<int> L;
    vector<int> R;

    cin >> N >> Q;
    A.resize(N);
    L.resize(Q);
    R.resize(Q);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < Q; i++)
    {
        cin >> L[i] >> R[i];
    }

    int Answer = 0;
    int Begin = 0;
    int Length = 0;
    for (int i = 0; i < Q; i++)
    {
        Answer = 0;
        Begin = L[i] - 1;
        Length = R[i] - L[i] + 1;
        for (int j = Begin; j < Begin + Length; j++)
        {
            Answer += A[j];
        }
        cout << Answer << "\n";
    }

    return 0;
}