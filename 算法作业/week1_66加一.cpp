class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int count=0;//计9的个数
        for(int n=digits.size()-1;n>=0;n--)
        {
           if(digits[n]<9){     //小于9直接加1
              digits[n]++;
               break;
           }
           else if (digits[n]==9)    //等于9则这一位记为0，下一轮循环
           {
               digits[n]=0;
               count++;
           }
        }
        if(count==digits.size())  //所有位都等于9，首位置1，再尾插一位置0
        {
            digits[0]=1;
            digits.push_back(0);
        }
    return digits;
    }
};
