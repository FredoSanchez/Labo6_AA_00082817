#include <iostream>
#define Size1 3
#define Size2 2

using namespace std;

void fastestWay(int a[][Size1], int t[][Size2], int e[], int x[], int n){
    int F1[n], F2[n], f = 0;
     
    F1[0] = e[0] + a[0][0];
    F2[0] = e[1] + a[1][0];
 
    string camino1="";
 
    for( int j = 1; j < n; j++){
 
        //F1[j]
        if(F1[j-1]+a[0][j] <= F2[j-1]+t[1][j-1]+a[0][j]){
            F1[j] = F1[j-1] + a[0][j];
            
        }else{
            F1[j] = F2[j-1] + t[1][j-1]+a[0][j];
            //Posición???
        }

        //F2[j]
        if(F2[j-1]+a[1][j] <= F1[j-1]+t[0][j-1]+a[1][j]){
             F2[j] = F2[j-1] + a[1][j];
             //Posición???
        }else{
             F2[j] = F1[j-1] + t[0][j-1] + a[1][j];
             //Posición???
        }

    }
    if(F1[n-1]+x[0] <= F2[n-1]+x[1]){
        f = F1[n-1] + x[0];
    }else{
        f = F2[n-1] + x[1];
    }

    cout << f <<endl;
}


int main()
{
    int a[][Size1] = {{8,5,10},{4,2,3}}, t[][Size2] = {{2,6},{1,1}}, e[2] = {7,2}, x[2] = {5,2};

    fastestWay(a, t, e, x, Size1);

    return 0;
}

