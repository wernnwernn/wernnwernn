#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a,b,w;
    int v[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            v[i][j] = 999;
        }
        
    }
    
    for (int i = 0; i < m; i++)
    {
        cin>>a>>b>>w;
        v[a-1][b-1] =w;
        v[b-1][a-1] =w;
    }
    int index=0;
    int ans =0;
    int next,min,min_old=0;
    int index_old=0;
    while (true)
    {
        min = v[0][index];
        for (int i = 1; i < n; i++)
        {
            if (min>v[i][index])
            {
                min = v[i][index];
                next = i;
            }
        }
        if (index_old == next)
        {
            break;
        }
        index_old = index;
        index = next;

        ans += min;
        min_old = min;
        // cout<<"min = "<<min<<"ans_now = "<<ans<<"next = "<<next<<'\n';
    }
    
    cout<<ans;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    
    return 0;
}