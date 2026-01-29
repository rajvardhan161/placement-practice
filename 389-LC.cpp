class Solution {
public:
    char findTheDifference(string s, string t) {
      int ansxor =0;
      for(int i =0;i<s.size();i++){
        ansxor = ansxor^s[i];
      }
      for(int i =0;i<t.size();i++){
        ansxor = ansxor^t[i];
      }
    return (char) (ansxor);
    }
};
