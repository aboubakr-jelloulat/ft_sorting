#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> nums)
{
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";
    cout << endl;
}


/*
    Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order.
    Time Complexity: O(n^2)
    Space Complexity: O(1)
*/

void BubbleSort(std::vector<int> &nums)
{
    int n = nums.size() - 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0;  j < n - i; j++)
        {
            if (nums[j] > nums[j + 1])
                swap(nums[j], nums[j + 1]);
        }
    }
}

int main(void)
{

    vector<int> nums = { 5, 1, 4, 2, 8 };
    
    std::cout << "Before : ";
    display(nums);

    BubbleSort(nums);

    std::cout << "After : ";
    display(nums);
    

    return 0;
}
