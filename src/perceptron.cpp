/*
*
* Author: Philip Amwata
* Version: 1.0
*
*/

#include "../include/perceptron.hpp"

float AMWPHI001::perceptron::productSum()
{
    float productSum = 0;
    for (size_t i = 0; i < this->weights.size(); i++)
    {
        productSum += this->weights[i] * this->inputs[i];
    }
    return productSum;
}

void AMWPHI001::perceptron::activationFunction()
{
    this->productSum() > 0 ? this->output = 1 : this->output = 0;
}

void AMWPHI001::perceptron::perceptonRule()
{
    this->activationFunction();
    for (size_t i = 0; i < this->weights.size(); i++)
    {
        this->weights[i] = this->weights[i] + (this->learning_rate * ((
                                                                          this->target - this->output) *
                                                                      this->inputs[i]));
    }
}

bool AMWPHI001::perceptron::findError()
{
    bool error = false;

    for (size_t i = 0; i < this->target.size(); i++)
    {
        if (this->target[i] != this->output)
        {
            error = true;
        }
    }

    return error;
}
