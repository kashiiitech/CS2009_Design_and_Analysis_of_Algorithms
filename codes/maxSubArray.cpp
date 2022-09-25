// kashiiitech -----
#include <iostream>

// Kadane's Algorithm


// Function to Find Sub Array with Maximum Sum
int __maxSubArray(int array[],int size) {
    
    // int size = sizeof(a)/sizeof(a[0]);
    int __maxSum=-1000;
    int __Sum = 0;
    
    for(int i=0;i<size;i++) {
        __Sum = array[i] + __Sum;
        __maxSum = std::max(__maxSum,__Sum);
        
        if(__maxSum < 0) {
            __maxSum=0;
            __Sum = 0;
        }
    }
    return __maxSum;
} 



///////////////////////////////////////////



int main() {

    int array[] = {-1, 3,2,5,-9,100};
    std::cout<<__maxSubArray(array,6);
    

    return 0;
}