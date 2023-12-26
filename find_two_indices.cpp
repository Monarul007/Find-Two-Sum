#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int theNumber){
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (numbers[i] + numbers[j] == theNumber) {
                return {i, j};
            }
        }
    }
    return {};
}

// int* twoSumArray(int* nums, int target){
//     static int a[2];
//     for(int i = 0; i < 4; i++){
//         for(int j = i + 1; j < 4; j++){
//             if(nums[i] + nums[j] == target){
//                 a[0] = i; 
//                 a[1] = j; 
//                 break;
//             }
//         }
//     }

//     return a;
// }

int main()
{
    // Write your code here
    vector<int> numbers = {2, 7, 11, 15};
    int theNumber = 9;

    vector<int> result = twoSum(numbers, theNumber);

    // int nums[4] = {2, 7, 11, 15};
    // int target = 9;
    // int* indices;
    // indices = twoSumArray(nums, target);

    // cout << "Indices found from array:";
    // for(int i = 0; i < 2; i++){
    //     cout << indices[i] << " , ";
    // }
    // cout << endl;

    if(result.empty()){
        cout << "No indices found" << endl;
    }else{
        cout << "Indices found: " << result[0] << " & " << result[1] << endl;
    }
    
    return 0;
}
