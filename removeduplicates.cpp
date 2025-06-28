#include<iostream>
#include<string>
using namespace std;

void removeduplicates(string str, string ans, int i, bool map[26]){
    if(i == str.size()){
        cout << "ans: " << ans << endl;
        return;
    }
    char ch = str[i];
    int mapIdx = (int)(ch - 'a');
    if(map[mapIdx]){
        removeduplicates(str, ans, i + 1, map);
    } else {
        map[mapIdx] = true;
        removeduplicates(str, ans + ch, i + 1, map);
    }
}

int main(){
    string str = "appnnacollege";
    string ans = "";
    bool map[26] = {false};
    removeduplicates(str, ans, 0, map);
    return 0;
}
