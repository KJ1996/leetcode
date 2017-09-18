 #include<iostream>
#include<vector> 
 using namespace  std;  
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2) return 0;
        vector<int>s (10000000,0);
        for(int i=0;i<nums.size();i++){
            s[nums[i]]=1;
        }
        int a=0;
        int min=0;
        while(s[a]==0&&a<=10000000) a++;
        for(int i=a;i<s.size();i++){
            if(s[i]){
                min=max(i-a,min);
                a=i;
            }
}
        return min;
    }
    int main(){
    	vector<int>s1;
    	s1.push_back(1);
    		s1.push_back(100);
    		cout<<maximumGap(s1);
	} 
