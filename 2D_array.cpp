#include<iostream>
#include<stdlib.h>

using namespace std;



int hourglassSum(int arr[6][6]){
    int count;
    
    
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                int sum=0;
                sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j+1]+arr[i+2][j+2]+arr[i+2][j];
                count<<sum;
                if(i == 0 && j == 0) count = sum;
                if(count < sum){
                    count=sum;
                }
            }
        }
    
    return(count);
}

int main(){

  	int arr[6][6],counter=0;
	for(int i=0;i<6;i++){
	    for(int j=0;j<6;j++){
        cin>>arr[i][j];
        if(arr[i][j] >= -9 && arr[i][j] <= 9){
            counter=counter+1;
            
            
        }
        
        
        
    }
}


  if(counter == 36)  cout<<hourglassSum(arr);


}
	
	
