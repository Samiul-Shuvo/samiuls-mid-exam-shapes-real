#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define jore_cholo  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
  
#define ordered_set tree<pair<ll,ll>, null_type,less<pair<ll,ll>>, rb_tree_tag,tree_order_statistics_node_update>
int main()
{
    jore_cholo
   
   
      ll i,t,n,m,y,c,x,cnt,j;
      
      string s,s1;
      ll mx=-1;
      cin>>t;
      while(t--)
     {
          cin>>n>>s;
          
          map<char,ll>mp;
          for(i=0;i<n;i++)
          mp[s[i]]++;
          
          if(mp.size()!=26)
           {
               for(i=0;i<26;i++)
                 {
                      if(i+'a'==0)
                       {
                         cout<<char(i+'a')<<endl; break;
                        }
                  }
            }
          
          ll f=0;
          vector<string>vs={""};
          for(i=0;i<vs.size();i++)
          {
                string ans = vs[i];
                for(j=0;j<26;j++)
                {
                      ans.pb(char(j+'a'));
                      if(s.find(ans)==-1)
                      {
                            cout<<ans<<endl; f=1;break;
                      }
                      vs.pb(ans);
                      ans = vs[i];
                }
                if(f)break;
          }
       
       
       
       
     }
     
    
    return 0;
}