
1272 C - Yet Another Broken Keyboard.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ldb = long double;
using pa = pair < ll, ll >;
using vec = vector < ll >;
#define pb push_back
#define F  first
#define S  second
#define int ll
#define f(i,x,n) for(ll i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
#define edl "\n"
#define ceils(s,n) (s+n-1)/n
#define str string
#define add insert
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
const int MOD = 1e9 + 7, N = 1e5 + 10;
const ll LINF = LLONG_MAX;
int32_t main() {
    fast();
   int n,a;
   cin >> n >> a;
   str s;
   cin >> s;
   set<char>sets;
   f(i,0,a){
        char ch;
        cin >> ch;
        sets.add(ch);
   }
   int c=0,re=0;
    f(i,0,n){
        if(sets.find(s[i])!=sets.end()){
            c++;
        }
        else{
            re+=c*(c+1)/2;
            c=0;
        }
    }
   
    re+=c*(c+1)/2;
    cout<<re;

   




}  


