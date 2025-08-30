#include<iostream>
using namespace std;

int a[7] = {11,22,33,44,55,66,77};
int value;

int main(){
   int index = -1;
   int start = 0;
   int end = 6;
   int center = (end - start) / 2;
   cout << "Enter the value to be searched" << endl;
   cin >> value;
   do{
       if(a[center] == value){
           index = center;
           break;
       }
       else{
           if(a[center] > value){
               end = center-1;
               if(end < start) break;
           }
           else{
               start = center+1;
               if(start > end ) break;
           }
           center = start + (end - start) / 2;
       }
   }while(center >=0 && center <= 7);
   if(index == -1){
       cout << "Value not found in array" << endl;
   }
   else{
       cout << "Value found at index " << index << endl;
   }
}