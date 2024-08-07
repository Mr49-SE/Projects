#include <iostream>
#include<algorithm>
using namespace std;

int main(){
//For the marks
int m1,m2,m3,m4; 
cout << " Enter all the marks for 4 students "<< endl;
cin >> m1 >>m2 >>m3 >> m4 ;
// average

float average;
average=(m1+m2+m3+m4)/4;
//highest
cout << "Highest " << max({m1,m2,m3,m4}) << endl;

    cout << "Average " << average << endl;
return 0;

}
