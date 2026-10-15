#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec={5, 15, 25, 35};
   vec.insert(vec.begin()+2, 20);
   cout<<vec.size()<<endl;
   vec.clear();
   cout<<vec.empty();
};