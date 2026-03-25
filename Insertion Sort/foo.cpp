#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";
    cout << endl;
}

/*
    insertion sort is a simple sorting algorithm that builds the final sorted array one item at a time.
        it's works by repeatedly taking the next unsorted element and inserting it into the correct position in the already sorted part of the array.

    time complexity : O(n^2) in worst case and O(n) in best case (when the array is already sorted).
    space complexity : O(1) 

*/

void insertionSort(vector<int> &nums)
{
    for (int i = 1; i < nums.size(); i++)
    {
        int key = nums[i];
        int j = i - 1;

        while (j >= 0 && nums[j] > key)
        {
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = key;
    }

}



int main()
{
    vector<int> nums = {12, 11, 13, 5, 6};

    cout << "Before : ";
    display(nums);

    insertionSort(nums);

    cout << "After : ";
    display(nums);

    return 0;
}
