//#include <ph_gpu/ph_gpu.hpp>
#include <ph_gpu/gpu.hpp>
#include <iostream>
using namespace std;

int main ()
{
    cout << gpu<0>::properties::limits::nonCoherentAtomSize << endl;
      cout << GPU_COUNT << endl;
      cout << "hi" << endl;
      return 0;
}


