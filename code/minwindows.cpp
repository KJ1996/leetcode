#include<iostream>
#include<string> 
#include<vector>
using namespace std;

string minWindow(string s, string t) {
        int temp[128]={0};
        for(int i=0;i<t.length();i++) temp[t[i]]++;
        int total=t.size(), begin=0, end=0, ans=INT_MAX, first=0;
        while(end<s.size()){
        	if(temp[s[end]]!=0){
        		temp[s[end]]--;//当所需子串多次出现 
        	if(temp[s[end]]>=0)
        		total--;
        		if(	temp[s[end]]==0){
        				temp[s[end]]=-1;//用于标识该字符是否出现在子串。 
				} 
				end++;
			}
			else{
				end++;
			}
			
			while(total==0){
			 if(end-begin<ans) {
			 	ans=(end-begin) ;
			 	first=begin;
			 }//存在更优解 
			 
			 if(temp[s[begin]]==-1) {
			 	total++;
			 	temp[s[begin]]=1;
			 }
			 if(temp[s[begin]]<-1)
			 temp[s[begin]]++;
			 begin++;//缩小区间 
			}
			
		}
        
        return ans==INT_MAX? "":s.substr(first, ans);
    }
int main(){
	string a,b;
	cin>>a>>b;
	cout<<minWindow(a,b)<<endl;
}
