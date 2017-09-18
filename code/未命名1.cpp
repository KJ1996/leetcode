#include<iostream>
#include<vector> 
 using namespace  std;

       int lengthOfLongestSubstring(string s) {
        int ans=0;
       int temp[128]={0};
        int len=s.size();
        int count=0;
        int ok=1;
        int head=0;
        for(int i=0;i<len;i++){
        	if(temp[s[i]]==0){
        		temp[s[i]]=1;
        		count++;
        		if(count>ans){
        			ans=count;
				}
			}
			else{
			   
				while(s[head++]!=s[i]){
					count--;
					temp[s[head-1]]=0;
					//head++;
				}
			}
			}
		
		return ans;
    }

    int main(){
   
    string a,b;
    int c;
    while(cin>>c&&c){
	
    cin>>a;
    cout<<lengthOfLongestSubstring(a);
}
	}
