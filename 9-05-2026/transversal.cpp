void traversal(int arr[], int size){
     for(int i = 0; i < size; i++) {
         cout << arr[i] <<" ";
     }
 }
int main() {
    int arr[] = {10,20,30,40,50};
    traversal(arr, 5);
}

// Problem -- 4
// Print memeory address of each data
void Addresstraversal(int arr[], int size){
     for(int i = 0; i < size; i++) {
         cout << &arr[i] <<" ";
     }
 }
int main() {
    int arr[] = {10,20,30,40,50};
    Addresstraversal(arr, 5);
}
