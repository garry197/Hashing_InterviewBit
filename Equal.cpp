// https://www.interviewbit.com/problems/equal/

vector<int> Solution::equal(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    unordered_map <int, vector<int> > map;
    vector<int> ans;
    vector<int> tmp;
    
    int count = 0;
    
    for(int i = 0; i < A.size()-1; i++){
        for(int j = i+1; j < A.size(); j++){
            int sum = A[i] + A[j];
            if(map.find(sum) == map.end()){
                map[sum].push_back(i);
                map[sum].push_back(j);
            }
            else{
                tmp.push_back(map[sum][0]);
                tmp.push_back(map[sum][1]);
                tmp.push_back(i);
                tmp.push_back(j); 
                for(int a = 0; a < tmp.size()-1; a++){
                    for(int b = a+1; b < tmp.size(); b++){
                        if(tmp[a] == tmp[b]){
                            goto COND;
                        }
                    }
                }
                count++;
                if(count == 1){
                    ans = tmp;
                }
                else{
                    for(int z = 0; z < ans.size(); z++){
                        if(ans[z] > tmp[z]){
                           ans = tmp;
                           break;
                        }    
                        else if(ans[z] < tmp[z]){
                            break;
                        }
                    }
                }
                COND:tmp.erase(tmp.begin(), tmp.end());
            }
        }
    }
    
    return ans;
}