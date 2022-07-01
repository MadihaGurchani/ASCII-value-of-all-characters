#include <iostream>
using namespace std;
int main()
{
  char ch;
  int i;
  cout<<"Character\t\tASCII\n";
  for(i = 0; i < 255; i++)
  {
    ch = i; //integer to character value convert
    cout<<ch<<"\t\t\t"<<i<<endl;
  }
  cout<<endl;
  return 0;
}
