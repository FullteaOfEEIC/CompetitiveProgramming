#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void){
        int n;
        int* a=(int*)malloc(sizeof(int)*n);
        cin>>n;
        for(int i=0; i<n; i++) {
                cin>>a[i];
        }
        for(int i=n-1; i>=0; i--) {
                cout<<a[i];
                if(i>0) {
                        cout<<" ";
                }
        }
        cout<<endl;
        return 0;
}
