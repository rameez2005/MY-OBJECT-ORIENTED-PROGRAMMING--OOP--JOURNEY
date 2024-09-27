//#include<iostream>
//using namespace std;
//int main() {
//	int moneybox = 1000 , amount=0 , remain=0 ;
//	cout << " HOW MUCH AMOUNT DID YOU GOT ? \n";
//	cin >> amount;
//	if (amount > 40) {
//		cout << " YOU ARE TRAVELLING BY RICKSHAW \n";
//		amount -= (15 * 2);
//		remain = amount % 3;
//		cout << " YOU GOT "<< amount/3 << "  CANDIES \n";
//		if (remain > 0) {
//			moneybox += remain;
//			cout << " YOUR REMAINING  AMOUNT  " << remain << " RUPEES HAS BEEN ADED BACK INTO THE MONEY BOX  \n";
//		}
//	}
//	else if (amount >= 20 && amount <= 40) {
//		cout << " YOU ARE TRAVELING BY BUS \n";
//		amount -= (8 * 2);
//		remain = amount % 3;
//		cout << " YOU GOT " << amount / 3 << "  CANDIES \n";
//		if (remain > 0) {
//			moneybox += remain;
//			cout << " YOUR REMAINING  AMOUNT  " << remain << " RUPEES HAS BEEN ADED BACK INTO THE MONEY BOX  \n";
//		}
//	}
//	else {
//		cout << " YOU ARE TRAVELING BY BYCYCLE \n";
//		cout << " YOU GOT " << amount / 3 << "  CANDIES \n";
//		remain = amount % 3;
//		if (remain > 0) {
//			moneybox += remain;
//			cout << " YOUR REMAINING  AMOUNT  " << remain << " RUPEES HAS BEEN ADED BACK INTO THE MONEY BOX  \n";
//
//		}
//	}
//
//	system("pause");
//	return 0;
//}