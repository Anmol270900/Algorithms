#include <bits/stdc++.h>

using namespace std;


    string timeConversion(string t) {
    
    string h={};
    string m={};
    string s1={};
    string fin={};
    int hh=0;
    h+=t[0];
    h+=t[1];
    hh=atoi(h.c_str());
    m+=t[3];
    m+=t[4];
    s1+=t[6];
    s1+=t[7];
    if(t[8]=='A' && hh!=12){
        fin=h+':'+m+':'+s1;
    }
    else if(t[8]=='P' && hh!=12){
        hh+=12;
        h=to_string(hh);
        fin=h+':'+m+':'+s1;
    }
    else if(t[8]=='P' && hh==12){
        fin="12:"+m+":"+s1;
    }
    else if(t[8]=='A' && hh==12){
        fin="00:"+m+":"+s1;
    }
    return fin;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
