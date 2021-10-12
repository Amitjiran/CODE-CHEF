#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int arr[n];
        int temp[n];
        for(int i=1;i<=n;i++){

            cin>>arr[i-1];
            temp[i]=arr[i];
            

            if(arr[i-1]==arr[i]){
                cout<<"fight:("<<endl;

            
            }
            if(arr[i-1]!= arr[i]){
                cout<<"peace:)"<<endl;
            }
            
        }
        

    }
}



/*if(arr[i]==arr[i+1]){
                cout<<"fight:("<<endl;

            
            }
            if(arr[i]!== arr[i+1]){
                cout<<"peace:)"<<endl;
            }*/