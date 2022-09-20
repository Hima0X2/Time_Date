#include <iostream>
#include <ctime>
#include <iomanip> //this library is needed for setw
#include<windows.h>
using namespace std;

int main() {
   while(true){
   	system("cls");
   	cout<<"\n\n\n\n                  -------------------------------Date and Time----------------------------\n\n\n\n";
   time_t now = time(0);
    tm *ltm = localtime(&now);
   cout << setw (51);
   cout<<"Date : ";
  cout <<" ( "<< ltm->tm_mday << " / "<<1 + ltm->tm_mon<< " / ";
   cout <<1900 + ltm->tm_year<<" ) \n";
   cout << setw (51);
   cout << "Time: "<< 5+ltm->tm_hour << ":"<<30+ltm->tm_min << ":"<<ltm->tm_sec << endl;
    Sleep(1000);
    if(GetAsyncKeyState(VK_RETURN))  //press space
        {
        	system("cls");
          	return 0;
        }
}
}
