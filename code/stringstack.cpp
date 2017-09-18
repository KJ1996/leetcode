  #include<iostream>
 #include<string> 
 using namespace  std;
 bool isInterleave(string s1, string s2, string s3) {
       if(s1.size()==0&&s2.size()==0&&s3.size()==0) return 1;
     if(s1.size()+s2.size()!=s3.size()) return 0;
      if(s3.size()==1){
      if(s1.size()>0) return s1[0]==s3[0];
       return s2[0]==s3[0];
      	
	  }
	  if(s1.size()>0&&s2.size()>0){
	  
	  if(s3[0]==s2[0]&&s3[0]!=s1[0]) return isInterleave(s1,s2.substr(1),s3.substr(1));
	  if(s3[0]==s1[0]&&s3[0]!=s2[0]) return isInterleave(s1.substr(1),s2,s3.substr(1));
	  if(s3[0]==s1[0]||s3[0]==s2[0]) return isInterleave(s1.substr(1),s2,s3.substr(1))||isInterleave(s1,s2.substr(1),s3.substr(1));
}
else{
	if(s1.size()){
		if(s1[0]==s3[0])  return isInterleave(s1.substr(1),s2,s3.substr(1));
		else return 0;
	}
	else{
			if(s2[0]==s3[0])  return isInterleave(s1,s2.substr(1),s3.substr(1));
		else return 0;
	}
    }
}
    
    int main(){
    	string a,b,c;
    	cin>>a>>b>>c;
    	cout<<isInterleave(a,b,c);
	}
