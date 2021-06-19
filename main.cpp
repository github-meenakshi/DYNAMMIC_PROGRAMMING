#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <math.h>
#include <iomanip>
#include <map>
#include <set>
using namespace std;
//Knapsack problem through Recursion(Without DP)
int knapSack(int wt[ ],int val[ ],int W,int n){
    //Base Condition
    if(W == 0 || n == 0) return 0;
    //This consition checks for the elements that have more weight than the remaining
    //capacity of Knapsack Bag
    if(wt[n-1]>W) return knapSack(wt,val,W,n-1);
    //This condition checks for the elements that have less than or equal weight than the
    //remaining capacity of Knapsack Bag
    
    //First Call of knapSack function represents when we include that particular value instance
   //and second call of knapSack function represents when we do not include particular value instance
   //and then we return the maximum value between both of them.  
    else{
        return max(val[n-1]+knapSack(wt,val,W-wt[n-1],n-1),knapSack(wt,val,W,n-1));
        }
    }
//n->number of elements 
//W->Weight Capacity of Knapsack Bag
//wt[ ]->weight array that contains weights of elements
//val[ ]->value array that contains values of elements 
int main(){
    int n , W;
    cin >> n >> W;
    int wt[n];
    int val[n];
    for( int i = 0 ; i < n ; i++ ){
        int x , y;
        cin >> x >> y;
        wt[i] = x;
        val[i] = y;
        }
        int ans = knapSack( wt , val , W , n );
        cout<<ans<<endl;
    }