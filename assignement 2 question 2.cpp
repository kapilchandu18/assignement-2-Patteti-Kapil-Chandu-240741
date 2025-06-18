int Solution::findMin(const vector<int> &P) {
   int left=0,right=P.size()-1;
    while(left<right){
        int mid=left+(right - left) / 2;
        if (P[mid] > P[right]){
            left = mid + 1;
        }else {
            right = mid;
        }
    }
    return P[left]; 
}