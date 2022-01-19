#include <iostream>
#include <vector>
using namespace std;

//value vs reference
//value will not change vector, because it is a copy
//value needs to copy elements one by one!!

//reference is a pointer in memory to the variable/vector
//adress in memory for the vector
//reference can or cannot change the original vector 
// cost makes sure my function is not allowed to change 

void display(const vector<int> & );

// Put function prototype (declaration) here
int min (const vector<int> & );

int main() {
   vector<int> v;
   int entry;

   cout << "Enter an integer: ";
   cin >> entry;
   cout << endl;

   while (entry >=0 ) {
     v.push_back(entry);
     cout << "Enter an integer: ";
     cin >> entry;
     cout << endl;
   }
   display(v);
   cout << endl;
   cout << "Smallest Value: " << min(v) << endl;
   return 0;
}

// Put function implementation (body) here
// Returns the smallest value in the vector
int min(const vector<int> &v) {
    int minVal = v.at(0);
    for (unsigned i = 1; i < v.size(); ++i) {
        if (v.at(i) < minVal) {
            minVal = v.at(i);
        }
    }  
    return minVal;
}

void display(const vector<int> &v) {
   for (unsigned i = 0; i < v.size(); ++i) {
     cout << v.at(i) << ' ';
   }
}