#include<iostream>

bool del(int m, int n)
{
    return m % n == 0;
}

int main()
{
    int kol = 0;
    for(int a = 1; a < 1000; a++)
    {
        bool err = false;
        for(int x = 1; x < 1001; x++)
        {
            if(  !(!((x & 17) != 0) || (!((x & a) != 0) || ((x & 58) != 0))) || (((x & 8) == 8) && ((x & a) != 0) && ((x & 58) == 0))  )
            {
                err = true;
                break;
            }

        }
        if(!err)
        {
            kol++;
        }
    }
    std::cout << kol;
    return 0;
}