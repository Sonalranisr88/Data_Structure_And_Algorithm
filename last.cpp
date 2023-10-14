class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& words) {
        vector<int> v;
        int k=0;
        vector<int > ans; 
        
        for(int i=0;i< words.size(); i++){
            
            if(words[i]=="prev") {
                  k++;
                if ( v.size() < k){
                    ans.push_back(-1);
                } else {
                    int n = v.size();
                    int val = v[n-k];
                    ans.push_back(val);
                }
            }
            else{
                v.push_back(stoi(words[i]));
                k=0;
            }
        }
        return ans;
        
    }
};