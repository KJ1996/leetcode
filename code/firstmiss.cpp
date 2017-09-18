 #include<iostream>
 #include<vector> 
 using namespace  std;
 int firstMissingPositive(vector<int>& nums){
 	int len=nums.size();
 	for(int i=0;i<len;i++){
 		if(nums[i]==i+1);
 		else{
 			if(nums[i]>0&&nums[i]<=len){
 				int temp=nums[i];
 				while(nums[i]!=i+1){
 			if(nums[i]<=0||nums[i]>len||nums[i]==nums[nums[i]-1]) break;
 				
 					nums[i]=nums[nums[i]-1];
 				 	nums[temp-1]=temp;
 					temp=nums[i];
				 }
			 }
		 }
		  
	 }
	 for(int j=0;j<len;j++){
	 	if(nums[j]!=j+1)
	 	return j+1;
	 	
	 }
	 return len+1;
 }
 int main(){
 	vector<int>temp;
 	temp.push_back(2);
 	temp.push_back(1);
 	cout<<firstMissingPositive(temp);
 }
