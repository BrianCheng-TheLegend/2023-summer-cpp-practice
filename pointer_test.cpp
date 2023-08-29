#include<iostream>

namespace pointertest{
    void example1(){
        int var1=3;
        int var2=10;
        int var3=99;
        std::cout<<&var1<<std::endl;
        std::cout<<&var2<<std::endl;
        std::cout<<&var3<<std::endl;
    }
    void practice1(){
        int* pointerv,v;
        v=10;
        pointerv=&v;
        std::cout<<pointerv<<std::endl;
    }
    void example2(){
        int var=5;
        int* pointerv;
        pointerv=&var;
        std::cout<<"var="<<var<<std::endl;
        std::cout<<"Address of var(&var)="<<&var<<std::endl;
        std::cout<<"pointerv="<<pointerv<<std::endl;
        std::cout<<"Countent of the address pointed to by pointV(*pointv)="
        <<*pointerv<<std::endl;
    }
    void practice2(){
        int var=5;
        int* pointVar;
        pointVar=&var;
        *pointVar=1;
        std::cout<<var<<std::endl;
    }
    void example3(){
        int var=5;
        int* pointv;
        pointv=&var;
        std::cout<<"var="<<var<<std::endl;
        std::cout<<"*pointv="<<*pointv<<std::endl<<std::endl;
        std::cout<<"changing value of var to 7:"<<std::endl;
        var=7;
        std::cout<<"var="<<var<<std::endl;
        std::cout<<"*pointv="<<*pointv<<std::endl<<std::endl;
        std::cout<<"changing value of *pointv to 16:"<<std::endl;
        *pointv=16;
        std::cout<<"var="<<var<<std::endl;
        std::cout<<"*pointv="<<*pointv<<std::endl<<std::endl;
        /*//common mistake
        int var, *varPoint;

        // Wrong! 
        // varPoint is an address but var is not
        varPoint = var;

        // Wrong!
        // &var is an address
        // *varPoint is the value stored in &var
        *varPoint = &var;

        // Correct! 
        // varPoint is an address and so is &var
        varPoint = &var;

        // Correct!
        // both *varPoint and var are values
        *varPoint = var;
        */
    }
}

int main(){
    pointertest::example3();
}
