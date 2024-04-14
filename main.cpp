#include <iostream>
using namespace std;
#include <unordered_map>


// Function to find the first repeated element in an array
int findrepeated(int a[],int n){
  // Create a hash map to store the frequency of each element
  unordered_map<int,int>hash;
  // Iterate over the array and update the frequency of each element in the hash map
  for(int i=0;i<n;i++)
    {
      hash[a[i]]++;
    }
  // Iterate over the array again to find the first element with frequency greater than 1
  for(int i=0;i<n;i++)
    {
      if(hash[a[i]]>1)
        {
          // Return the index of the first repeated element
          return i+1;
        }
    }
  // If no repeated element is found, return -1
  return -1;
}

int main(){
  int a[]={1,3,5,1,6,5};
  int n=sizeof(a)/sizeof(a[0]);
  int result=findrepeated(a,n);

  cout<<result<<endl;  
}