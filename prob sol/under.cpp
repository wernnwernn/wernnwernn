#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int l,n;
    int mixza[610] = {0};
    cin>>l>>n;
    int a,b;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        for (int i = 2*a+1; i < 2*b; i++)
        {
            mixza[i] +=1;
        }
    }
    int max=-1;
    for (int i = 0; i < 610; i++)
    {
        if (mixza[i]> max)
        {
            max = mixza[i];
        }
        
    }
    // for (int i = 0; i < 610; i++)
    // {
    //     cout<<mixza[i]<<' ';
    // }
    cout<<max;
    
    
    
    return 0;
}
