#include <iostream>
using namespace std;

int main(void){
  int c1, c5, c10, c50, c100, c500;
  cin>>c1>>c5>>c10>>c50>>c100>>c500;
  cout<<(int)(c1+c5*5+c10*10+c50*50+c100*100+c500*500>=1000)<<endl;
  return 0;
}
