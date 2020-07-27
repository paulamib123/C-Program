#include <iostream>

using namespace std;
int no_of_triangles(int, int);

int main(){
    int a;
    int b;
    int ans;
    cin >> a >> b;
    cout << no_of_triangles(a, b) << endl;
    return 0;
}

int no_of_triangles(int a, int b){
    int count = 0;
    for (int i = a; i <= b; i++){
        for(int j = i + 1; j <= b; j++){
            for(int k = j + 1; k <= b; k++){
                if ( i + j > k && j + k > i && k + i > j){
                    cout << "Pair: " << i << " , " << j << " , " << k << endl;
                    count += 1;
                    } 
                }
            }
        }
    return count;
}
   
