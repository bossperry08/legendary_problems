#include <iostream>
using namespace std;

//Ham
void move(int moveDisc, char fromRod, char toRod){
	cout << "Di chuyen dia so " << moveDisc << " tu cot " << fromRod << " sang cot " << toRod << '\n';
}
void towerOfHanoi(int numDisc, char fromRod, char toRod, char midRod){
	//Phan dung
	if(numDisc == 1){
		move(numDisc, fromRod, toRod);
		return;
	}
	//Phan de quy
	else{
		//Di chuyen n - 1 so dia tu cot goc sang cot trung gian
		towerOfHanoi(numDisc - 1, fromRod, midRod, toRod);
		
		//Di chuyen dia thu n tu cot goc sang cot dich
        	move(numDisc, fromRod, toRod); 	
		
		// Di chuyen n - 1 so dia tu cot trung gian sang cot dich
		towerOfHanoi(numDisc - 1, midRod, toRod, fromRod);  
	}
}

//Chuong trinh chinh
int main()
{
	int n;
	cin >> n;
	char cotBatDau = 'A', cotTrungGian = 'B', cotDich = 'C';
	cout << "Giai bai toan Tower of Hanoi voi n = " << n << '\n';
	towerOfHanoi(n, cotBatDau, cotDich, cotTrungGian);

	return 0;
}


