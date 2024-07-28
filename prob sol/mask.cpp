#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;
int max(int a, int b){
    int max = a;
    if (max < b)
    {
        max =b;
    }
    
    return max;
}
int min(int a, int b){
    int min = a;
    if (min > b)
    {
        min =b;
    }
    
    return min;
}
int main(){
    int n;
    cin>>n;
    int arr1[n+2] , arr2[n+2], arr3[n+2], arr4[n+2], arrmax[4*n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
        arrmax[i] = arr1[i];
    }
        for (int i = 0; i < n; i++)
    {
        cin>>arr2[i];
        arrmax[i+n] = arr2[i] ;
    }
        for (int i = 0; i < n; i++)
    {
        cin>>arr3[i];
        arrmax[i+2*n] = arr3[i];
    }
        for (int i = 0; i < n; i++)
    {
        cin>>arr4[i];
        arrmax[i+3*n] = arr4[i];
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n);
    sort(arr3, arr3 + n);
    sort(arr4, arr4 + n);
    int subans1,subans2;
    subans1 = max(arr1[n-1],arr2[n-1]);
    subans2 = max(arr3[n-1],arr4[n-1]);
    int t1,t2,p1,p2;
    t1 = max(subans1,subans2);
    t2 = min(subans1,subans2);
    p1 = min(arr1[n-1],arr2[n-1]);
    p2 = min(arr3[n-1],arr4[n-1]);
    int numt1,numt2,nump1,nump2 ;
    for (int i = 0; i < 4*n; i++)
    {
        if (arrmax[i]==t1)
        {
            numt1 = i+1;
        }
        else if (arrmax[i]==t2)
        {
            numt2 = i+1;
        }
        else if (arrmax[i]==p1)
        {
            nump1 = i+1;
        }
        else if (arrmax[i]==p2)
        {
            nump2 = i+1;
        }
        
        
    }
    
    // cout<<subans1;
    // cout<<subans2;
    cout<<t1<<" "<<t2<<" "<<p1<<" "<<p2<<" ";
    cout<<numt1<<" "<<numt2<<" "<<nump1<<" "<<nump2;
    // cout<< max(12,15);
    return 0;
}