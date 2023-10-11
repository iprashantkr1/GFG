//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        long long currSum=0 , left=1 , right=K;
        for(int i=0;i<K;i++)
            currSum+=Arr[i];
        long long maxSum=currSum;
        
        while(right<N)
        {
            currSum=(currSum+Arr[right]-Arr[left-1]);
            maxSum=max(maxSum,currSum);
            left++;
            right++;
        }
        return maxSum;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends