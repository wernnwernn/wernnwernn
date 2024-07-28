#include <iostream>
#include <list>
using namespace std;
int main(){
int i,n,ch,x,ch1;
char c;
list<int> ans[100000];
cin >> n;
for(i=0;i<n;i++){
    cin >> c;
    if(c=='N'){
        cin >> x >> ch;
        ans[ch-1].push_back(x);
    }
    else if(c=='M'){
        cin >> ch >> ch1;
        for(auto ptt=ans[ch-1].begin();ptt!=ans[ch-1].end();ptt++ ){
        ans[ch1-1].push_back(*ptt);

    }

        ans[ch-1].clear();


    }
}
for(i=0;i<100000;i++){
for(auto pt=ans[i].begin();pt!=ans[i].end();pt++ ){
    cout << *pt <<"\n";}
}}