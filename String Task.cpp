#include<bits/stdc++.h>
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

bool vowelOrNot(char c)
{    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y' );
}
int main()
{
    op();
    string s,ans;
    cin>>s;

    for(auto u: s)
    {
        char c = tolower(u);
        if(vowelOrNot(c)==0)
        {
            ans += '.';
            ans += c;
        }
    }
    cout<< ans<<endl;
    return 0;
}

