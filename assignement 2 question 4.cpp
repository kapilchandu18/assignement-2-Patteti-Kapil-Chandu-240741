int Solution::solve(vector<int> &P, int Q) {
    sort(P.begin(),P.end());
    int min=0,max=P[P.size()-1],result=0;
    while(min<=max){
        int mid=min+(max-min)/2;
        long long wood=0;
        for(int i=0;i<P.size();i++){
            if(P[i]>mid){
                wood+=(P[i]-mid);
        }
        }
        if(wood>=Q) {
            result=mid;       
            min=mid+1;     
        }else{
            max=mid-1;    
        }
    }

    return result;
    }