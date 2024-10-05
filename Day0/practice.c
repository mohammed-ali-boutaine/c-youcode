#include <stdio.h>



void preChallnge(){

    int arr[] = {1, 3, 5, 6, 8};
    int n = 5; 
    
    int minNum, maxNum;
    
    for(int i = 0; i < n; i++) {
        int sum = 0;
        
        for(int j = 0; j < n; j++) {
            if(i == j) {
                continue;
            };
            sum += arr[j];
        }
        
        if(i == 0) {
            minNum = sum;
            maxNum = sum;
        }
        
        if(sum > maxNum) {
            maxNum = sum;
        }
        if(sum < minNum) {
            minNum = sum;
        }
    }
    
    printf("Maximum sum: %d\n", maxNum);
    printf("Minimum sum: %d\n", minNum);

}
int main() {


    return 0;
}
