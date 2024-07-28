#include<iostream>
#include <stdlib.h> 
using namespace std;
int main(){
    int n;
    cin >> n;
    long arr[n];
    long def[n-1];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        def[i] = arr[i+1] - arr[i];
    }
    long sumdef[n];
    sumdef[0] = abs(def[0]);
    sumdef[n-1] = abs(arr[n-1] - arr[n-2]);
    for (int i = 1; i < n-1; i++)
    {
        sumdef[i] = abs(def[i])+abs(def[i-1]);
    }
    long max_def =-99;
    long max_def_index;
    long sub_max_def =-99;
    long sub_max_def_index;

    for (int i = 0; i < n; i++)
    {
        if (sumdef[i]>max_def)
        {
            max_def = sumdef[i];
            max_def_index = i;
            sumdef[i] =0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (sumdef[i]>max_def)
        {
            sub_max_def = sumdef[i];
            sub_max_def_index = i;
            sumdef[i] =0;
        }
    }

    long mean = (arr[max_def_index+1] +arr[max_def_index-1])/2;
    long mean_def=9999999999;
    long mean_def_index;
    for (int i = 0; i < n; i++)
    {
        long pre_mean_def = abs(arr[i] - mean);
        if (i == max_def_index+1 or i == max_def_index-1)
        {
            
        }
        
        else if (pre_mean_def<mean_def)
        {
            mean_def = pre_mean_def;
            mean_def_index = i;
        }
    }
    arr[max_def_index] = arr[mean_def_index];
    long ans=0;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<' ';
    // }
    for (int i = 0; i < n-1; i++)
    {
        ans+=abs(arr[i+1]-arr[i]);
    }

    long sub_mean = (arr[max_def_index+1] +arr[max_def_index-1])/2;
    long sub_mean_def=9999999999;
    long sub_mean_def_index;
    for (int i = 0; i < n; i++)
    {
        long sub_pre_mean_def = abs(arr[i] - sub_mean);
        if (i == sub_max_def_index+1 or i == sub_max_def_index-1)
        {
            
        }
        
        else if (sub_pre_mean_def<sub_mean_def)
        {
            sub_mean_def = sub_pre_mean_def;
            sub_mean_def_index = i;
        }
    }
    long ans2=0;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<' ';
    // }
    for (int i = 0; i < n-1; i++)
    {
        ans2+=abs(arr[i+1]-arr[i]);
    }
    if (ans>ans2)
    {
        cout<<ans;
    }
    else
    {
        cout<<ans2;
    }
    

    return 0;
}