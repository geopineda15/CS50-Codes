#include <iostream>
#include <cstdlib>

using namespace std;
	
	//declare
	void display();
	void regenerate(char sign1, int x);
	
	//variables
	int p,health=100;
	char s;

int main(){
	
	do{
		
		
		
		//input
		cin >> s >> p;
		
		//function regenerate
		regenerate(s,p);
		
		//function display
		display();
		
		//spacing
		cout << endl;
		
	} while(health >0);
	
	
}

void regenerate(char s, int p){
	
	//if positive
	if(s == '+'){
		health +=p;
	} 
	
	//if negative
	else if (s == '-'){
		health -=p;
	}
	
	//if heatlh >100
	if(health>100){
		health = 100;
	}
	
}

void display(){
	
		int bar=health/10;
		
		cout << "HealthBar" << endl;
		//healthbar
		cout << "[";
		for(int i=1;i<=bar;i++){
		cout << "=";
		}
		cout << "]" << health << "%" << endl;
}
