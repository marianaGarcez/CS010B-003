#include <iostream>
#include <fstream>
#include <string>
#include <vector>


using namespace std;

//creating defined type
struct Exam {
  //member variables, dot operator to access
  int score;
  string username;
};



int main(int argc, char * argv[]){
  
  //verify file
  if (argc != 2){
    cout << "USAGE: " << argv[0] << " data.txt " << endl;
    return 1;
  }
  //Open scores file
  ifstream fin(argv[1]);
  
  // open, reading, fail - file is working 
  if (!fin){
    cout << "Error Opening: " << argv[1] << endl;
    return 1;
  }
  //int example;
  //vector<int> test;
  //test.push_back(example);
  
  vector<Exam> quiz1;
  Exam entry;
  
  fin  >> entry.username;
  
  while (entry.username != "done"){
    
     fin  >> entry.score;
     quiz1.push_back(entry);
     fin  >> entry.username;
    
  }
  
  cout << quiz1.at(1).score << endl;
  
}