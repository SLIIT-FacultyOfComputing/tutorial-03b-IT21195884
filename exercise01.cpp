#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
  
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};

  int r,i;

  for(i=0; i<4 ; i++)
    {
      cout<<"i         ";
    }
  
  cout<<endl;

  for(i=0; i<3 ; i++)
    {
      cout<<"1234567890";
    }
  
 cout << "No" << "Name" << "Marks" << endl;
  
 for ( r = 0; r < 5; r++) 
 {
     cout <<  r+1 
          <<  names[r][20]
          << marks[r] << endl;
 }

return 0;
}