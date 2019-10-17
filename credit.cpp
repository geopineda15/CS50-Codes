#include <iostream>
#include <cmath>

using namespace std;

int main(){
	long long credit;
	cin >> credit;
	int size = log10(credit)+1;
	long long list[size];
	int sum;
	cout << endl;
	for(int i=size-1;i>=0;i--){
		list[i] = credit % 10;
    	credit = credit / 10;
	}
	for(int i=0;i<size;i++){
		if(i % 2 == 0){
			if(list[i] * 2 >=10){
				int temp,temp1=1;
				temp = (list[i]*2)%10;
				sum += temp + temp1;	
			} else if(list[i] * 2 <=9){
				sum += list[i]*2;
			}
		} else if (i% 2 !=0){
				sum += list[i];
		}
	}
	cout << "Total " << sum << endl;
	if(sum % 10==0){
		cout << "Valid" << endl;
	} else {
		cout << "Invalid" << endl;
	}
	
		if(list[0] == 4){
			cout << "You have a Visa Card" << endl;
		} else if(list[0] == 5 ){
			if(list[1] == 1 || list[1] == 2 || list[1] == 3 || list[1] == 4 || list[1] == 5){
				cout << "You have a Master Card" << endl;
			}
		} else if(list[0] == 3){
			if(list[1] == 4 || list[1] == 7){
				cout << "You have an American Express Card" << endl;
			}
		} else {
				cout << "Unknown Card" << endl;
		}
	
	
	return 0;
}
