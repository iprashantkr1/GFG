//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int toyCount(int N, int K, vector<int> arr)
    {
        // code here
        priority_queue<int, vector<int>, greater<int>>pq(arr.begin(),arr.end());
        int count=0;
        while(K>=0 && pq.empty()==false){
            if(pq.top()<=K){
                count++;
                K-=pq.top();
                pq.pop();
            }
            else{
                return count;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, K;
        cin>>N>>K;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.toyCount(N, K, arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends