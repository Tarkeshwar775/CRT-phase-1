class Parent {
protected:
    int secretCode = 1234;    
    
};
class child : public Parent{
public:    
    void accessOfSecretCode() {
        cout << "secretCode of the locker is " << secretCode;
    }
};

int main() {
    child obj1;
    obj1.accessOfSecretCode();
}
