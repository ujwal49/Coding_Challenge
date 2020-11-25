#include<iostream>
#include<string>

using namespace std;

int main(){
    int t;
    cin>>t;
    if(t >= 1 && t <= 10){
        int arr[t];
        for(int i=0;i<t;i++){
            int c0,c1,n,h;
            cin>>n>>c0>>c1>>h;
            if(n >= 1 && n <= 1000 && c0 >= 1 && c0 <= 1000 && c1 >= 1 && c1 <= 1000 && h >= 1 && h <= 1000){
                string bin;
                cin>>bin;
                int counter=0;
                if(c0 == c1){
                    counter=n*c0;
                }
                if(c0 > c1){
                    if(c1+h>=c0){
                        for(int j=0;j<n;j++){
                            if(bin[j] == '0'){
                                counter=counter+c0;
                                continue;
                            }
                            if(bin[j] == '1'){
                                counter=counter+c1;
                            }
                        }
                    }
                    else{
                        for(int j=0;j<n;j++){
                            if(bin[j] == '0'){
                                counter=counter+c1+h;
                                continue;
                            }
                            if(bin[j] == '1'){
                                counter=counter+c1;
                            }
                        }
                    }
                }
                if(c0 < c1){
                    if(c0+h>=c1){
                        for(int j=0;j<n;j++){
                            if(bin[j] == '0'){
                                counter=counter+c0;
                                continue;
                            }
                            if(bin[j] == '1'){
                                counter=counter+c1;
                            }
                        }
                    }
                    else{
                        for(int j=0;j<n;j++){
                            if(bin[j] == '0'){
                                counter=counter+c0;s
                                continue;
                            }
                            if(bin[j] == '1'){
                                counter=counter+c0+h;
                            }
                        }
                    }
                }
                arr[i]=counter;
            }
        }
        for(int i=0;i<t;i++) cout<<arr[i]<<endl;
    }
    return 0;
}
