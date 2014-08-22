#include <iostream>
#include "stdio.h"

using namespace std;

void output(int n);

int main()
{
    int a, b;
    scanf("%d %d",&a,&b);

    int res = a+b;

    if(res<0){
        cout << "-";
        res = -res;
    }

    output(res);

    return 0;
}

void outlittle(int m){

    cout << m/100;
    m %= 100;
    cout << m/10;
    m %= 10;
    cout << m;
}

void output(int n){

    if(n<1000){
        cout << n;

    }else{

        output(n/1000);
        cout << ',';
        outlittle(n%1000);
    }
}


