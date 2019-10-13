    //Iterative implementation of Binary Search in C++
    
    #include<bits/stdc++.h>
    using namespace std;
    
    int binarySearch(int A[], int n , int low, int high, int key)
    {
        int mid;
        while(high >= low)
        {
            mid = low + (high - low)/2;
            if(A[mid] == key)
                return 1;
            else if(A[mid] < key)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return 0;
    }
    
    int main()
    {
        int A[5] = {1, 2, 3, 4, 5};
        int low = 0, high = 4;
        int key = 3;
        
        if(binarySearch(A, 5, low, high, key))
            cout<<"Element found\n";
        else
            cout<<"Element not found\n";
            
        return 0;
    }
