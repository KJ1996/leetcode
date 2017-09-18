#include<iostream>
 #include<string> 
 using namespace  std;
    bool isMatch(string s, string p) {
  	
  
        int i = 0, j = 0, tempi = -INT_MIN,tempj=-INT_MIN;
        for(;j<s.size();) {
            if  ( p[i] == '?'||s[j] == p[i] ) {
                i++; 
                j++;//正常情况
            }
             else if (p[i] == '*') {
                tempj= j; 
                tempi = i;
                i++;//先跳过*号，并记录他们 
            }
            else if (tempi >= 0) {
            	tempj++;
              j= tempj;
                i= tempi+ 1;
            }
            else {
			return false;
		}
        }
        while (i<p.size()&& p[i] == '*') i++;
        if(i==p.size()) return 1;
        return 0;
    
    }
 
		

 int main(){
 	string a,b;
 	cin>>a>>b;
 	
 	cout<<isMatch(a,b);
 }
