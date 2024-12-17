#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

main()
{
	float n;
	float sum = 0;
	float i;
	
	cout<<"Enter n : "<<endl;
	cin>>n;
	
	for ( i = 1 ; i <= n ; i++ )
	{
		sum +=  ( 1 / i );
	}
	cout<<"Sum is : "<<sum;
}
