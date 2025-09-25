#include <iostream>
#include <vector>

using namespace std;
/**
 * @brief prints the elements in a vector and memory location
 * 
 * @param vec- vector of int
 */
void printMemVec(vector<int> & vec){
    printf("vector-each int is %lu bytes\n", sizeof(vec[0]));
     for(size_t i = 0; i < vec.size(); i++){
      printf("value %i at memory location %p\n",vec[i], &vec[i]);
   }

}
/**
 * @brief increments all the element in the vector by 10 
 * 
 * @param vec address to a vector of integers
 */
void incVecBy10(vector<int> & vec){
    for(size_t i = 0; i < vec.size(); i++){
       vec[i] += 10;
   }
}

int main(){
    const int SIZE = 5;

    vector<int> vec (SIZE);

    for(int i = 0;i <= SIZE; i++ ){
        vec[i] = 100 + i;
    }

 printf("Before increment-------------\n");
 printMemVec(vec);

 incVecBy10(vec);
 printf("After increment------------\n");
 printMemVec(vec);
 
 
 vec.pop_back();
 
 printf("After Pop----------------\n");
 printMemVec(vec);


 vec.push_back(101);
 vec.push_back(102);

 printf("After Push-----------------\n");
    printMemVec(vec);
    return 0;
}