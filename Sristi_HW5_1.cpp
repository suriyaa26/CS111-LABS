/*#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  srand(time(0));
  int numTosses[] = {10, 100, 1000, 5000};
  
  for(int i = 0; i < 4; ++i) {
    int headsCount = 0;
    int tailsCount = 0;
    int tosses = numTosses[i];
    
    for(int j = 0; j < tosses; ++j) {
      int result = rand() % 2;
            if(result == 0) {
                tailsCount++;
            } else {
                headsCount++;
            }
        }

        double probabilityHeads = static_cast<double>(headsCount) / tosses;
        double probabilityTails = static_cast<double>(tailsCount) / tosses;
    
        cout << "Probability of heads given " << tosses << " tosses = " << probabilityHeads << endl;
        cout << "Probability of tails given " << tosses << " tosses = " << probabilityTails << endl << endl;
    }

    return 0;
}
*/