#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
    int x,y,z,N;
    cout<<"enter the number of triples"<<endl;

    cin>>N;
    for(int j=0;j<N;j++){

       cin>>x>>y>>z;
       
      if(x<y && y<z ){
          cout<<y<<endl;
      }
      if(x<z && z<y ){
          cout<<z<<endl;
      }
      if(y<x && x<z ){
          cout<<x<<endl;
      }
      if(y<z && z<x ){
          cout<<z<<endl;
      }
      if(z<y && y<x ){
          cout<<y<<endl;
    }
      if(z<x && x<y ){
          cout<<x<<endl;
    }
    
     
    }
    
    
}