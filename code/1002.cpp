#include<iostream>
#include<vector> 
 using namespace  std;

      string lengthOfLongestSubstring(string s) {
      	 if (s.empty()) return "";
    if (s.size() == 1) return s;
        int ans=0;
       int temp[128]={0};
        int len=s.size();
        int count=0;
        int head=0;
       for(int i=0;i<len;i++){
         int j=i;
         int k=i;
         count=0;
         while(k<len-1&&s[k]==s[k+1]){
         	k++;
		 }
		   while (k < s.size()-1 && j > 0 && s[k + 1] == s[j - 1]) { ++k; --j; }
		   count=k-j+1;
		   if(count>ans){
		   	ans=count;
		   	head=j;
		   }
	   }
		
		return s.substr(head,ans);
    }

    int main(){
   
    string a,b;
   {
	
    cin>>a;
    cout<<lengthOfLongestSubstring(a);
}
	}
