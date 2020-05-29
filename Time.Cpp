#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main()
{
     int seconds;
    int hh,mm,ss;
     cout << "Enter time:" << endl;
    cout << "Hours?   ";          cin >> hh;
    cout << "Minutes? ";          cin >> mm;
    cout << "Seconds? ";          cin >> ss;
    seconds = hh*3600 + mm*60 + ss;
     cout << "The time is = " << setw(2) << setfill('0') << hh << ":"
                             << setw(2) << setfill('0') << mm << ":"
                             << setw(2) << setfill('0') << ss << endl;
    cout << "Time in seconds: " << seconds;
    
  
     
    return 0;
}
