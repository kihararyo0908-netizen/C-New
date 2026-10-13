#include <iostream>
using namespace std;

int main(){
  int kuku[KUKU_SIZE * KUKU_SIZE];

    for (int i = 1; i <= KUKU_SIZE; ++i) {
	    for (int j = 1; j <= KUKU_SIZE; ++j) {
		    kuku[(i - 1) * KUKU_SIZE + (j - 1)] = i * j;
 	    }
    }
}
