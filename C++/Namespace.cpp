#include <iostream>
//namespace = provides a solution for preventing name conflicts in large projects .Each entity
//needs a unique name. a namespace allows for identification named entities as long as the namespace are different

//?if you want to assign two variables of same name then use namespaces

namespace abc{
    int x = 1;
}
namespace xyz{
    int x = 2;
}
namespace tyu{
    int y = 3;
}
int main(){
    
    int x = 0; //no matter what it will take the local values first unless we use "using namespace"
    std::cout<<x<<std::endl;     //output will be 0
    std::cout<<abc::x<<std::endl;//output will be 1
    std::cout<<xyz::x<<std::endl;//output will be 2

    //but if we do this instead 
    using namespace tyu;
    std::cout<<y<<'\n'; // output will be 3


    //now if we dont wanna write std again and again we can just use name space
    using namespace std; //!but this is not a safe thing to use and can create conflicts

    string task1 = "hello"; //and this will work  
    cout<<task1<<'\n';

    //**now this below is more of a safer option
    using std::cout;
    using std::string;

    string hobbies = "basketball";
    cout<<"my hobbies are "<<hobbies<<'\n';

    return 0;
}

