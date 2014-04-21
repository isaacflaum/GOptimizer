#include "goptimizermodel.h"
#include "iostream"

using namespace std;

//constructor
GOptimizerModel::GOptimizerModel()
{

    selection = true; //true is AT

}

//algorithm and work
void GOptimizerModel::process(string str) //processes run when start button clicked
{

    cout << str << endl; //put what u want here
    //this is where you have to implement you are given the text str

    //put what happens in here if AT
    if( selection )
    {

    }
    //this is if GC
    else
    {

    }

}

bool GOptimizerModel::getSelection() //getter
{ return selection; }

void GOptimizerModel::setSelection(bool sel) //setter
{ selection = sel; }
