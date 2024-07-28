#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    
    vector<int> arr;
    for (int i = 0; i < m; i++)
    {
        arr.push_back(0);
    }

    int a,b;
    int connectnum =0;
    int line =1;
    for (int i = 0; i < m; i++)
    {
        cin>>a>>b;
        if (arr[a] == arr[b] ==0)
        {
            cout<<"เข้าcase a = b =0";
            arr[a] = line;
            arr[b] = line;
            line++;
        }
        else if (arr[a] ==0 || arr[b]==0)
        {
            if (arr[a] ==0)
            {
                arr[a] = arr[b];
            }
            else{
                arr[b] = arr[a];
            }
            
        }
        else
        {
            if (arr[a]>arr[b])
            {
                for (int j = 0; i < n; i++)
                {
                    if (arr[j] ==arr[a])
                    {
                        arr[j] = arr[b]; 
                    }
                    
                }
                
            }
            else if (arr[a]<arr[b])
            {
                for (int j = 0; i < n; i++)
                {
                    if (arr[j] ==arr[b])
                    {
                        arr[j] = arr[a]; 
                    }
                    
                }
            }
            
            
        } 
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
    

    return 0;
}