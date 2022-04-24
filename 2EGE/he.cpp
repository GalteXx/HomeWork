#include<iostream>
using namespace std;

int main(){
    cout << "x y z w\n";
    for(int x = 0; x < 2; x++)
    for(int y = 0; y < 2; y++)
    for(int z = 0; z < 2; z++) {
    //for(int w = 0; w < 2; w++){
        if((  (!y || z) && !(z && x)  )){
            cout << x << " " << y << " " << z << "\n";
        }

    }
    return 0;
}