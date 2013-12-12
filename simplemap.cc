#include <map>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int main(){
	map<string,int> m;
	m["abc"] = 1;
	
	cout << m["def"] << endl;
	m.erase("def");
	cout << m.size()<<endl;
	for (int i = 0; i < 150 ; i++){
		stringstream ss;
		ss << i << "bougalonga";
		cout << m[ss.str()] << endl;
	}
	cout << m.size() << endl;
}




