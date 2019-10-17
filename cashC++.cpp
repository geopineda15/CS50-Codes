#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float pay,count = 0,twentyFive = 0,ten =0, five = 0, one = 0;
	
	do{
		cin >> pay;
	} while(pay <=-1);
	
	pay = round(pay *100);
	
	
	while(pay>=25){
		pay-=25;
		twentyFive++;
		count++;
	}
	
	
	while(pay>10){
		pay-=10;
		ten++;
		count++;
	}
	
	
	while(pay>=5){
		pay-=5;
		five++;
		count++;
	}
	
	
	while(pay>=1){
		pay-=1;
		one++;
		count++;
		
	}
	
	cout << "Twenty Five Cents : " << twentyFive << endl;
	cout << "Ten Cents : " << ten << endl;
	cout << "Five Cents: " << five << endl;
	cout << "1 Cent : " << one << endl;
	cout << "Maximum number of coins given " << count << endl;
	
	
	
	return 0;
	
}
