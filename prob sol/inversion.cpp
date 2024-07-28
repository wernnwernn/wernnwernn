#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    vector<int> vi;
    vector<int>::iterator it;
    int ans=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        long long a;
        cin>>a;
        vi.push_back(a);
        for (int j = 0; j < i; j++)
        {
            if (vi[i]<vi[j])
            {
                ans+=1;
            }
        }
    }
    cout<<ans;
    
    return 0;
}