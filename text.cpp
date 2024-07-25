#include<bits/stdc++.h>

using namespace std;


void explainPair(){
    pair<int,int> p = {2,6};
    cout << p.first << " " << p.second;

    pair<int , int> arr[]  = { {1,5} , {4,8} , {2,7} };
    int arrLength = sizeof(arr)/sizeof(arr[0]); 
    for(int i=0 ; i<arrLength ; i++){
        cout << arr[i].first << "\n" ;
    }
 }


void explainVector(){
    //size of vector is varble can increase its size
    vector<int> v;

    v.push_back(1); //pushes vecotr to element 
    v.emplace_back(2); //pushes the element to vector

    vector<pair<int ,int>>vec;
    
    //diff bw them
    vec.push_back({1,2}); //pushes vecotr to element 
    vec.emplace_back(1,2); //pushes the element to vector

    vector<int> v1(5);  // vec of size 5 wih garbage value
    vector<int> v1(5,100);  // vec of size 5 wih 100 value
    
    vector<int> v2(v1); // copies v1 to v2

    //iterator 

    //v.begin will return pointer to first element of array to v
    vector<int>::iterator it = v.begin();
    //going to next pointer by it++
    it++;
    cout << *(it) << " ";

    vector<int>::iterator it = v.end(); // goes back when it--
    vector<int>::iterator it = v.rend(); //reverse iterator so when it++ goes back 
    vector<int>::iterator it = v.begin();

    //long method
    for (vector<int>::iterator it = v2.begin(); it != v2.end(); ; it++){
        cout << *(it) << " ";
    }

    //short method
    //do not know datatype auto assigns the data type
    for(auto it = v1.begin() ; it != v1.end() ; i++){
        cout << *(it) << " ";
    }

    //for this auto will be int type 
    for(auto it : v){
        cout << it << " ";
    }

    v2.erase(v.begin()+2 ,v.begin()+4); // delets 2,3


    //-------------INSERT----------------
     vector<int>v(2,100);  //{100,100}
     v.insert(v.begin(),300);  //{300,100,100}
     v.insert(v.begin() + 1 , 2 , 10); //{300 , 10 ,10 ,100 , 100}

    //copy things

    v.size() ;

    {10,20}
    v.pop_back(); //{10}

    v1.swap(v2);
    
    v.clear() ;//{19.48} => {}

    v.empty() ; //True or false
}


void explainList(){
    //have front operations too
    //list doubly linked lsit 
    //vector singly linked list

    list<int> ls;

    ls.push_front();
    ls.emplace_front();

}


void stack(){
    //push pop emplace empty top
    cout << "stack" ;
}


void explainMap(){
    map<int ,int> dict ;
    dict[1] = 2 //in key 1 store 2
    
    map<int , pair<int,int>> dict ;
    dict.insert[{2,5}]  = 10;

    for(auto it : dict){
        cout << it.first << " " << it.second <<endl;

    }

    auto it = dict.find(3); // {3,1}
    cout << *(it).second;

    

    
 
}

int main(){
    cout << "Hello to my World!";
    explainPair();
    

    return 0;
}