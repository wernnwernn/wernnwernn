#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b;
    int arr[n] ;
    for (int i = 0; i < n; i++)
    {
        arr[i] =0;
    }
    
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        for (int j = a-1; j <= b-1; j++)
        {
            arr[j]+=1;
        }
    }
    int min =9999;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<min)
        {
            min = arr[i];
        }
        
    }
    cout<<min;

    return 0;
}