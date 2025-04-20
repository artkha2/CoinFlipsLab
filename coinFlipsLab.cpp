#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    const int M = 10; // number of trials
    const int NUMBER_OF_NS = 5; // number of different N's to try
    const int NUMBER_OF_PS = 3;  // number of different P's to try

    int flip_counts[NUMBER_OF_NS] = {100, 1000, 10000, 50000, 100000}; // number of flips
    double head_probs[NUMBER_OF_PS] = {0.3, 0.6, 0.9}; // probability of getting heads

    // Output the results into a CSV file
    // CSV makes it easier to import the data into Google Sheets/Excel and graph it
    
    ofstream out_file("coin_out.csv");  // create new file or overwrite existing one
    out_file << "Number of Flips (n),Trial Number (m),Probability of Heads (p),Number of heads\n";  // Write header row
    

    for(int n : flip_counts){  // iterate through different N's
        for(double p : head_probs){  // iterate through different P's
            for(int trial=0; trial<M; trial++){  // Do M trials for every combination of P and N
            
                int n_heads = 0;  // reset number of heads for every trial

                for(int i = 0; i < n; i++){  // do N coin tosses
                    bool coin_toss = ((double)rand() / RAND_MAX) < p;
                    if(coin_toss){  // heads
                        n_heads++;
                    }
                }
            out_file << n << "," << trial+1 << "," << p << "," << n_heads << "\n";
            }
        }
    }
    
}