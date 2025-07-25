class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())return "";
        string prefix = strs[0];
        for(int i = 1;i<strs.size();i++){
            while(strs[i].find(prefix)!=0){
            prefix = prefix.substr(0, prefix.length() - 1);
            if (prefix.empty()) return "";
            }
        }
        return prefix;
    }
    int main() {
    vector<string> strs1 = {"flower", "flow", "flight"};
    vector<string> strs2 = {"dog", "racecar", "car"};

    cout << "Common prefix (Example 1): " << longestCommonPrefix(strs1) << endl;
    cout << "Common prefix (Example 2): " << longestCommonPrefix(strs2) << endl;

    return 0;
}
};
