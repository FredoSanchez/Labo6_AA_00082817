#include <iostream>

using namespace std;

void fastestWay(int a[][], int t[][], int e[], int x[], int n){
    int F1[n], F2[n], f;
    
    F1[0] = e[0] + a[0][0];
    F2[1] = e[1] + a[1][0];
    
    for( int j = 1; j < n; j++){
        
        
        //F1[j]
        if(F1[j-1]+a[0][j] <= F2[j-1]+t[1][j-1]+a[0][j]){
            F1[j] = F1[j-1] + a[0][j];
            //Posición???
        }else{
            F1[j] = F2[j-1] + t[1][j-1]+a[0][j];
            //Posición???
        }
        
        //F2[j]
        if(F2[j-1]+a[1][j] <= F1[j-1]+t[0][j-1]+a[1][j]){
            F2[j] = F2[j-1] + a[1][j];
            //Posición???
        }else{
            F2[j] = F1[j-1] + t[0][j-1]+a[1][j];
            //Posición???
        }
        
        if(F1[n-1]+x[0] <= F2[n-1]+x[1]){
            f = F1[n-1] + x[0];
        }else{
            f = F2[n-1] + x[1];
        }
        
    }
    
    
}


int main()
{
    cout<<"Hello World";

    return 0;
}
