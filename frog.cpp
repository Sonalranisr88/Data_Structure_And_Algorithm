class Solution {
public:
    bool canCross(vector<int>& stones) {
        if(stones[1]-stones[0]>1)
            return false;
        
        return func(0, 1, stones);
    }
    
    bool func(int i, int jumps, vector<int> &stones){
        if(i==stones.size()-1)
            return true;
            
        bool ans=false;
        for(int ind=i+1; ind<stones.size(); ind++){
            if(stones[ind]-stones[i]>jumps+1)
                break;
            for(int t=-1; t<2; t++){
                if(stones[ind]-stones[i]==jumps+t)
                    ans = func(ind, jumps+t, stones) || ans;
            }
        }
    
        return ans;
    }
};