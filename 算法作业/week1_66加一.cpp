class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int count=0;//��9�ĸ���
        for(int n=digits.size()-1;n>=0;n--)
        {
           if(digits[n]<9){     //С��9ֱ�Ӽ�1
              digits[n]++;
               break;
           }
           else if (digits[n]==9)    //����9����һλ��Ϊ0����һ��ѭ��
           {
               digits[n]=0;
               count++;
           }
        }
        if(count==digits.size())  //����λ������9����λ��1����β��һλ��0
        {
            digits[0]=1;
            digits.push_back(0);
        }
    return digits;
    }
};
