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
int linearSearch(auto data, auto key);//prototype

void BubbleSort(auto& data);

void SelectionSort(auto& data);

void InsertionSort(auto& data);


int main()
{
  vector<int>inputs;
  int search_key, input;
  int result;

   cout<<"Welcome to \"sort it\". We first need to know which sort you want to use."<<endl;
   cout<<"1. BubbleSort."<< endl;
   cout << "2. Selection Sort" << endl;
   cout<< "3. Insertion Sort" << endl;
   
   cin >> result;
  
	switch(result){
		case 1: cout << "Let us begin" << endl;
				cout << "Please input data and when finished, type '0' to stop" << endl;
	
	
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
			  else
			   {
				  BubbleSort(inputs);
				   for (int i = 0; i < inputs.size(); i++)
					{
						cout<<inputs[i]<<" , ";
					}
				}
			   
			   cout<<endl<<"Program \"sort it\" is now finished."<<endl<<endl;
			   
				break;
				
				
		case 2: cout << "Let us begin" << endl;
				cout << "Please input data and when finished, type '#' to stop" << endl;
				
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
			  else
			   {
				  BubbleSort(inputs);
				   for (int i = 0; i < inputs.size(); i++)
					{
						cout<<inputs[i]<<" , ";
					}
				}
		
				break;
		case 3: cout << "Let us begin" << endl;
				cout << "Please input data and when finished, type '#' to stop" << endl;
				
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
			  else
			   {
				  BubbleSort(inputs);
				   for (int i = 0; i < inputs.size(); i++)
					{
						cout<<inputs[i]<<" , ";
					}
				}
		
				break;
		default: cout << "Invalid attempt" << endl;
	}
 

    return 0;
}

int linearSearch(auto data, auto key){
	for(int i = 0; i < data.size();i++){
			if(data[i] == key)
				return i;
	}
		return -1;
}


void BubbleSort(auto& data){
	for (int k = 1; k < data.size();k++){
			for (int i = 0; i < data.size()-1-k;i++){
				if(data[i] > data[i+1])
					swap(data[i], data[i+1]);
		}
	}
}

void SelectionSort(auto& data){
		int i, j, minIndex, tmp;
		
		for(i = 0; i < data.size()-1; i++){
				minIndex = i;
			//find smallest in unsorted part
			for(j = i+1; j < data.size(); j++){
				if(data[j] < data[minIndex])
					minIndex = j;
			} 
			
			if(minIndex != i){
					tmp = data[i];
					data[i] = data[minIndex];
					data[minIndex] = tmp;
		}
	}
}

void InsertionSort(auto& data){
	int nextIndex, moveItem, insertVal;
		//looping through elements of vector
			for(nextIndex = 1; nextIndex < data.size(); nextIndex++){
				insertVal = data[nextIndex];
				moveItem = nextIndex;
				
				while (moveItem > 0 && data[moveItem -1] > insertVal){
					data[moveItem] = data[moveItem + 1];
					moveItem--;
				}
			data[moveItem] = insertVal;
		}
}
