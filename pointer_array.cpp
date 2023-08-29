#include<iostream>

namespace pointerarray{
    void example(){
        int *ptr;
        int arr[5];
        ptr=arr;
        //ptr=&arr[0];
    }
    void practice(){
        int*ptr;
        int arr[5]={5,6,7,8,9};
        ptr=arr;
        for(int i=0;i<5;i++){
            std::cout<<*(ptr+i)<<std::endl;
        }
    }
    void example1(){
        float arr[3];
        float *ptr;
        for(int i=0;i<3;i++){
            std::cout<<"&arr["<<i<<"]="<<&arr[i]<<std::endl;
        }
        ptr=arr;
        for(int i=0;i<3;i++){
            std::cout<<"ptr +"<<i<<"="<<ptr+i<<std::endl;
        }
    }
    void example2(){
          float arr[5];
        // Insert data using pointer notation
        std::cout << "Enter 5 numbers: ";
        for (int i = 0; i < 5; ++i) {
            // store input number in arr[i]
            std::cin >> *(arr + i) ;
        }
        // Display data using pointer notation
        std::cout << "Displaying data: " << std::endl;
        for (int i = 0; i < 5; ++i) {
            // display value of arr[i]
            std::cout << *(arr + i) << std::endl ;
        }

    }
}



int main(){
    pointerarray::example2();
}