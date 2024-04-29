#include "main.h"

int activate(struct perceptron p, int *input) {

    int sum = 0;
    int j = 0;

    sum += p.bias * p.weights[0];

    for (int i = 1; i <= 2; i++) {
        sum += input[j] * p.weights[i];
        j++;
    }

    if (sum > 0) {
        return 1;
    }

    return 0;
}