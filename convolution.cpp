// 1. The Time Complexity of Convolution Implemented in MATLAB is O(PQ), where P & Q are the lengths of the two Discrete Signals to be convolved. 

#include<bits/stdc++.h>
using namespace std;

vector<int> convolution(vector<int> &signal1, vector<int> &signal2, int signal1_zero, int signal2_zero){
    
   
    int signal1_size = signal1.size();
    int signal2_size = signal2.size();
     vector<int> signal3; // Define the solution vector
    // For the samples in y(n), the left limit is -(signal1_zero+signal2_zero).
    int left_limit = -(signal1_zero+signal2_zero-1);
    // For the samples in y(n), the right limit is (signal1_size+signal2_size-signal1_zero-signal2_zero)
    int right_limit = signal1_size+signal2_size-signal1_zero-signal2_zero; 
    // This for loop covers all the samples of y(n)
    for(int i=left_limit; i<right_limit; i++){
        int sum=0;
        for(int j=-signal1_zero; j<signal1_size; j++){
            if((i-j)<-signal2_zero || (i-j)>signal2_size) continue;
            else{
                sum+=signal1[j]*signal2[i-j];
            }
        }
        
        
        signal3.push_back(sum);
        
    }
    
    return signal3; 
}

int main(){
    // First Signal x(n)
    vector<int> signal1= {2,1,3,2};
   
    // The Index at which the n=0th sample lies for Signal 1
    int signal1_zero = 1;
    // Second Signal h(n)
    vector<int> signal2={5,1,5};
    
    // The Index at which the n=0th sample lies for Signal 2
    int signal2_zero = 0; 
    // The Convoluted Singal 
   int signal1_size = signal1.size();
    int signal2_size = signal2.size();
     vector<int> signal3;
    
    // convolution function is performing the Convolution of Signal 1 with Signal 2 
    signal3 = convolution(signal1,signal2, signal1_zero, signal2_zero); 
    
    for(int i=0; i<signal3.size(); i++){
        cout<<signal3[i]<<" "; 
    }
}
