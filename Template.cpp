#include<bits/stdc++.h>
using namespace std;

#define int                 long long int
#define loop0(i,b)          for(int i=0;i<b;i++)
#define loop(i,a,b)         for(int i=a;i<b;i++)
#define TC(t)               int t;cin>>t;while(t--)
#define pb                  push_back
#define Input(arr,s,e)      vector<int> arr(e);loop(i,s,e){cin>>arr[i];}
#define Output(arr,s,e)     loop(i,s,e){cout<<arr[i]<<" ";}
#define ff                  first
#define ss                  second
#define mp                  make_pair
#define full(a)             a.begin(),a.end()
#define WorldShallKnowPain  ios_base::sync_with_stdio(false);cin.tie(NULL);

const int inf=1e18;
const int mod=1e9+7;
const int Len=2e5+10;

bool compare(pair<int,int> a,pair<int,int> b)
{
    if(a.ss==b.ss){return a.ff>b.ff;}
    else{return a.ss<b.ss;}
}

signed main()
{
    WorldShallKnowPain
}
