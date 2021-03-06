#include <bits/stdc++.h>

using namespace std;
int countingValleys(int n, string s) {

    int sum = 0, count = 0;

    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'U')
            sum++;
        else
            sum--;

        if((sum == 0) && (s[i] == 'U'))
            count++;
    }

    return count;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
