//Same task from IFeelLikeIAmWorkingAsCashier.cpp but using rekursion
#include <iostream>
#include <vector>
using namespace std;

vector <vector <int>> scAttempts;

void reverse(vector<vector <int>> &scr, int row, int column){

    for(int i = 0; i < scr.size(); i++){
        scr[row][i] = !scr[row][i];
    }
    for(int i = 0; i < scr.size(); i++){
        scr[i][column] = !scr[i][column];
    }
    scr[row][column] = !scr[row][column];
    return;
}



void print(vector <vector <int>> vec){
    for(int i = 0; i < vec.size(); i++){
        for(int j = 0; j < vec[i].size(); j++)
            cout << vec[i][j] << ' ';
        cout << endl;
    }
}


int main(){
    // int size;
    // cin >> size;
    // vector <vector <int>> scr(size, vector<int>(size, 0));//had no idea one could do that
    // cin >> size;
    // for(int i = 0; i < size; i++){
    //     int temp, tmp;
    //     cin >> temp >> tmp;
    //     reverse(scr, temp, tmp);
    // }
    // print(scr);

    cout << !5;
    return 0;
}