#include <iostream>
void sort(int array[], int size);
int main(){
    int array[] ={10, 1, 9, 2, 4, 8, 3, 7, 6, 5};
    int size = sizeof(array)/sizeof(int);

    sort(array,size);

    for(int element : array){
        std::cout << element << std::endl;
    }

    return 0;
}
void sort(int array[], int size){
    int temp;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - i - 1; j++){
            //if you want decending order , do this 
            // array[j] < array[j + 1]
            if(array[j] > array[j + 1]){
                temp = array[j]; 
                array[j] = array[j + 1];
                array[j +1] = temp;
        }
        }
    }
}