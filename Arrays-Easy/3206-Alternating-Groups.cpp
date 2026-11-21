class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& arr) {
        int n = arr.size() ;
        int count = 0;
        for(int i=0;i<n;i++){
            if(arr[(i+1)%n]!=arr[i] && arr[(i-1+n)%n]!= arr[i]){
                count++;
            }
        }
        return count;     
    }
};