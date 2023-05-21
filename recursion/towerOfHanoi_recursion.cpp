#include<iostream>

void toh(int disks, int t1, int t2, int t3);

int main() {

	toh(8, 1, 2, 3);

	return 0;
}

void toh(int disks, int t1, int t2, int t3) {
	if(disks > 0){
		toh(disks - 1, t1, t3, t2);
		std::cout << "( " << t1 << ", " << t3 << " )" << "\n";
		toh(disks - 1, t2, t1, t3);
	}
	
}