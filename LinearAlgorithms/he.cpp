#include <iostream>
#include <vector>

using namespace std;

int main(){
    int lenth, space;
    vector <int> vec;
    cin >> lenth >> space;
    for(int i = 0; i < lenth; i++){
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }
    int fbest = 0; 
    int sbest = space; 
    for(int i = space + 1; i < vec.size(); i++){
        if(vec[fbest] + vec[sbest] < vec[i - space - 1] + vec[i] ||
        vec[fbest] + vec[sbest] < vec[i - space - 1] + vec[sbest] ||
        vec[fbest] + vec[sbest] < vec[i] + vec[fbest]
        ){
            if(vec[fbest] < vec[i-space - 1]){
                fbest = i - space - 1;
                if(sbest - fbest <= space)
                    sbest = i;
            }
            if(vec[sbest] < vec[i]){
                sbest = i;
                if(sbest - fbest <= space)
                    fbest = i - space - 1;
            }        
        }
    }
    cout << fbest + 1 << " "<< sbest + 1;
}