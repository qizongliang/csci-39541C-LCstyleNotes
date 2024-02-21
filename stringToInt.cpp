#include <iostream>
#include <string>

using namespace std;

int StringToInt(string s){
	int startingIndex = 0; // The starting index of the number since we are getting rid of leading zeros
	int sum = 0; // Sum of the number 
	
	while( int(s[startingIndex]-48) == 0){ // minus 48 to get the number needed since 48 is '0' to the ascii
		startingIndex += 1;
	}
		
	for(int i = startingIndex; i < s.length() ;i++){
		sum = sum*10 +int(s[i]-48); // multiply the current number by 10 to add 0 at the end. Then add the current number to the sum
	}
	
	return sum;
};
int main(){
	
	
	
	int answer = StringToInt("0123450");
	cout<<answer<<endl;
	return 0;
	
}
