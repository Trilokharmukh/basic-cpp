// Program to print half pyramid using Alphabet
/*	
	A B C D E
	A B C D
	A B C
	A B
	A
*/
#include <iostream>
using namespace std;
int main()	
{
    int i, j;
 	char a;
 	for(i=5;i>=1;i--)
 	{ 
        a='A';
        for(j=1;j<=i;j++)
    	{
       	    cout<<a<<" ";
       		a++;
    	}
  		cout<<"\n";
    }
    return 0;
}