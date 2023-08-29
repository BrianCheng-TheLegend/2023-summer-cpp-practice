#include<iostream>
#include<string>

using String =std::string;

class Entity
{
private:
    String m_Name;
public:
    Entity(): m_Name("Unknown"){};
    Entity(const String& name):m_Name(name){}
    const String& GetName() const{return m_Name;}
};

int main(){
    int a=2;
    int* b=new int[50];//50bytes

    Entity* ent=new Entity[50];
    Entity* ent2=new Entity();
    //Entity* ent=(Entity*)malloc(sizeof(Entity));
    delete[] ent;
    delete[] b;
    delete ent2;
    
}