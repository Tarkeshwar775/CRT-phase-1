class Student {

public:
    string name;
    int id;
    
    Student(string studentName, int studentID){
        name = studentName;
        id = studentID;
    }

public:
void displayDetails() {
    cout << name << " " <<id;
}    
};
int main() {
    Student std1("Abhishek", 101);
    std1.displayDetails();
    
}
