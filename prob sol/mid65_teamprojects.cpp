#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m,k;
    vector<int> team1;
    vector<int> team2;
    vector<int>::iterator it;
    cin>>n>>m>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }
    int a,b;
    int rela[m][2] ;
    for (int i = 0; i < m; i++)
    {
        cin>>a>>b;
        rela[i][0] =a;
        rela[i][1] =b;
        arr[a]+=1;
        arr[b]+=1;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>=k)
        {
            arr[i] =-1;
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (arr[rela[i][0]] ==-1 or arr[rela[i][1]] ==-1)
        {
            
        }
        else
        {
            for (int j = 0; j < sizeof(team1)/sizeof(team1[0]); j++)
            {
                if (team1[j] == rela[i][0] || team2[j] == rela[i][1] || ())
                {
                    team1.push_back(rela[i][0]);
                    team2.push_back(rela[i][1]);
                }
                
            }
            
            
        }
        
        
    }
    
    
    
    return 0;
}