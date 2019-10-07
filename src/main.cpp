/*
*
* Author: Philip Amwata
* Version: 1.0
*
*/
#include "../include/perceptron.hpp"

int main(int argc, char const *argv[])
{
    using namespace AMWPHI001;
    using namespace std;

    perceptron percept;

    std::vector<std::vector<float>> input = {{0, 0}, {0, 1}, {1, 0}, {1, 1}};
    vector<float> target = {1, 1, 1, 0};

    percept.setInputs(input);
    percept.setTarget(target);

    percept.setLearningRate(0.5);

    for (size_t i = 0; i < 10; i++)
    {
        percept.perceptonRule();
    }

    return 0;
}
