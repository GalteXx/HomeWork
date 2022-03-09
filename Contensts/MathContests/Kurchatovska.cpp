#include <iostream>
#include <cmath>
#include <vector>

using namespace std;


bool isSimple(int test){

    if(sqrt(test) == (int)sqrt(test))
        return false;
    for(int i = 2; i < sqrt(test); i++){
        if(test % i == 0)
            return false;
    }

    return true;
}

int GenArr(vector <int64_t> &vec){

    for(int i = 2; i < 10000; i++){
        if(isSimple(i))
            vec.push_back(i);
    }

    return 0;
}

int main(){
    vector <int64_t> vec;
    
    GenArr(vec);
    for(int i = 0; i < vec.size(); i++)
    for(int j = 0; j < vec.size(); j++)
    for(int k = 0; k < vec.size(); k++){
        if(vec[k] + vec[i] + vec[j] == 71 *vec[k] * vec[i] * vec[j])
            cout << vec[i] + vec[k] + vec[j] << endl;
        if(71 * (vec[k] + vec[i] + vec[j]) == vec[k] * vec[i] * vec[j])
            cout << vec[i] + vec[k] + vec[j] << endl;
    }
    cout << "over";
    return 0;
}