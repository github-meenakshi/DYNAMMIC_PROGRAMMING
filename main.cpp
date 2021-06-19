#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1) {
        cout<<1<<endl;
        return 0;
        }
        if(n==4){
            cout<<2<<" "<<4<<" "<<1<<" "<<3;
            return 0;
            }
    if(n==2 || n==3){
        cout<<"NO SOLUTION"<<endl;
        }
        else{
            int i=1;
    while(i<=n){
        cout<<i<<" ";
        i++;
        i++;
        }
        int j=2;
        while( j<=n){
            cout<<j<<" ";
            j++;
            j++;
            }
        }
        
        return 0;
    }