#ifndef INITIALIZERS_H
#define INITIALIZERS_H

#include <random>
#include <vector>

using namespace std;

class Initializer{
public:
    virtual vector<vector<float>> initialize(unsigned int w, unsigned int h)=0;
};

class Constant : public Initializer{
public:
    Constant(float c){
        this->c = c;
    }
    vector<vector<float>> initialize(unsigned int w, unsigned int h);

private:
    float c = 0;
};

class RandomUniform : public Initializer{
public:
    vector<vector<float>> initialize(unsigned int w, unsigned int h);

private:
    std::random_device rd;
    std::uniform_real_distribution<float> dis{0.0, 1.0};


};

#endif // INITIALIZERS_H