#include <bits/stdc++.h>

using namespace std;

vector<int> gradingStudents(vector<int> grades) {

    int s = grades.size(), a;
    for(int i = 0; i < s; i++)
    {
        if(grades[i] >= 38)
        {
            a = grades[i] % 5;
            if((5 - a) < 3)
            {   
                grades[i] = grades[i] + (5 - a);
            }
        }
    }
    return grades;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> grades(n);

    for (int grades_itr = 0; grades_itr < n; grades_itr++) {
        int grades_item;
        cin >> grades_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        grades[grades_itr] = grades_item;
    }

    vector<int> result = gradingStudents(grades);

    for (int result_itr = 0; result_itr < result.size(); result_itr++) {
        fout << result[result_itr];

        if (result_itr != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
