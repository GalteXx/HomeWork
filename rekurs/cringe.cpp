#include <iostream>
#include <vector>

int F(int n, int m)
{
    if(m == 0)
    return n;
    else
        return F(m, n%m);    
}

int main()
{   
    int kol = 0;
    for(int i = 100; i < 1001; i++)
    {
        for(int j = 100; j < 1001; j++)
        {
            if(F(i,j) == 30)
            {
                kol++;
                break;
            }
        }
    }
    std::cout << kol;
    int stopper;
    std::cin >> stopper;
    return 0;
}