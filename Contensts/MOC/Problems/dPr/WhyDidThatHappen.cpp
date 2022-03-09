#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

/* INPUT TEMPLATE
    amount of tastks

    ammount of shops __ amount of things needed to buy
    delivery cost for shops

    good_0: price_in_Shop_0 __ price_in_Shop_1 
    good_1: price_in_Shop_0 __ price_in_Shop_1

*/

int main(){
    
    int bruh;
    ifstream file("C:/Users/Maxim/Documents/Arch/Coding/homework/HomeWork/Contensts/MOC/Problems/dPr/d0.txt");
    ofstream ff("C:/Users/Maxim/Documents/Arch/Coding/homework/HomeWork/Contensts/MOC/Problems/dPr/d0d.txt");
    file >> bruh;
    for(int i = 0; i < bruh; i++){
        int nShops, nGoods;
        file >> nShops >> nGoods;
        vector <int> deliveryCost;
        for(int i = 0; i < nShops; i++){
            int temp;
            file >> temp;
            deliveryCost.push_back(temp);
        }
        
        vector <vector <int>> pGoods;
        for(int i = 0; i < nGoods; i++){
            vector <int> temp;
            for(int j = 0; j < nShops; j++){
                int tmp;
                file >> tmp;
                temp.push_back(tmp);
            }
            pGoods.push_back(temp);
        }
        vector<int> deliveryCostArch = deliveryCost;
        vector <int> bestShop(nGoods, 0);
        for(int i = 0; i < nGoods; i++){
            for(int j = 0; j < nShops; j++){
                if(pGoods[i][j] + deliveryCost[j] < pGoods[i][bestShop[i]] + deliveryCost[bestShop[i]])
                    bestShop[i] = j;
            }
            //deliveryCost[bestShop[i]] = 0;
        }
        int sum = 0;
        for(int i = 0; i < nGoods; i++)
        {
            sum += pGoods[i][bestShop[i]] + deliveryCostArch[bestShop[i]];
            deliveryCostArch[bestShop[i]] = 0;
        }
            

        ff << sum << endl;
        for(int i = 0; i < nGoods; i++){
            ff << bestShop[i] + 1<< " ";
        }
        ff << endl;
    }   
    return 0;
}