#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a;
    int arr[n] ;
    int b = (n)*(n-1)/2;
    int sum [b][3];
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        arr[i] =a;
    }

// Check arr
    // cout<<"Checkarr"<<"\n";
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<" \n";
// done
    int k=0;
    for(int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++)
        {
            sum[k][0] = arr[i]+arr[j];
            sum[k][1] = i;
            sum[k][2] = j;
            k++;
        }
    }
    // CheckBeforeSort
    // cout<<"CheckBeforeSort"<<"\n";
    // for (int i = 0; i < b; i++)
    // {
    //     cout<<sum[i][0]<<","<<sum[i][1]<<","<<sum[i][2]<<"   ";
    // }
    // cout<<"\n";
    //done
    for(int j=0;j<b;j++)
    {
        for (int i = 0; i < b; i++)
        {
            if(sum[i][0]<sum[i+1][0])
            {
                int temp0=sum[i][0];
                int temp1=sum[i][1];
                int temp2=sum[i][2];
                sum[i][0]=sum[i+1][0];    
                sum[i][1]=sum[i+1][1];    
                sum[i][2]=sum[i+1][2];    
                sum[i+1][0]=temp0;
                sum[i+1][1]=temp1;
                sum[i+1][2]=temp2;
            }
        }
        
    }
    // CheckAfterSort
    // cout<<"CheckAfterSort"<<"\n";
    // for (int i = 0; i < b; i++)
    // {
    //     cout<<sum[i][0]<<","<<sum[i][1]<<","<<sum[i][2]<<"   ";
    // }
    // cout<<"\n";
    //done
    int aa = 0;
    for (int i = 0; i < b-1; i++)
    {
        if (sum[i][0] - sum[i+1][0] ==0 
            && sum[i][1] != sum[i+1][1] 
            && sum[i][2] != sum[i+1][2])
        {
            cout<<sum[i][0];
            aa = 1;
            break;
        }
        
    }
    if (aa==0){
    cout<<'0';
    }
    return 0;
}