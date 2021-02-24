#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double x,y;
	cin>>x;
	if(x<=-1)
		y=3.0*sqrt(fabs(x)+2.0)+1;
	else if(x<=10)
		y=pow(x,5)+1;
	else
		y=sqrt((x+1)/(2*pow(x,2)));
	cout<<y<<endl;
	return 0;
}

