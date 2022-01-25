#include <iostream>
#include<vector>
using namespace std;

/* Solution
- Step 1: initial an array(count) to save the appear of the value in array(arr)
- Step 2: Go through an array(count). If an array has all element which differ from 0 return -1, else return the index of this array
*/

/*  The complexity of this solution
    1 + 1 + 1 + 1 + n + 1 + n = 2n + 5
    O(n)
*/
int Q4(vector<int> arr){
    int result = -1;
    int n = arr.size();
    int count[n] = {0};
    for(int i = 0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i = 0;i<n;i++){
        if(count[i] == 0){
            result = i;
        }
    }
    return result; 
}
int main()
{
    vector<int> arr = {0,1,3,4}
    cout << Q4(arr);
    return 0;
}
