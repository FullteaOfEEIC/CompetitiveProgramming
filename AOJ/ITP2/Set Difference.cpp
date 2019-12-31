#include <iostream>
using namespace std;
//ITP2の9番台はPythonで実装したら負けだという気がしたのでc++で書きます。

int main(void){
  int n,m;
  cin>>n;
  long A[n];
  for(int i=0;i<n;i++){
    cin>>A[i];
  }
  cin>>m;
  long B[m];
  for(int i=0;i<m;i++){
    cin>>B[i];
  }
  int i=0;
  int j=0;
  while(i<n and j<m){
    if(A[i]<B[j]){
      cout<<A[i]<<endl;
      i++;
    }
    else if(A[i]>B[j]){
      j++;
    }
    else{
      i++;
      j++;
    }
  }
  for(int k=i;k<n;k++){
    cout<<A[k]<<endl;
  }
  return 0;
}
