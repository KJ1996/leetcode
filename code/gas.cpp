#include<iostream>
#include<vector>
using namespace std;
  int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
  	if(gas.size()==1) {
  		if(gas[0]>=cost[0]) return 0;
  		return -1;
	  }
        for(int i=0;i<gas.size();i++){
        	int num=0;
        	int ok=0;
        	int j;
        	for( j=0;j<gas.size();j++){
        	int s=i+j;
        	if(s>=gas.size()) s=s%gas.size();
        		num+=gas[s];
        		num-=cost[s];
        		if(num>=0){
        		ok++;
        		if(ok==gas.size()) return i;
				}
				else{
					break;
				}
			}
			
		 
		}
		return -1;
    }
int main(){
	vector<int>s1;
	vector<int>s2;
	s1.push_back(1);
		s1.push_back(2);
		s2.push_back(2);
			s2.push_back(1);	
	cout<<	canCompleteCircuit	(s1,s2);
}
