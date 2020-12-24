// Question from CodeForces
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int t;
    cin>>t;
    if(t >= 1 && t <= 1000){
        int arr[t];
        for(int i =0;i<t;i++){
         int num=0;
         cin>>num;
         if(num >= 1 && num <= 1000000000){
            arr[i]=num;
         }
        }
        for(int i =0;i<t;i++){
         int num1=arr[i];
         if(num1 == 1){
            arr[i]=0;
            continue;
          }
         if(num1%2 == 0){
                int counter=0;
            while(num1 != 1){

                if(num1 == 2){
                    counter=counter+1;
                    break;
                }
                num1=num1/(num1/2);
                counter=counter+1;
            }
            arr[i]=counter;
         }
         if(num1%2 == 1){
            int counter1=0;
            bool prime =true;
            for(int i =2;i<sqrt(num1);i++){
                if(num1%i == 0){
                    prime=false;
                    break;
                }
            }
            if(prime == true){
                counter1=counter1+1;
                num1=num1-1;
                while(num1 != 1){

                if(num1 == 2){
                    counter1=counter1+1;
                    break;
                  }
                num1=num1/(num1/2);
                counter1=counter1+1;
              }
              arr[i]=counter1;
            }
            if(prime == false){
                    while(num1 != 1){

                if(num1 % 7 == 0){
                    num1=num1/(num1/7);
                    counter1=counter1+1;
                }
                else if(num1 % 3 == 0){
                    num1=num1/(num1/3);
                    counter1=counter1+1;
                }
                else if(num1 % 5 == 0){
                    num1=num1/(num1/5);
                    counter1=counter1+1;
                }
                    }
                    arr[i]=counter1;
            }


         }


        }
        for(int i=0;i<t;i++) cout<<arr[i]<<endl;
      }
    }
