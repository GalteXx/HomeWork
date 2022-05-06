#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
    ifstream file("C:\\Users\\Maxim\\Documents\\Arch\\Coding\\homework\\HomeWork\\17EGE\\text.txt");
    vector <int> vec;
    int n, sum = 0, kol = 0;
    const int ctr = 208;
    while(file >> n){
        vec.push_back(n);
    }
    for(int i = 0; i < vec.size(); i++){
        if(vec[i] > ctr && vec[i-1] > ctr){
            kol++;
            sum += min(vec[i], vec[i - 1]);
        }
    }
    cout << kol << " " << sum << endl;
    return 0;
}