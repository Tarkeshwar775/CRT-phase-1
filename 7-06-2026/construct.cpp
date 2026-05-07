class wifiConnection {
public:    
    string networkName;
    string password;
    
    wifiConnection() {
        networkName = "ACTFibre";
        password = "BJP wons";
    }
    
public:
void showDetails() {
   cout << "NetWork name is " << networkName << " and its password is " << password; 
    }
};

int main() {
    wifiConnection obj1;
    obj1.showDetails();
}
