#include <bits/stdc++.h>

using namespace std;

int diagonalDifference(vector<vector<int>> arr) {

    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = 0; j < arr[i].size(); j++)
            {
                if(i == j)
                sum1 += arr[i][j];

                if((arr[i].size() - i - 1) == j)
                sum2 +=arr[i][j]; 
            }
    }
    if(sum1 >= sum2)
    return (sum1 - sum2);
    else
    return (sum2 - sum1);

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i].resize(n);

        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = diagonalDifference(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
