// Program to print half pyramid using number
/*	
	5
	45
	345
	2345
	12345
*/

#include <iostream>
using namespace std;
int main()
{
  int i, j, n;
  cout<<"Enter Number of Rows -";
  cin>>n;
  
  for(i=n;i>=1;i--)
   {
   	 for(j=i;j<=n;j++)
    	{
       		cout<<j;
         }
    printf("\n");
  }

    return 0;
}

