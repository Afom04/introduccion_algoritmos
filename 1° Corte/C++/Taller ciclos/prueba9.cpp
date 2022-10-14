#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int sec, hr, min;
    cin>>sec;
    cout << sec << " segundos son ";
    hr = sec / (60*60);
    sec %= 60*60;
    min = sec / 60;
    sec %= 60;
    cout << hr << " horas " << min << " minutos y " << sec << " segundos" << endl;

return 0; }	
		 
  




