// Program to print half pyramid using Alphabet
/*	
	A
	A B
	A B C
	A B C D 
	A B C D E
*/



#include <iostream>
using namespace std;
int main()	
{
    int i, j;
 	char a;
 	for(i=1;i<=5;i++)
 	{ 
        a='A';
        for(j=1;j<=i;j++)
    	{
       	    cout<<a<<" ";
       		a++;
    	}
  		printf("\n");
    }
    return 0;
}

