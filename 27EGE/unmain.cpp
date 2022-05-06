#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int inMin(vector <int> vec){

    int minn = 0;
    for(int i = 0; i < vec.size(); i++){
        if(vec[i] < vec[minn])
            minn = i;
    }
    return minn;
}

int main(){

    vector<int> vec;
    ifstream file("27-A.txt");
    //ifstream file("text.txt");
    int n;
    while(file >> n){
        vec.push_back(n);
    }

    int mini = 2147483646, ind = 0;

    for(int i = 0; i < vec.size(); i++){

        int summ = 0;
        for(int j = 1; j <= vec.size() / 2; j++){
            summ += j * vec[j];
            cout << j << "*" << vec[j] << " + ";

        }
        for(int j = vec.size() / 2 + 1; j < vec.size(); j++){
            summ += (vec.size() / 2 - (j - (vec.size() / 2))) * vec[j];
            cout << "+ " << vec.size() / 2 - (j - (vec.size() / 2)) << "*" << vec[j] << " ";
        }
        cout << i + 1 << " " << summ << '\n';
        if(summ < mini){
            mini = summ;
            ind = i;
        }
        vec.push_back(vec[0]);
        vec.erase(vec.begin());
    }
    cout << ind + 1 << " " << mini;
    return 0;
}
