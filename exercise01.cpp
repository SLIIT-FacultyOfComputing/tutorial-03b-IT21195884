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
      cout << i         ;
    }
  
  cout<<endl;

  for(i=0; i<3 ; i++)
    {
      cout<<"1234567890";
    }
  cout << endl;
  
 cout << "No     " << "Name    " << "Marks    " << endl;
  
 for ( r = 0; r < 5; r++) 
 {
   cout << setiosflags(ios::fixed)
     
     cout <<  setw(5) << r+1 
          <<  setw(20) << names[r][20]
          << setw(30) << setprecision(2)<< marks[r] << endl;
 }

return 0;
}