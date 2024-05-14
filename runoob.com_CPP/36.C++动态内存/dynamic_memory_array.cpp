#include <iostream>
using namespace std;

int main()
{
    int **p;
    int i, j;       //p[4][8]

    p = new int *[4];
    for(i=0; i<4;i++)
    {
        p[i]=new int [8];
    }

    for (i=0; i<4; i++){
        for(j=0; j<8; j++){
            p[i][j] = j*i;
        }
    }

    for(i=0; i<4; i++){
        for(j=0; j<8; j++){
            if(j==0) cout << endl;
            cout << p[i][j] << "\t";
        }
    }
    // 释放堆
    for(i=0; i<4; i++){
        delete[] p[i];
    }
    delete [] p;

    return 0;
}
