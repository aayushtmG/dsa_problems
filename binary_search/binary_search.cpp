#include <iostream>
#include <string>
using std::cout, std::endl;


int binary_search(int arr_size, int target,int arr[]);

int main(int argc, char *argv[]){
    if(argc < 2 || std::stoi(argv[1]) < 0){
        cout << "Target not provided"<<endl;
        return 0;
    }

    int target = std::stoi(argv[1]);
    const int arr_size = 10;
    int arr[arr_size] = {2,3,8,9,10,19,55,86,99,101}; 
    int index =  binary_search(arr_size,target,arr);
    if(index >= 0){
        cout << "Found target on " << index << endl;
    }else{
    cout << "Target not found!!"<< endl;
    }
    return 0;
}

 int binary_search(int arr_size, int target,int arr[]){
    int start = 0;
    int end = arr_size - 1 ; 

    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid] == target){
            return mid;
        }else if(arr[mid] > target){
            start = mid + 1; 
        }else if(arr[mid] < target){
            end = mid - 1;
        }
    }
    return -1;
}
