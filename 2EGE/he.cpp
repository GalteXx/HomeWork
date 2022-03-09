#include<iostream>

using namespace std;

int main(){
    int a;
    cin >> a;
    cout << "x y z w\n";
    for(int x = 0; x <= 1; x++)
    for(int y = 0; y <= 1; y++)
    for(int z = 0; z <= 1; z++)
    for(int w = 0; w <= 1; w++){
        if(  !((!x || y) && (!y || w) || (z == (x || y)))
          )
            cout << x << " " << y << " " << z << " " << w << endl;
    }
    return 0;
}