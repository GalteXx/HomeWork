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

    //INTI
    vector<int> vec;
    ifstream file("27-A.txt");
    int mini = 2147483646, ind = 0;
    vector <long long> indSumm;
    //ifstream file("text.txt");
    int n;

    //INPUT
    file >> n;
    while(file >> n){
        vec.push_back(n);
    }

    //PREPARATIONS
    for(int i = 0; i < vec.size(); i++){
        vec.push_back(vec[i]);
    }
    for(int i = 0; i < vec.size(); i++){

    }




    int summ = 0;
        for(int j = 1; j <= vec.size() / 2; j++){
            summ += j * vec[j];
        }
        for(int j = vec.size() / 2 + 1; j < vec.size(); j++){
            summ += (vec.size() / 2 - (j - (vec.size() / 2))) * vec[j];
        }

    for(int i = 1; i< vec.size(); i++){


    }

    cout << ind + 1 << " " << mini;
    return 0;
}
