#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int row=0;row<n;row++){
        for(int col=0;col<2*n-row-2;col++){
            cout<<"* ";
        }
        for(int col=0;col<row+1;col++){
            cout<<row+1<<" * ";
        }
        for(int col=0;col<2*n-row-3;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

/*

* * * * * * * * * * * * 1 * * * * * * * * * * * * 
* * * * * * * * * * * 2 * 2 * * * * * * * * * * * 
* * * * * * * * * * 3 * 3 * 3 * * * * * * * * * * 
* * * * * * * * * 4 * 4 * 4 * 4 * * * * * * * * * 
* * * * * * * * 5 * 5 * 5 * 5 * 5 * * * * * * * * 
* * * * * * * 6 * 6 * 6 * 6 * 6 * 6 * * * * * * * 
* * * * * * 7 * 7 * 7 * 7 * 7 * 7 * 7 * * * * * * 

*/