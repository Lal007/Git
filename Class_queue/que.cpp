#include "que.h"

Que::Que(int quontity)
{
    arr = new int[100];
    Max = quontity;
}



Que::~Que(){
    delete [] arr;

}
