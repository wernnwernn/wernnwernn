#include <iostream>
#include<vector>
#include <algorithm> 
using namespace std;
int main(){
    vector<int> price,sum_price;
    vector<int>::iterator ip;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        price.push_back(a);
    }
    for (int k = n; k >0 ; k--)
    {
        for (int i = 0; i < k; i++)
        {
            int sum =0;
            for (int j = i; j < k; j++)
            {
                sum+=price[j];
            }
            sum_price.push_back(sum);
        }
    }
    sort(sum_price.begin(),sum_price.end());
    int ans =0;
    sum_price.push_back(99999999);
    for (int i = 0; i < sum_price.size()-1; i++)
    {
        if (sum_price[i] == sum_price[i+1])
        {
            // pass;
        }
        else{
            ans+=1;
        }
    }
    cout<<ans;
    
    return 0;
}