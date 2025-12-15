#include <iostream>
#include <vector>
#include <iomanip>

void cetakSegitigaBintangPascal() {

    const int N_BARIS = 5;


    std::vector<std::vector<int>> pascal_structure(N_BARIS);


    for (int i = 0; i < N_BARIS; ++i) {

        pascal_structure[i].resize(i + 1);
        long long current_val = 1; 

        for (int k = 0; k <= i; ++k) {

            pascal_structure[i][k] = 1;


            if (k < i) {

                current_val = current_val * (i - k) / (k + 1);
            }
        }
    }


    std::cout << "Segitiga Pascal Bintang (" << N_BARIS << " Baris):\n";

    for (int i = 0; i < N_BARIS; ++i) {

        for (int j = 0; j < N_BARIS - i - 1; ++j) {
            std::cout << "  "; 
        }


        for (int k = 0; k <= i; ++k) {
            if (pascal_structure[i][k] == 1) {

                std::cout << " * ";
            }
            else {
                
                std::cout << "    ";
            }
        }
        std::cout << "\n"; 
    }
}

int main() {
    cetakSegitigaBintangPascal();
    return 0;
}