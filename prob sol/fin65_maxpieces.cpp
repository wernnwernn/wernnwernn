#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n ,q;
    cin>>n>>q;
    int a[n];
    vector<int> vi;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int b;
        cin>>b;
        vi.push_back(b);
    }
    sort(vi.begin(), vi.end());
    for (int i = 0; i < q; i++)
    {
        int x,y;
        int num = 0;
        cin>>x>>y;
        int aa =0;
            while (x>=vi[aa])
            {
                if (aa==n)
                {
                    break;
                }
                
                if (vi[aa]>=y)
                {
                num+=1;
                    x = x-vi[aa];
                    // cout<<x<<" "<<vi[aa]<<" ";
                }
                
                aa++;
                // cout<<x<<" ";
                if (x==0)
                {
                    break;
                }
                
            }
        ans.push_back(num);
    }
    for (int x : ans)
    cout << x << " ";

    
    
    return 0;
}