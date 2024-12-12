#include <iostream>
#include <vector>
using namespace std;

class Solution{
    private:
        int n;
        vector<int> v;
        void getN();
        void getVector();

    public:
        Solution();
        Solution(vector<int>& v, int n);

        void printVector();
        // Additional Methods can be added as per the problem requirement.

};

void Solution :: printVector(){
    cout << "Printing the vector ... \n";
    cout << "[ ";
    for(const int& ele : this->v){
        cout << ele << " ";
    }
    cout << "]\n";
}

int main(void)
{    
    Solution obj = Solution();
    obj.printVector();
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
        this->v.push_back(temp);
    }
}

Solution :: Solution(){
    getN();
    getVector();
}

Solution :: Solution(vector<int>& v, int n){
    this->n = n;
    this->v = v;
}