#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>a={1,2,3,4,5,6,7,8};
    for(auto num:a){
        cout<<num
            <<" ";
    }
    cout<<endl;
    return 0;
}