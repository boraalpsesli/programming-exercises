#include <iostream>
#include <string>
using namespace std;

string toplefttri(int size){
    string triangle = "";
    for(int i=0; i<size; i++){
        for(int j=0; j<size-i; j++){
            triangle+="*";
        }
        triangle+="\n";
    }
    return triangle;
}
//"*****\n****\n***\n**\n*\n"

string toprighttri(int size){
    return "";
}

string bottomlefttri(int size){
    return "";
}

string bottomrighttri(int size){
    return "";
}

int main(){
    int size;
    cout << "Size: ";
    cin >> size;

    int choice;
    cout << "Input 1 for top-left, 2 for top-right, 3 for bottom-left, 4 for bottom-right." << endl;
    cin >> choice;
    switch(choice){
        case 1:
            cout << toplefttri(size);
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
    }
}
