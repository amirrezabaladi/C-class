#include<iostream>
using namespace std;
int main() {
int x ;
for( x = 1 ; x <= 4 ; x++){
    for( int y = 4 ; y >= x ; y--){
        cout<<"* ";
    }
    cout << endl ;
}
return 0;
}