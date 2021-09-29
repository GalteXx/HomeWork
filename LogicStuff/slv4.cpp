#include<iostream>

using namespace std;

int main()
{

    cout << "x y z w |F\n";
    for(int x = 0; x <= 1; x++)
    {
        for(int y = 0; y <= 1; y++)
        {
            for(int z = 0; z <= 1; z++)
            {
                for(int w = 0; w <= 1; w++)
                {
                    if(  ((!x || z) && (!z || w)) ||  (y == (x || z))  )
                    {
                        //cout << x << " " << y << " " << z << " " << w << 
                        //" |1" << endl;
                    }
                    else
                    {
                        cout << x << " " << y << " " << z << " " << w << 
                        " |0" << endl;
                    }
                }
            }
        }
    }

    return 0;
}
