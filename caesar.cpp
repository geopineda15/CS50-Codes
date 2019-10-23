/*

CAESAR ENCRYPTION EXAMPLE

plaintext	H	E	L	L	O
+ key	1	1	1	1	1
= ciphertext	I	F	M	M	P 

*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	int a;
	cin >> a;
	
	string name;
	cin.ignore();
	getline(cin,name);
	
	int size = name.length();
	
	for(int i=0;i<size;i++){
		char final = name[i];
		
		
		if(final !=',' && final !=' '){
			final+=a;
		}
		cout << final;
		
	}
	
	return 0;
}
