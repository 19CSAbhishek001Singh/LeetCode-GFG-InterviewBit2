class Solution {
public:
    bool isPowerOfFour(int n) {
    if(n==0) return false;    
    if(ceil(log10(n) / log10(4))==floor(log10(n) / log10(4))){
         return true;
     }
     return false;
    }
};


// starting again after exam 20 days gap