#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<string>
using namespace std;
using vi = vector<int>;

int main(){
    vi arr = {3, 2, 54, 2};
    sort(arr.begin(), arr.end(), greater<int>());
    cout<<arr[0];
    return 0;
}