#include <iostream>
#include<vector>
using namespace std;
/*--------------------------------Q5--------------------------------*/
/* Solution
- 2 sorted array, so I recognized that I don't need to create a new array to store all elements. 
Besides that, Median is 50% data, so I set the loop from 0 to a half of sum of the length of 2 array.
- Step 1, I compare each elements in 2 sorted array, if smaller then increase the index of this array.
- Step 2, If we set through all element in one of 2 sorted array, we just set the other array to a half of sum of the length of 2 array.
*/

/*The complexity of algorithm
    O(N)
*/
float Q5(vector<int> nums1, vector<int> nums2){
    int n = nums1.size();
    int m = nums2.size();
    int sumSize = n + m;
    int i = 0, j = 0;
    int med1,med2;
    for(int count = 0;count<=sumSize/2;count++){
        med2=med1;
        if(i!= n && j !=m){
            if(nums1[i] > nums2[j]){
                med1 = nums2[j];
                j+=1;
            }
            else{
                med1 = nums1[i];
                i+=1;
            }
        }
        else if(i<n){
            med1 = nums1[i];
            i+=1;
        }
        else{
            med1 = nums2[j];
            j+=1;
        }
    }
    if(sumSize%2!=0){
        return med1;
    }
    else{
        return (med1 + med2)/2.0;
    }
}
int main()
{
    vector<int> a = {1,2,3,4};
    vector<int> b= {2,4,5,7};
    cout << Q5(a,b);


    return 0;
}
