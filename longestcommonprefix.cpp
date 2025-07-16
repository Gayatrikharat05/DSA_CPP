#include<iostream>
#include<vector>
using namespace std;
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())return "";
        

        string ans="";
        int n=strs.size();
        for(int i=0;i<strs[0].length();i++){
            char ch=strs[0][i];
        bool match=true;
        for(int j=1;j<n;j++){
            if(i>=strs[j].length() || strs[j][i] !=ch){
                match=false;
                break;
            }
        }
        if(!match)
        break;
        else 
        ans.push_back(ch);
        
    }
    return ans;
    }
    int main(){
        vector<string> strs={"flower","flow","flop"};
        cout<<"longest Common Prefix Here is: "<<longestCommonPrefix(strs);
        return 0;
    }
