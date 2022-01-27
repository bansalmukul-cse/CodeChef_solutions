#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s1 = "abcdefghijklmnopqrstuvwxyz";

    while (t--)
    {
        string s = "";
        int l = 0;
        cin >> l;
        int i = 0;
        while (l--)
        {
            s += s1[i];
            if (i == 25)
            {
                i = 0;
            }
            i++;
        }
        cout << s <<endl;
    }
    return 0;
}
