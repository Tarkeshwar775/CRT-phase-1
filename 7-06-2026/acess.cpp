class BandAccount {
    
private:
     int balance = 5000;
    
 public:
 void showBalance() {
     cout << "Balance in your account is: " << balance;
     }
 };

 int main() {
     BandAccount myaccount;
     myaccount.showBalance();
 }
