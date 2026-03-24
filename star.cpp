/* star pattern 
*****\n
 _****\n
  ***\n
   **\n
 using 2 loops   */
#include <iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    for(int i = 1; i <= size; i++) {
        for(int j = 1; j <= size; j++) {
            if(j < i) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << "\n";
    }
    return 0;
}