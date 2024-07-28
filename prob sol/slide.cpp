#include <iostream>
using namespace std;
int main(){
    int n,a,ans=0;
    cin >>n;
    int arr[n] ;
    cin >> arr[0];
    for (int i = 1; i < n; i++)
    {
        cin>>a;
        arr[i] = a;
        for (int j = 0; j < i; j++)
        {
            if (arr[i]>arr[j])
            {
                ans+=1;
            }
            
        }
        
    }
    cout<< ans;

    return 0;
}