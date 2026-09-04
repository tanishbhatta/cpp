#include <iostream>

void printScores(double scores[], int size){
    std::cout << "The score of the students are:" << std::endl;
    for (int i=0; i<size; i++){
        if (i!=size-1) std::cout << scores[i] << ", ";
        else std::cout << scores[i];
    };
};

double findHighest(double scores[], int size){
    double highest = scores[0];
    for(int i=0; i<size; i++){
        if (i != size-1 && scores[i+1] > highest) highest = scores[i+1];
    };
    return highest;
};

double findLowest(double scores[], int size){
    double lowest = scores[0];
    for (int i=0; i<size; i++){
        if (i != size-1 && scores[i+1] < lowest) lowest = scores[i+1];
    };
    return lowest;
};

double calculateAvg(double scores[], int size){
    double added = 0;
    for (int i=0; i<size; i++){
        added += scores[i];
    };
    double avg = added/size;
    return avg;
};

int main(){
    double arr[] = {5, 3, 8};
    int len = sizeof(arr)/sizeof(arr[0]);
    printScores(arr, len);
    std::cout << "\nThe highest marks obtained: " << findHighest(arr, len) << std::endl;
    std::cout << "The lowest marks obtained: " << findLowest(arr, len) << std::endl;
    std::cout << "The average marks: " << calculateAvg(arr, len) << std::endl;
    return 0;
};