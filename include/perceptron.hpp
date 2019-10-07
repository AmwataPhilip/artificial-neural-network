/*
*
* Author: Philip Amwata
* Version: 1.0
*
*/

#ifndef PERCEPTRON_H
#define PERCEPTRON_H

#include <vector>
#include <iostream>
#include <stdlib.h>
#include <random>
#include <chrono>

namespace AMWPHI001
{
class perceptron
{
private:
    std::vector<float> inputs;
    std::vector<float> weights, target;
    float learning_rate;
    int output;

public:
    perceptron()
    {
        unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
        std::default_random_engine generator(seed);
        std::uniform_real_distribution<float> distribution(-1.0, 1.0);
        for (size_t j = 0; j < 2; j++)
        {
            this->weights.push_back(distribution(generator));
        }
    }
    ~perceptron();
    float productSum();
    void activationFunction();
    void perceptonRule();
    bool findError();

    void setOutput(int output)
    {
        this->output = output;
    }

    void setTarget(std::vector<float> target)
    {
        this->target = target;
    }

    void setWeights(std::vector<float> weight)
    {
        this->weights = weight;
    }

    void setInputs(std::vector<float> input)
    {
        this->inputs = input;
    }

    void setLearningRate(float lRate)
    {
        this->learning_rate = lRate;
    }
};

perceptron::~perceptron() {}
} // namespace AMWPHI001
#endif
