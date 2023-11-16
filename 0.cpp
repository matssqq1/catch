#include <iostream>
#include <unordered_map>
#include <string>
#include <iomanip>

using namespace std;
 
class matrix{
    private:
    int x, y;
    double **index;
    public:
    void Matrix_input(int a, int b){
        x = a;
        y = b;
        if(x == 0 || y == 0){
            throw (x, y);
        }
        int arr[x][y];
        for(int i = 0; i < y; i++){
            for(int j = 0; j < x; j++){
                arr[i][j] = i + j;
                cout << arr[i][j] << setw(3);
            }
            cout << "\n";
        }
    }

};

 
int main() {
    int r, r1;
    cin >> r;
    cin >> r1;
    matrix n;
    try{
        n.Matrix_input(r, r1);
    }
    catch(...){
        int x = 1;
        int y = 1;
        n.Matrix_input(x, y);
        return 0;
    }
}
