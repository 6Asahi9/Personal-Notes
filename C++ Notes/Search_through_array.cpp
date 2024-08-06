#include <iostream>

int searchArray(int array[], int size, int element);
int main(){
    int numbers[ ] = {44, 65, 12, 78, 90, 32, 61};
    int size = sizeof(numbers)/sizeof(int);
    int index;
    int myNum;
    std::cout<<"what number are you searching for\n";
    std::cin>>myNum;

    index = searchArray(numbers, size, myNum);
    if(index != -1){
        std::cout<<myNum<<" was found at index "<<index<<"\n";
    }
    else{
        std::cout<<myNum<<" was not found\n";
    }


    return 0;

}
int searchArray(int array[], int size, int element){
    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
        
    }
    return -1;
}
