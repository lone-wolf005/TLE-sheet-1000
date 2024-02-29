//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void Radhe(){
 ll t;
 cin>>t;
 while(t--){
     int n;
     cin>>n;
     string s;
     cin>>s;
     unordered_set<char>s1;
     vector<int>dist(n,0);
     for(int i=n-1;i>=0;i--){
           s1.insert(s[i]);
           dist[i]=s1.size();
     }
     int ans = -1;
     unordered_set<char>s2;
     for(int i=0;i<n-1;i++){
        s2.insert(s[i]); 
        int ans2 = s2.size()+dist[i+1];
        ans = max(ans,ans2);  
     }
     cout<<ans<<endl;
 }
}
int main(){
Radhe();
return 0;
}