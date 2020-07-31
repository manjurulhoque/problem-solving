class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int n = A.size();
        int l = 0;
        int r = n - 1;
        int mid;
        while(l<=r)
        {
            mid = l + (r - l) / 2;
            if(A[mid] > A[mid-1] && A[mid] > A[mid+1])
                return mid;
            else if(A[mid] > A[mid-1] && A[mid] < A[mid+1])
                l = mid + 1;
            else
                r = mid - 1;
        }
        return mid;
    }
};
