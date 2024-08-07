#include <iostream>
using namespace std;

int main(){
float num;
cout << "Enter number -";
int times=0;
int i=0; 
//if its not positive number 
while(cin >> num && num<0){                                 
    cout << "Enter a postive Number : " ;
}  
    //running the table from 0-10
    while(i<=10){
cout << num << "*"<< times <<"-"<< num*times << endl;
times++;
i++;
}   

    return 0;
}