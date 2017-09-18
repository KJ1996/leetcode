#include<iostream>
 #include<string> 
 using namespace  std;
    bool isMatch(string s, string p) {
    	
   
        if(p.size()==0) return s.size()==0;
        if(p.size()==1){
        	   if(p[0]=='*') return 1;
        	
        		if(s.size()==1){
        			if(s[0]==p[0]||p[0]=='?')
        			return true;
                    else
                    return false;
				}

	
				return false;
			
		}
		if(p.size()>=2){
			
			if(p[0]=='*'){
				int ok=isMatch(s,p.substr(1));
			for(int i=0;i<s.size();i++)	{
				if(p[1]==s[i]||p[i]=='?')
				ok=ok||isMatch(s.substr(i+1),p.substr(2));
			}
			return ok;
			}
			else{
				if(s.empty()){
					if(p[0]=='*') return isMatch(s,p.substr(1));
				}
				if(p[0]==s[0]||p[0]=='?') {
				if(s.size()==1) return isMatch("",p.substr(1));
				return isMatch(s.substr(1),p.substr(1));
			}
			}
        return 0;
        } 
		
    }
 int main(){
 	string a,b;
 	cin>>a>>b;
 	cout<<isMatch(a,b);
 }
