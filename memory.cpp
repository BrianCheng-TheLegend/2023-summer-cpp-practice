#include<iostream>

namespace MemoryManagement{
    void example1(){
        int* pointInt;
        float* pointFloat;
        pointInt=new int;
        pointFloat=new float;
        
        *pointInt=45;
        *pointFloat=45.5f;
        std::cout<<*pointInt<<std::endl;
        std::cout<<*pointFloat<<std::endl;

        delete pointInt;
        delete pointFloat;
        std::cout<<*pointInt<<std::endl;
        std::cout<<*pointFloat<<std::endl;
    }
    void example2(){
        int num;
        std::cout<<"enter total number fo student:";
        std::cin>>num;
        float* ptr;
        ptr=new float[num];
        std::cout<<"enter gpa of student"<<std::endl;
        for(int i=0;i<num;i++){
            std::cout<<"Student"<<i+1<<":";
            std::cin>>*(ptr+i);
        }
        std::cout<<"\nDisplaying gpa"<<std::endl;
        for(int i=0;i<num;i++){
            std::cout<<"student"<<i+1<<":"<<*(ptr+i)<<std::endl;
        }
        delete ptr;
    }
}

int main(){
   MemoryManagement::example2();
}