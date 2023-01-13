#include<iostream>
using namespace std;

class area{
    int length,breadth,size;
    public:
    area(int a,int b){
        length = a;
        breadth =b;
        cout<<"Area of rectangle: "<<length*breadth;
    }
    area(int a){
        size = a;
        cout<<endl<<"Area of square: "<<a*a;
    }

};
int main(){
    area a1(10,2);
    area a2(10);
}