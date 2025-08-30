#include<iostream>

using namespace std;

int a[7] = {11,44,33,22,77,66,55};
int value;

int main(){
   int index = -1;
   cout << "Enter the value to be searched" << endl;
   cin >> value;
   for(int i = 0 ; i < 7 ; i++){
       if(a[i] == value){
           index = i;
           break;
       }
   }
   if(index == -1){
       cout << "Value not found in array" << endl;
   }
   else{
       cout << "Value found at index " << index << endl;
   }
}