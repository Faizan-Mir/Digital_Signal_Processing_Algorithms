// 1. The Time Complexity of Convolution Implemented in MATLAB is O(PQ), where P & Q are the lengths of the two Discrete Signals to be convoluted. 

#include<bits/stdc++.h>
using namespace std;

vector<int> convolution(vector<int> &signal1, vector<int> &signal2, int signal1_zero, int signal2_zero){
    
    int signal1_size = signal1.size();
    int signal2_size = signal2.size();
    
    int sum=0;
    // Traversing Signal 1 
    for(int i=-signal1_zero; i<signal1_size-signal1_zero; i++){
        if(signal2())
    }
}

int main(){
    // First Signal x(n)
    vector<int> signal1();
    // The Index at which the n=0th sample lies for Signal 1
    int signal1_zero = 1;
    // Second Signal h(n)
    vector<int> signal2();
    // The Index at which the n=0th sample lies for Signal 2
    int signal1_zero = 0; 
    // The Convoluted Singal 
    vector<int> signal3();
    
    // convolution function is performing the Convolution of Signal 1 with Signal 2 
    signal3 = convolution(signal1,signal2, signal1_zero, signal1_zero); 
}
