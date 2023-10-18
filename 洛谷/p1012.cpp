#include<bits/stdc++.h>
using namespace std;

bool cmp(string &a, string &b)
{
    return (a+b > b+a);
}
int main()
{
    string arr[21];
    int n = 0;
    cin >> n ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i] ;
    }
    sort(arr,arr+n,cmp);
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] ;
    }
}
// string s[21];int n;
// bool cmp(const string &a,const string &b) { // &表示引用
//     return (a+b > b+a);
// }
// int main(void) {
//     cin >> n;
//     for(int i=1;i<=n;++i) cin >> s[i];
//     sort(s+1,s+n+1,cmp);
//     for (int i=1;i<=n;++i) cout << s[i];
//     return 0;
// }