class Solution {
public:
bool possible(vector<int>& bloomDay,int day, int m, int k){
    int cut=0, nB=0;
    int n=bloomDay.size();
    for(int i=0;i<n;i++){
        if(bloomDay[i]<=day)
        cut++;
        else{
            nB+=cut/k;
            cut=0;
        }
    }
    nB+=cut/k;
    if(nB>=m) return true;
    else return false;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int ans=high;
        int n = bloomDay.size();
        if(1LL * m * k > n) return -1;
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(bloomDay,mid,m,k)==true){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};