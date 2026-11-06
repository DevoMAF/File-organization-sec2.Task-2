
#include <iostream>
#include <fstream>
using namespace std;
#define er "\n"
int main()
{
 string fruit ;
  
 ifstream myfile("fruit.txt");


while(getline(myfile,fruit)){

  cout<<fruit<<er;
}
myfile.close();

ofstream outf("fruit.txt",ios::app);


    outf << "Fresh Fruits"  ;



    outf.close();
 
}
     
