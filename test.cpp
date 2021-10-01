#include <vector> 
#include <string> 
#include <fstream> 
#include <iostream>
using namespace std;

int main(){
	ifstream in("E:\\QQ Download\\yq_in.txt");
	ofstream out("E:\\QQ Download\\yq_out.txt");
	string s, las;
	while(in >> s){
		if(s != las){
			if(las.size()) out << endl;
			las = s;
			out << s << endl;
		}
		getline(in, s);
		s = s.substr(1);
		if(s=="待明确地区	0") continue;
		out << s << endl;
	}
	in.close(); out.close();
}
