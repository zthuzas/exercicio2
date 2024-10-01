#include <iostream>

using namespace std;

int main() {
    float v[10];

    for (int i = 0; i < 10; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < 10; i++;) {
        printf("Endereco da posicao: %d : %d\n", i, &v[i]);
    }

        return 0;
}

