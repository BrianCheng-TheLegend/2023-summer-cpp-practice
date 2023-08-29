#include<iostream>
// & is for the reference or pointer is already exist 
// but if you use * it may be the new pointer with a null value in it
// to prevent the situation above you should you call by reference in the above function

//input a reference of variable
void changevalue1(int& a){
    a+=100;
}


//input a exist address(pointer or reference)
void changevalue2(int*& a){
    *a+=100;
}
//input a pointer (maybe exist or may not exist)
void changevalue3(int * a){
    *a+=100;
}

// with const this variable should not be changed in this funciton
// only call for read
void changevalue4(const int &a){
    std::cout<<a<<std::endl;
}

int main(){
    int i=1;
    changevalue1(i);
    std::cout<<i<<std::endl;
    int *p=new int;
    p=&i;
    *p=i;
    std::cout<<&p<<std::endl;
    std::cout<<p<<std::endl;
    std::cout<<*p<<std::endl;
    //changevalue2(&i) //this will cause error 
    changevalue2(p);
    std::cout<<*p<<std::endl;
    std::cout<<i<<std::endl;
    changevalue3(&i);
    changevalue3(p);
    std::cout<<*p<<std::endl;
    std::cout<<i<<std::endl;

    return 0;
}