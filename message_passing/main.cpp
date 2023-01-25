#include<iostream>
using namespace std;

class Lottery_Machine {
	public:
		void get_lottery() {
			cout<<"Your lottery number is 12"<<endl;
		}
};

class User {
	private:
		string name;
		int id;
	public:
		User(string user_name, int user_id){
			name = user_name;
			id = user_id;
		}
		void call_lottery(Lottery_Machine b) {
			cout<<"username :"<< name << endl;
			cout<<"user id: "<< id << endl;
			b.get_lottery();
		}
};

int main() {
	User user1("viraj", 12);
	Lottery_Machine lottery;
	user1.call_lottery(lottery);
	return 0;
}
