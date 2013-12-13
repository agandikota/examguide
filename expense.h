
class Expense{
	const string desc;
	const int amt;
	Wallet *wallet;
public:
	Expense(string desc, int amt);
	void pay();
};

Expense(string desc, int amt):desc(desc),amt(amt){
	wallet = Wallet::getInstance();
};

void pay(){
	wallet->addMoney(-amt);
}

