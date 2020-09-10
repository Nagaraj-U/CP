/*
Problem discussion
Send Feedback
Harshit gave Aahad an array of size N and asked to minimize the difference between the maximum value and minimum value by modifying the array under the condition that each array element either increase or decrease by k(only once).
It seems difficult for Aahad so he asked for your help
Input Format
The First line contains two space-separated integers: N,K
Next lines contain N space-separated integers denoting elements of the array
Output Format
The output contains a single integer denoting the minimum difference between maximum value and the minimum value in the array
Constraints
1 =< N <= 10^5 
1 <= Ai,K <= 10^9
Sample Input1:
3 6
1 15 10
Sample Output1:
5
Explaination
We change from 1 to 6, 15 to  9 and 10 to 4. Maximum difference is 5 (between 4 and 9). We can't get a lower difference.
*/


// #include<bits/stdc++.h>
// using namespace std;
// int main() {
  
//     int n,k;
//     cin >> n >> k;
//     int* arr = new int[n];
//     int big,small;
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
// 	sort(arr,arr+n);
//     small = arr[0]+k;
//     big = arr[n-1]-k;
// 	if(small > big){
//         int temp = small;
//         small = big;
//         big = temp;
//     }
//     for(int i=1;i<n-1;i++){
//         int sub,add;
//         sub = arr[i]-k;
//         add = arr[i]+k;
//         if(sub >= small || add <= big){
//             continue;
//         }else{
//             if(big-sub <= add-small){
//                 small = sub;
//             }else{
//                 big = add;
//             }
//         }
//     }
//     int ans = big - small;
//     cout << ans << endl;
// }


#include<bits/stdc++.h>
using namespace std;
int main() {
  
    int n,k;
    cin >> n >> k;
    int* arr = new int[n];
    int big,small;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
	sort(arr,arr+n);
    small = arr[0]+k;
    big = arr[n-1]-k;
	if(small > big){
        int temp = small;
        small = big;
        big = temp;
    }
    for(int i=1;i<n-1;i++){
        int sub,add;
        sub = arr[i]-k;
        add = arr[i]+k;
        if(sub < small && add > big){
    		if(big-sub <= add-small){
                small = sub;
            }else{
                big = add;
            }
            
        }
    }
    int ans = big - small;
    cout << ans << endl;
}
