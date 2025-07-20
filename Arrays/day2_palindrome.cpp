class Solution {
public:
    bool isPalindrome(int x) {
       if(x<0) return false;
       long long original = x;
       long long reversed = 0;
       while(x>0) {
        int digit = x%10;
        reversed = reversed*10+digit;
        x=x/10;
       }
       return original == reversed;
    }
    int main() {
    int x;
    // cout << "Enter number: ";
    cin >> x;

    if (isPalindrome(x))
        cout << "true";
    else
        cout << "false";

    return 0;
}
};
