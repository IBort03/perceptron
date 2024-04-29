#include "main.h"

int main () {
    
    //AND trained perceptron// 

    struct perceptron ANDp = p[0]; 

    /* Initialize perceptron*/
    ANDp.learningRate = 0.00001;
    ANDp.bias = 1;
    for (int i = 0; i < 3; i++) {
        ANDp.weights[i] = 0;
    }


    return 0;
}