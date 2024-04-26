#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0, K = 0;
    cin >> N;

    vector<int> A(N);
    vector<int> I(N);
    vector<int> J(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int a = 0; a < N; a++)
    {
        int i = a;
        int j = a;

        int c = 0;
        for (int b = a; b < N; b++)
        {
            if (A[i] > A[b])
            {
                i = b;  
            }
        }

        if (i != j)
        {

            int buf = A[i];
            A[i] = A[j];
            A[j] = buf;

            I[a]=i;
            J[a]=j;
            K++;
        }
    }

    cout << K << "\n";
    for (int l = 0; l < K; l++)
    {
        cout << J[l] + 1 << " " << I[l] + 1 << "\n";
    }

    return 0;
}