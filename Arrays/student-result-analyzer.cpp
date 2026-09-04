// IS Student Score Analyzer using a fixed-size array a good project for me right now?
// It should let the user:

// 1. Enter how many scores they have (`1`–`50`)
// 2. Store the scores in an array
// 3. Print all scores
// 4. Calculate sum and average
// 5. Find highest and lowest score
// 6. Count passing scores (for example, `>= 40`)
// 7. Search for a requested score
// 8. Optionally sort scores using bubble sort

// Split it into functions such as:

// ```
// void printScores(int scores[], int size);
// int findHighest(int scores[], int size);
// int findLowest(int scores[], int size);
// double calculateAverage(int scores[], int size);
// ```
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