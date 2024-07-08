#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<string>valid;
void generate(string &s,ll op,ll cl)
{
    if(op==0&&cl==0)
    {
        valid.push_back(s);
        return;
    }
    if(op>0)
    {
        s.push_back('(');
        generate(s,op-1,cl);
        s.pop_back();
    }
    if(cl>0&&op<cl)
    {
        s.push_back(')');
        generate(s,op,cl-1);
        s.pop_back();
    }
}
int main()
{
    ll n;
    cin>>n;
    string s;
    generate(s,n,n);
    for(auto u:valid)cout<<u<<" ";

}
