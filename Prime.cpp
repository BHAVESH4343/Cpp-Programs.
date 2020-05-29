#include<iostream>
using namespace std;
#include<string.h>
int prime(int x);

int main()
{
  int x,result,a[50],i,n1,n2,n=34,j;
	cin>>n1>>n2;
  for(i=n1+1;i<n2;++i)
  {
	result=prime(i);
  if(result==1)
  {
  	a[i]=i;
  }
}
//  int k;
 // k=strlen(a);
 
  for(i=0;i<50;i++)
  {
  	for(j=0;j<50;j++)
  	{
  		if(a[i]+a[j]==34)
  		{
  			cout<<a[i]<<"+"<<a[j]<<"="<<n<<endl;
		  }
	  }
  }
  

  return 0;
}

  int prime(int x)
  {
    int j, result = 1;
    for (j = 2; j <= x / 2; ++j) {
        if (x % j == 0) {
            result = 0;
            break;
        }
    }
    return result;
  }
