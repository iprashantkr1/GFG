//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int maxSumKadane(int arr[],int n)
    {
        int maxSum=arr[0] , maxEnding=arr[0];
        for(int i=1;i<n;i++)
        {
            maxEnding=max(maxEnding+arr[i],arr[i]);
            
            maxSum=max(maxSum,maxEnding);
        }
        return maxSum;
    }
    
    int circularSubarraySum(int arr[], int n){
        
        // your code here
        int maxNormal=maxSumKadane(arr, n);
        
        if(maxNormal < 0)
            return maxNormal;
            
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            arr[i]=-arr[i];
        }
        
        int maxInverted=maxSumKadane(arr, n);
        int minNormal=-maxInverted;
        int maxCircular=sum-minNormal;
        
        int res=max(maxNormal,maxCircular);
        
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends