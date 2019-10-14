#include <iostream>

using namespace std;

int main()
{
	int num;
	
	do{
		cout << "Enter num";
		cin >> num;
	}while(num >8 || num <1 || isdigit(num));
	
	cout << endl;
	int space = num -1;
	
	for(int j=0;j<num;j++){
		for(int k=0;k<space;k++){
			cout << " ";
		}
		for(int l=0;l<j+1;l++){
			cout << '#';
		}
		
		cout << " ";
		
		for(int k=0;k<j+1;k++){
			cout << '#';
		}
		cout << endl;
		space--;
	}
}
