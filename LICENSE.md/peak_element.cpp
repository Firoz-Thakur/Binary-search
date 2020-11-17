https://practice.geeksforgeeks.org/problems/find-the-highest-number2259/1/?category[]=Binary%20Search&page=1&query=category[]Binary%20Searchpage1#


Given an array in such a way that the elements stored in array are in increasing order initially and then after reaching to a peak element , elements stored are in decreasing order. Find the highest element.
Note: A[i] != A[i+1]
 

Example 1:

Input:
11
1 2 3 4 5 6 5 4 3 2 1
Output: 6
Explanation: Highest element is 6.
Example 2:

Input:
5
1 2 3 4 5
Output: 5
Explanation: Highest element is 5.

\
\\\\int findPeakElement(vector<int>& ar) 
    {
        // Code here.
        int i=0;
        int j=ar.size()-1;
        while(i<=j)
        {
            int mid=(i+j)/2;
            
            if(ar[mid]>ar[mid-1] && ar[mid]>ar[mid+1])
             return ar[mid];
            else if(ar[mid]>ar[mid+1])
             j=mid-1;
            else
             i=mid+1;
        }
    }
