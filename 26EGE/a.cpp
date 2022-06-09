#include <iostream>
#include <fstream>
#include <vector>
#include <thread>
#include <future>

using namespace std;

int main(){
    ifstream file("C:\\Users\\Maxim\\Documents\\Arch\\Coding\\homework\\HomeWork\\26EGE\\26.txt");
    const int start = 1633305600, end = 1633910400;
    vector <int> vec(604800, 0);
    int n, n1;
    file >> n;
    while(file >> n >> n1){
        if(n1 == 0 || n1 > end)
            n1 = end;
        if(n < start)
            n = start;
        
        n -= 1633305600;
        n1 -= 1633305600;
        
        for(int i = n; i < n1; i++){
            vec[i]++;
        }
        
    }
    int maxx = 0, k = 0;
    for(int i = 0; i < vec.size(); i++){
        if(vec[i] > vec[maxx]){
            maxx = i;
            k = 0;
        }
        if(vec[i] == vec[maxx])
            k++;
        
        
    }
    cout << vec[maxx] << " " << k;
    return 0;
}