#ifndef GOPTIMIZERMODEL_H
#define GOPTIMIZERMODEL_H

#include "string"
#include "iostream"

using namespace std;

class GOptimizerModel
{
public:
    GOptimizerModel(); //constructor
    void process(string str); //processes run when start button clicked
    bool getSelection(); //getter
    void setSelection(bool sel); //setter
private:
    bool selection; //at or cg based on gui

};

#endif // GOPTIMIZERMODEL_H
