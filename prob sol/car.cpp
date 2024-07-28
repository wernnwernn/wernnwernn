#include<iostream>
#include<vector>
#include <utility>
#include <algorithm> 
using namespace std;
int main(){
    vector< pair <int,int> > mixngo;
    int arr[200000] = {0};
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin>>a>>b;
        mixngo.push_back( make_pair(a,b) );
    }

    sort(mixngo.begin(),mixngo.end());
    int ans =0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (mixngo[i].second >= mixngo[j].second)
            {
                if (arr[j] == 0)
                {
                    ans +=1;
                }
                arr[j] = 1;
                
            }
        }
    }
    
    for (int i=0; i<n; i++)
    {
        cout << mixngo[i].first << " "
             << mixngo[i].second << endl;
    }
    cout<<ans;
    return 0;
}





