//Multiply Strings
//Here is the link 
//     https://leetcode.com/problems/multiply-strings/
class Solution {
public:
    string multiply(string num1, string num2) {
        int n1=num1.size();
        int n2=num2.size();
        if(num1=="0" or num2=="0")
        return "0";
        vector<int>res(n1+n2,0);
        for(int i=n1-1;i>=0;i--)
        {
            for(int j=n2-1;j>=0;j--)
            {
                int pro=(num1[i]-'0')*(num2[j]-'0');
                int sum=pro+res[i+j+1];
                res[i+j+1]=(sum%10);
                res[i+j]+=sum/10;
            }
        }
      int i=0;
      string ans="";
      while(res[i]==0)i++;
      while(i<res.size())
      {
          ans+=to_string(res[i]);
          i++;
      }
      return ans;
    }

};