// kashiiitech
// time complexity O(n) and space complexity O(1)
#include <iostream>

int __buySellStock(int __array[],int __size) {
    int __minSoFar = __array[0];
    int __maxProfit = 0;
    
    for (int i=0;i<__size;i++)  {
        __minSoFar = std::min(__minSoFar, __array[i]);
        int __profit = __array[i]-__minSoFar;
        __maxProfit = std::max(__maxProfit,__profit);
    }
    
    return __maxProfit;
}









///////////////////////////////////////////////////////






int main() {
    // Write C++ code here
    int a[] = {5,2,6,1,4};
    
    std::cout<<__buySellStock(a,4);

    return 0;
}