#include <iostream>
#include<algorithm>
using namespace std;

int main(){
//taking numbers
 float num1,num2; 
cout << "First number - "  ;
cin >> num1;
cout << "Second number - "  ;
cin >> num2;

//picking operators 

char opt;
cout << "Choose an operator - "  ;
cin >> opt;
//answer
switch(opt){
    case '+' :
    cout << num1+num2<< endl;
    break;
    case '-' :
    cout << num1-num2<< endl;
    break;
    case '*' :
    cout << num1*num2<< endl;
    break;
    case '/' :
    cout << num1/num2 << endl;
    break;
default:

cout << "Invalid operator. Choose from (+-*/)" << endl;
break;

}



    return 0;
}