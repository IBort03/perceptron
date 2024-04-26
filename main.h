struct perceptron {
    double learningRate;
    double weights[3];
    int bias;
} p[2];

int input1[2] = {0,0};
int input2[2] = {0,1};
int input3[2] = {1,0};
int input4[2] = {1,1};

int main();
void train(struct perceptron *p);