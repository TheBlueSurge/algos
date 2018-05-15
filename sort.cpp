#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

using namespace std;

/**
\fn linearSearch
\brief Search data for the first occurrence of key
\param [in] key The value being searched for
\param [in] data The data set that will be searched
\returns location of key if found or -1 if not found
*/

int linearSearch(auto data, auto key){
	for(int i = 0; i < data.size();i++){
			if(data[i] == key)
				return i;
	}
		return -1;
}

void BubbleSort(auto data){
	for(int i = 0; i < data.size(); i++){
			for( int j = 0; j < data.size()-1; j++){
				if (data[j] > data[j+1])
					swap(data[j], data[j+1]);
			}
	}
}



void SelectionSort(auto& data){
	for (int i = 0; i < data.size(); i++){
			int small = i;
				for (int j = i+1; j < data.size();j++){
					if(data[j] < data[small])
						small =j;
				}
			swap(data[i], data[small]);
	}
}

void InsertionSort(auto& data){
		for( int i = 0; i < data.size()-1; i++){
			int j = i+1;
			while( j> 0 and data[j] < data[j-1]){
					swap(data[j], data[j-1]);
					 j= j-1;
			}
		}
}

int main()
{
  vector<string> inputs;
  string input;
  int result;

   cout<<"Welcome to \"search it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl<<endl;
   cout<<"To end input type the #-character (followed by Enter)"<<endl<<endl;

   cin>>input;
 
    while(input != "#")//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
       cin>>input;
    }

   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit program
  }
 
   cout<<endl<<"To end input type the #-character (followed by Enter)"<<endl<<endl;
	cout << "This shall now be sorted" << endl;
			InsertionSort(inputs);
		
				   for (int i = 0; i < inputs.size(); i++)
					{
						cout<<inputs[i]<<" , ";
					}


   cout<<endl<<"Program \"sort it\" is now finished."<<endl<<endl;

    return 0;
}

