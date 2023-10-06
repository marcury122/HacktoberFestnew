#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin>>t;
    for(int testc=1;testc<=t;++testc){
        double a,b,c;
        cin>>a>>b>>c;
        double diff = abs(a - b);
        double moves = (diff/2)/c;
        int x = moves - 0;
        if(x<moves) cout<<x+1<<endl;
        else cout<<x<<endl;
    }

    return 0;
}