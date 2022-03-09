#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main(){
    //INIT
    vector <vector<int>> vec;
    int n;
    ifstream bruh("b2.txt");
    ofstream cringe("b0b.txt");
    //INPUT
    bruh >> n;
    for(int i = 0; i < n; i++){
        vector <int> temp;
        for(int j = 0; j < 3; j++){
            int tmp;
            bruh >> tmp;
            temp.push_back(tmp);
        }
        vec.push_back(temp);
    }
    /* Comic Sans?!
        Cost -> DeliveryCost -> FreeDeliveryStartingPrice
        Сначала они дают непонятно что, а потом вот это...
    */
    for(int i = 0; i < n; i++){
        int cost = vec[i][0], dcost = vec[i][1], fds = vec[i][2];
        cout << "Cycle";
        if(cost >= fds && dcost + fds - 1 > cost)
            cringe << dcost + fds - 1 << endl;
        else if(cost >= fds)
            cringe << cost << endl;
        else if(cost <= fds)
            cringe << cost + dcost << endl;
    }
    return 0;
}