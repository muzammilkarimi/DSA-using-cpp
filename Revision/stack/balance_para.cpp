#include <bits/stdc++.h>
using namespace std;
bool balance_para(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (st.empty())
        {
            st.push(s[i]);
        }
        else if ((st.top() == '{' and s[i] == '}') or (st.top() == '(' and s[i] == ')') or (st.top() == '[' and s[i] == ']'))
        {
            st.pop();
        }
        else{
            st.push(s[i]);
        }
    }
    return st.empty();
}
int main()
{
    string para = "{()}";
    if (balance_para(para))
    {
        cout << "Balance" << endl;
    }
    else{
        cout<<"not balance"<<endl;
    }
    return 0;
}