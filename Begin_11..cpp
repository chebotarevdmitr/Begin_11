#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  printf("Write out all numbers between 100-500 that are divisible by 3 end 5 \n\n");	
 //(все числа в диапозоне от 100-500 которые деляеся на 3 и 5 )	
	int counter=100;
	while(counter<=500) 
   {
   	if(counter %3 == 0 && counter %5 == 0)
   	cout<<counter<<" is divisiblt \n";
   	counter++;
   }
	
	system("pause>0");
}