#include <bits/stdc++.h>

using namespace std;

int pageCount(int n, int p) {

    int front, back;
    front = p / 2;
    if(n % 2 == 0)
    back = ((n - p + 1) / 2) ;
    else
    back = (n - p) / 2;
    if (front < back) return front;
    else return back;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
