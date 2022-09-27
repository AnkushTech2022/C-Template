
// BUBBLE SORT IMPLEMENTATION USING C++ PROGRAMMING!

#include<iostream>
using namespace std;

// using function template...
template<class Ankush> void swaped(Ankush &X, Ankush &Y){
    Ankush temp;
    temp=X;
    X=Y;
    Y=temp;
}
template<class Ankush> void print(Ankush X[], int size){
    for(int i=0;i<size;i++){
    cout<<X[i]<<" ";
    } 
}
template<class Ankush> void bubbleSort(Ankush X[], int size){
    for(int i=0;i<size;i++){
      for(int j=size-1;i<j;j--){
       if(X[j]<X[j-1]){
          swaped(X[j], X[j-1]);
        } 
      }
    }
  print(X, size);
}


int main(){
  int size;
  cout<<"Enter size: ";
  cin>>size;
  int arr[100];
  char ch1[5]={'b','g','h','k','z'};
  int size2=sizeof(ch1)/sizeof(ch1[0]);
  cout<<"ENTER ELEMENT IN ARRAY! "<<endl;
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
  bubbleSort<int>(arr, size);  
  cout<<"Char Array! "<<endl;
  bubbleSort<char>(ch1, size2); 
  return 0;
}
