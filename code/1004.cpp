 #include<iostream>
 using namespace  std;
 int reverse(int x) {
        int num=0;
        int falg=1;
        if(x>=2147483647||x<=-2147483647) return 0;
        if(x<0) {falg=0;
                 x=-x;
                }
        while(x){
        	if(num>214748364) return 0;
            num*=10;
            if(num==2147483640){
            	if(x%10<=7);
            	else
            	return 0;
			}
            num+=x%10;
            x=x/10;
        }
        if(falg==0){
            if(num<0)
                return 0;
            else
                return -num;
        }
        if(falg==1){
          if(num<0)
                return 0;
            else
                return num;
        }
        return num;
    }
int main(){
	int a;
	cin>>a;
	cout<<reverse(a);
} 
