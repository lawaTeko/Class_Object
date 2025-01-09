#include <iostream>
using namespace std;

class NamaOrang{
    public:
    	string nama;
    	int umur;
  	  	string hobi;
		string makananKesukaan;
};

int main(){
	
	NamaOrang user1, user2;
	user1.nama = "lawateko";
	user2.nama = "jnwttmna";
	
	cout << "Hello, My name is " << user1.nama << ", and my friends name is " << user2.nama << endl;
	
    return 0;
}
