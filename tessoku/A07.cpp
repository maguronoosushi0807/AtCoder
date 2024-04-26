#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int D = 0, N = 0;
    vector<int> L;
    vector<int> R;
    cin >> D >> N;

    L.resize(N);
    R.resize(N);

    for (int i = 0; i < N; i++)
    {
        cin >> L[i] >> R[i];
    }

    vector<int> Answer;
    Answer.resize(D, 0);
    for (int i = 0; i < N; i++)
    {
        int begin = L[i] - 1;
        int end = begin + (R[i] - L[i]) + 1;
        for (int j = begin; j < end; j++)
        {
            Answer[j]++;
        }
    }

    for (int i = 0; i < D; i++)
    {
        cout << Answer[i] << "\n";
    }

    return 0;
}