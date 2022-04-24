#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
    ifstream file("C:\\Users\\Maxim\\Documents\\Arch\\Coding\\homework\\HomeWork\\17EGE\\text.txt");
    vector <int> vec;
    int n, sum = 0, kol = 0;
    const int ctr = 3382;
    while(file >> n){
        vec.push_back(n);
    }
    for(int i = 1; i < vec.size(); i++){
        if((vec[i] > ctr && vec[i - 1] < ctr && vec[i - 1] % 100 == 33) ||
        (vec[i] % 100 == 33 && vec[i - 1] > ctr && vec[i] < ctr)){
            sum += min(vec[i], vec[i-1]);
            kol++;    

        }
    
    }

    cout << kol << " " << sum;
    
    return 0;
}