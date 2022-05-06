#include <iostream>

using namespace std;

int main(){

    for(int a = 1; a <= 1000; a++){
        bool fl = true;
        for(int x = 1; x <= 10000; x++){
            if(  !(!(!((x & 107) == 0) || ((x & 55) != 0)) || ((x & a) != 0) )  )
                fl = false;
        }
        if(fl)
            cout << a << endl;
    }


    return 0;
}