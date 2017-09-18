 #include<iostream>
 using namespace  std;

 double myPow(double x, int n) {
 	//n=double(n);
 	if(x==0) return 0;
 	//cout<<n;
        if(n<0){
            n=-(n/2);
           
            x=1/(x*x);
        }
        if(n==0){
            return 1;
        }
        if(n/2>0){
            double p=x*x;
            if(n%2)
                return myPow(p, n/2)*x;
            else
                 return myPow(p, n/2);
        }
        else
            return x;
    }
    int main(){
    	double a,b;
    	cin>>a>>b;
    	cout<<myPow(a,b);
	}
