#include <iostream>
using namespace std;

int i = 5; // global variable

int main()
{
 	{
	int i = 7;
      //cout << i << endl;
      {
        int i = 90;
        cout << i << endl;
      } cout << i << endl;
  }
 cout << i << endl;
	return(0);
}