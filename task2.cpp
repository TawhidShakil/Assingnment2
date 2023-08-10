#include<bits/stdc++.h>
using namespace std;
int main(){

vector<int>v;
int n;
cin>>n;
for(int i=0; i<n; i++){
    int a;
    cin>>a;
    v.push_back(a);
}

// sort(v.rbegin(), v.rend());


for(int i=0; i<n; i++){
    if(v[i]>0){
        sort(v.rbegin(), v.rend());
        cout<<v[i]<<" ";
    }else if(v[i] == v[0]){
        cout<<"equal"<<"\n";
    }else{
        cout<<"invalid input"<<"\n";
    }
}



    return 0;
}