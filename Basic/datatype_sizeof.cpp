#include <iostream>
using namespace std;

/* sizof() function me datatype ya variable pass krne se uska size btat h
 byte me jese ki int pass krne se output me 4 aaega.
*/

int main() {
    
    int i;
    char c;
    float f;
    double d;
    
// for datatype    
    cout<< "for Datatype";
   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of int : " << sizeof(int) << endl;
   cout << "Size of short int : " << sizeof(short int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of float : " << sizeof(float) << endl;
   cout << "Size of double : " << sizeof(double) << endl;
   cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

// for variable
    cout<<"\n\nfor variable\n";
   cout << "Size of c : " << sizeof(c) << endl;
   cout << "Size of i : " << sizeof(i) << endl;
   cout << "Size of f : " << sizeof(f) << endl;
   cout << "Size of d : " << sizeof(d) << endl;
   
   return 0;
}