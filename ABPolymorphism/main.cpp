#include <iostream>
#include <iomanip>

using namespace std;

typedef struct{
    int x;
    double y;
}data;

int main()
{
    int n1, n2;

    cin >> n1;
    data data1[n1];
    for(int i=0;i<n1;i++){

        cin >> data1[i].x >> data1[i].y;
    }

    cin >> n2;
    data data2[n2];
    for(int i=0;i<n2;i++){

        cin >> data2[i].x >> data2[i].y;
    }

    int at1=0, at2=0;
    int n=0;
    data res[n1+n2];
    for(int i=0; i<n1+n2; i++){

        if(data1[at1].x>data2[at2].x){
            res[n].x = data1[at1].x;
            res[n].y = data1[at1].y;
            at1++;

        }else if(data1[at1].x==data2[at2].x){
            res[n].x = data1[at1].x;
            res[n].y = data1[at1].y+data2[at2].y;
            at1++;at2++;
            i++;

        }else{
            res[n].x = data2[at2].x;
            res[n].y = data2[at2].y;
            at2++;

        }

        if(res[n].y>-0.05&&res[n].y<0.05){
            n--;
        }
        n++;

        if(at1==n1){
            at1--;
            data1[at1].x = -1;

        }
        if(at2==n2){

            at2--;
            data2[at2].x = -1;
        }
    }
    cout << n;
    for(int i=0;i<n;i++){

        cout << " " << fixed << setprecision(1) << res[i].x << " " << res[i].y;

    }

    return 0;
}
