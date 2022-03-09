//Same task from IFeelLikeIAmWorkingAsCashier.cpp but using rekursion
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

vector <vector <int>> scAttempts;
ofstream of("c0c.txt");

void reverse(vector<vector <int>>& scr, int row, int column) {

    for (int i = 0; i < scr.size(); i++) {
        scr[row][i] = !scr[row][i];
    }
    for (int i = 0; i < scr.size(); i++) {
        scr[i][column] = !scr[i][column];
    }
    scr[row][column] = !scr[row][column];
    return;
}

bool isClear(vector <vector <int>> scr) {

    for (int i = 0; i < scr.size(); i++)
        for (int j = 0; j < scr.size(); j++) {
            if (scr[i][j])
                return 0;
        }
    return 1;
}

void action(vector <vector <int>> scr, vector <int> cmds, int depth) {
    if (depth >= 5) {
        cmds.push_back(-1); //this was made just in case
        return;
    }
    if (isClear(scr)) {
        scAttempts.push_back(cmds);
        return;
    }


    for (int i = 0; i < scr.size(); i++) {
        for (int j = 0; j < scr[i].size(); j++) {
            //if (scr[i][j]) {
                vector <int> cmdBuffer = cmds;
                vector <vector <int>> scrBuffer = scr;
                cmdBuffer.push_back(i);
                cmdBuffer.push_back(j);
                reverse(scrBuffer, i, j);
                action(scrBuffer, cmdBuffer, depth + 1);
            //}
        }
    }


}

void print(vector <vector <int>> vec) {
    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++)
            cout << vec[i][j] << ' ';
        cout << endl;
    }
}


void printBest() {
    if (scAttempts.size() == 0) {
        of << "Bruh" << endl;
        return;
    }
    int mini = 0;
    for (int i = 0; i < scAttempts.size(); i++) {
        if (scAttempts[mini].size() > scAttempts[i].size())
            mini = i;

    }
    of << scAttempts[mini].size() / 2 << endl;
    for (int i = 1; i < scAttempts[mini].size(); i += 2) {

        of << scAttempts[mini][i - 1] << " " << scAttempts[mini][i] << endl;
    }

}

int main() {
    ifstream f("c1.txt");
    int amount;
    f >> amount;
    for(int y = 0; y < amount; y++) {
        //INIT
        vector<vector <int>> scr;
        int size;
        cout << y << " " << amount <<endl;
        //INTPUT
        f >> size;
        for (int i = 0; i < size; i++) {
            vector<int> temp;
            for (int j = 0; j < size; j++) {
                int tmp;
                f >> tmp;
                temp.push_back(tmp);
            }
            scr.push_back(temp);
            
        }
        //Action
        vector<int> cmds;
        action(scr, cmds, 0);
        printBest();
        scAttempts.clear();
    }
        return 0;
}