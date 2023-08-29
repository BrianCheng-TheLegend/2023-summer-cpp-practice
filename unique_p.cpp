#include<iostream>
#include<string>
#include<memory>

class Entity
{
    public:
    Entity()
    {
        std::cout<<"Create Entity"<<std::endl;
    }
    ~Entity()
    {
        std::cout<<"Destroyed Entity"<<std::endl;
    }
    void print(){}
};

int main()
{
    
    {
        std::unique_ptr<Entity> entity(new Entity());
        //unique pointer can not copy by "=" ,since the copy function is delete
        //may should copy this pointer with other function or operator
        std::shared_ptr<Entity> sharedEntity =std::make_shared<Entity>();
        //shared pointer has allocate another memory called contorl block to store that
        //reference count
        //so dont use new on shared pointer it will cost another block of memory
        std::weak_ptr<Entity> weakEntity;
        //same as shared pointer but "Does not increase" the ref count
        //you dont take over the ownership of object
        //can access to the data but can not keep the data alive
        entity->print();
    }

        
    
    std::cin.get();
} 