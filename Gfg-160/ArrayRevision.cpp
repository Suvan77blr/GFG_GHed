#include <iostream>
#include <vector>
using namespace std;

class Solution{
    private:
        int n;
        vector<int> arr;
        void getN();
        void getVector();

    public:
        Solution();
        Solution(vector<int>& arr, int n);
        // Solution(vector<int> arr, int n);

        void printVector();
        // Additional Methods can be added as per the problem requirement.
        void rightRot();
        void rightRotByOne();   
        void reverse(int start, int end);

};

void Solution :: printVector(){
    cout << "Printing the vector ... \n";
    cout << "[ ";
    for(const int& ele : this->arr){
        cout << ele << " ";
    }
    cout << "]\n";
}

void Solution :: rightRotByOne()
{
    int temp = arr[0];
    for(int i = 1; i<arr.size(); i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

void Solution :: reverse(int start, int end)
{
    int temp;
    end--;
    while(start < end){
        temp = this->arr[start];
        this->arr[start] = this->arr[end];
        this->arr[end] = temp;
        end--;
        start++;
    }
}

void Solution :: rightRot()
{
    int factor;
    cout << "Enter the rotation factor : ";
    cin >> factor;

    /*
    for(int i = 0; i < factor; i++)
    {
        rightRotByOne();
    }
    */
    reverse(0, factor);
    reverse(factor, n);
    reverse(0, n);
    printVector();
}

int main(void)
{    
    Solution obj = Solution();
    // vector<int> temp {1, 2, 3, 4, 5};
    // Solution obj = Solution(&temp, 5);
    obj.rightRot();
}

void Solution :: getN(){
    cout << "Enter the size : ";
    cin >> this->n;
}

void Solution :: getVector(){
    cout << "Enter the " << n << " vector elements : ";
    int temp;
    for(int i = 0; i<n; i++){
        cin >> temp;
        this->arr.push_back(temp);
    }
}

Solution :: Solution(){
    getN();
    getVector();
}

Solution :: Solution(vector<int>& arr, int n){
    this->n = n;
    this->arr = arr;
}

