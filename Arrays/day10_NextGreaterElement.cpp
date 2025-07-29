class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> nextGreaterMap;
        stack<int>st;
        for(int num:nums2){
            while(!st.empty()&& num>st.top()){
                nextGreaterMap[st.top()]=num;
                st.pop();
            }
            st.push(num);
        }
        while(!st.empty()){
            nextGreaterMap[st.top()]=-1;
            st.pop();
        }
        vector<int>result;
        for(int num:nums1){
            result.push_back(nextGreaterMap[num]);
        }
        return result;
    }
    };
