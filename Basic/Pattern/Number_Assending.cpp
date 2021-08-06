// Program to print half pyramid using number
/*
	1	
	12
	123
	1234
	12345
*/

#include <iostream>
using namespace std;
int main()
{
  int i, j, n;
  cout<<"Enter Number of Rows -";
  cin>>n;
  
  for(i=1;i<=n;i++)
   {
   	 for(j=1;j<=i;j++)
    	{
       		cout<<j;
         }
    cout<<"\n";;
  }

    return 0;
}

