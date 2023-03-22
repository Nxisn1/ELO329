#include<iostream>
using namespace std;


int main(){
	int array[5]={1,23,234,42,5};
	int largo, valorM=0;
	largo = sizeof(array)/sizeof(array[0]);

	for(int i=0;i<largo;i++){
		if(array[i]>valorM){
			valorM=array[i];
		}
	};

	cout<<valorM<<endl;

	return 0;
}