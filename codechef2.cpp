#include <bits/stdc++.h>
using namespace std;
int main()

{
    int T;
    cin >> T;
    while (T--)
    {
    

        int n;
         // length of string
        string S;
        cin>>n;
        cin>>S;
        bool ans = true;
        int count = 0; // for the
        int count1 = 0;
        for (int i = 0; i < n; i++)
        {

            if ((S[i] != '(') || (S[i] != ')'))
            {
                ans = false;
            }
            if (S[i] =='(')
            {

                count++;
            }
            if (S[i] == ')')
            {
                count1++;
            }
        }
        if (ans = false)
        {
            cout << "0" << endl;
        }

            if (count >= count1)
            {

                cout << count1 * 2 << endl; // we only write balanced parenthesis
            }

            else
            {
                cout << count * 2 << endl;
            }
        }
    

return 0;
}