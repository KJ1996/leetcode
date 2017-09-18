 #include<iostream>
 #include<string> 
 using namespace  std;
    bool isMatch(string s, string p) {
    	
   
        if(p.size()==0) return s.size()==0;
        if(p.size()==1){
        	
        	
        		if(s.size()==1){
        			if(s[0]==p[0]||p[0]=='.')
        			return true;
                    else
                        return false;
				}
				else
				return false;
			
		}
		if(p.size()>=2){
			if(p[1]=='*'){
                if( !s.empty()&&(s[0] == p[0] || '.' == p[0])) return isMatch(s.substr(1), p)||isMatch(s, p.substr(2));
				  return isMatch(s, p.substr(2)) ;
			}
			else{
				if(s.empty())
                    return false;
                else if (s[0] == p[0] || '.' == p[0]) 
                    return isMatch(s.substr(1), p.substr(1));
                return false;
			}
        
        } 
		
    }
 int main(){
 	string a,b;
 	cin>>a>>b;
 	cout<<isMatch(a,b);
 }
