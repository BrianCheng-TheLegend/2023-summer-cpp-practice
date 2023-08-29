#include<iostream>

//can only pass by intger value
//if you want to pass another data type you should write another function
// void Print(int value){
//     std::cout<<value<<std::endl;
// }
// 


// template<typename T>
// void Print(T value){
//     std::cout<<value<<std::endl;
// }
// //this will not be an actual funciton
// //it will only be created when we call this function


// template<int N>
// class Array
// {
// private:
//     int m_Array[N];
// public:
//     int  GetSize() const{return N;}
// };

template<typename T,int N>
class Array
{
private:
    int m_Array[N];
public:
    int  GetSize() const{return N;}
};



int main(){

    // Print("hi");
    // Print(132.566);

    //Print<int>(5);

    Array<std::string,10>array;
    std::cout<<array.GetSize()<<std::endl;

    std::cin.get();
} 