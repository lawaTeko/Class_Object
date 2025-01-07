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
	
	NamaOrang user1;
	user1.nama = "lawateko";
	NamaOrang user2;
	user2.nama = "jnwttmna";
	
	cout << "nama user-1 adalah " << user1.nama << ", dan temannya bernama " << user2.nama << endl;
	
    return 0;
}
