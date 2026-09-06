#include <iostream>

using namespace std;
int main(){
    string b;
    cout <<"Enter rock,paper,scissor: ";
    cin>>b;
    string a[] = {"rock","paper","scissor"};

    srand(time(NULL));
    int index = rand() % 3;
    cout<< "Computer: "<<a[index]<<endl;

    if(b == a[index]){
        cout<<"draw";
    }else if(b == "rock" && a[index] == "rock"){
        cout<<"You win";
    }else if (b =="paper" && a[index] == "paper"){
        cout<<"You win";
    }else if (b =="scissor" && a[index] == "scissor"){
        cout<<"You win";
    }else{
        cout<<"computer win";
    }
    return 0;
}
