#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int ssize = 0;//I am sorry for that one, i could actually just reffer to vector.size()
vector<int> answ;//And for that one as well
vector <vector <int>> all; //it's late, so I don't want to refactor the heck i wrote allready
void reverse(vector<vector <int>> &scr, int row, int column){
    //endless cycle => no solution => exeption
    answ.push_back(row);
    answ.push_back(column);
    for(int i = 0; i < ssize; i++){
        scr[row][i] = !scr[row][i];
    }
    for(int i = 0; i < ssize; i++){
        scr[i][column] = !scr[i][column];
    }
    scr[row][column] = !scr[row][column];
}

bool isEmpty(vector<vector <int>> scr){
    for(int i = 0; i < ssize; i++){
        for(int j = 0; j < ssize; j++){
            if(scr[i][j] != 0)
                return false;
        }
    }
    return true;
}

void print(vector <vector<int>> scr){
    for(int i = 0; i < ssize; i++){
        for(int j = 0; j < ssize; j++){
            cout << scr[i][j] << " ";
        }
        cout << "\n";
    }
}

void doubleprint(vector <int> amogus){
    ofstream huh("a0a.txt");
    for(int i = 1; i < amogus.size(); i++)
        cout << amogus[i - 1] << " " << amogus[i] << endl;
}

void reshuffle(vector< vector <int>> scr, int si, int sj){
    for(int counter = 0; counter < 10 && !isEmpty(scr); counter++){
    for(int i = si; i < ssize; i++){
        for(int j = sj; j < ssize; j++){
            if(scr[i][j] == 1)
                reverse(scr, i, j);
        }
        si = 0;
        sj = 0;
    }
    }
    if(isEmpty(scr)){
        all.push_back(answ);
    }
    answ.clear();
}

void printmin(){
    vector <int> min = all[0];
    for(int i = 0; i < all.size(); i++){
        if(min.size() > all[i].size())
            min = all[i];
    }
    doubleprint(min);
    all.clear();
}

int main(){
    ifstream fi("c0.txt");
    cout << "huh?";
    int x;
    fi >> x;
    for(int con = 0; con < x; con++) {
    vector<vector <int>> scr;
    //INPUT
    fi >> ssize;
    for(int i = 0; i < ssize; i++){
        vector <int> temp;
        for(int j = 0; j < ssize; j++){
            int tmp;
            fi >> tmp;
            temp.push_back(tmp);
        }
        scr.push_back(temp);
    }
    vector<vector <int>> rescp = scr;
    //WORKSPACE

    for(int i = 0; i < ssize; i++){
        for(int j = 0; j < ssize; j++){
            reshuffle(scr, i, j);
            scr = rescp;
        }
    }
    cout << con << endl;
    printmin();
    }
    return 0;
}