int Solution::searchInsert(vector<int> &P, int Q) {
    int left=0,right=P.size()-1;
    while(left<=right){
    int mid=left+(right-left)/2;
    if(P[mid]==Q)   return mid;
    else if(P[mid]>Q)    right=mid-1;
    else if(P[mid]<Q)    left=mid+1;
    }
    return left;
    
}