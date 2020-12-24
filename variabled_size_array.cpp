// question from HackerRank in CPP category.

#include<iostream>
#include<vector>
#include <stdlib.h>
using namespace std;

int main(){
    int n,q,sum=0,k;
    cin>>n>>q;
    vector<vector<int>> v1(n),v2(q);

    if(n >= 1 && n <= 100000 && q >= 1 && q <= 100000){
        for(int i=0;i<n;i++){
            for(int j=0;;j++){
                int  value;
                cin>>value;
                if(j == 0){
                    if(value >= 1 && value <= 300000){
                        sum=sum+1;
                    }
                }
                v1[i].push_back(value);

                if(v1[i][0] == j){
                   break;
                }
            }
        }
        /*for(int i=0;i<n;i++){
            for(int j=1;j <= v1[i][0];j++){
                cout<<v1[i][j];
            }
            cout<<endl;
        } */
       for(int i = 0; i < q ;i++){

            for(int j = 0 ;j < 2; j++){
                int value;
                cin>>value;
                v2[i].push_back(value);
            }
        }
       for(int p=0;p<q;p++){
         int i,j;
         i=v2[p][0];
         j=v2[p][1];
         if(i >= 0 && i < n && sum >= n && sum <= 300000 && j >= 0 && j < v1[i][0]){
            cout<<v1[i][j+1]<<endl;
         }

       }


    }

}
