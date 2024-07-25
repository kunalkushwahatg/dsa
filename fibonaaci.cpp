#include <bits/stdc++.h> 
using namespace std;

int fibonaaci(int n){
    if(n<=1){
        return n;
    }else{
        return fibonaaci(n-2) + fibonaaci(n-1);
    }
}

int main(){

    int n ;

    cin >> n;
    cout<<fibonaaci(n)<<endl;


}