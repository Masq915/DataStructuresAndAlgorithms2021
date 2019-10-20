        //The following code contains the c++ implementation of Binary Search algorithm.
        //Time Complexity: O(log n), where n is the number of elements in the array.
        //Code contributed by Dushyant Pathak(dkp1903)
        #include<bits/stdc++.h>
        using namespace std;

        int BinarySearch(int A[], int N, int low, int high, int key)
        {
            if(high >= low)
            {
                int mid = low + (high - low)/2;
                if(A[mid] == key)
                    return 1;
                else if(A[mid] < key)
                    return BinarySearch(A, N, mid + 1, high, key);
                else
                    return BinarySearch(A, N, low, mid - 1, key);

            }  
            return 0;
        }

        int main()
        {
            int A[5] = {1, 2, 3, 4, 5};
            int key = 6;
            int low = 0;
            int high = 4;
            if(BinarySearch(A, 5, low, high, key))
                cout<<"Element found\n";
            else
                cout<<"Element not found\n";
            return 0;
        }
