#include <iostream>
#include "/Users/henry2112/Desktop/cse3150/hw/namespaces/include/AdvancedMath.h"

using namespace AdvancedMath;
using namespace MathUtils;
using namespace std; 

int AdvancedMath::square(int n){
    return MathUtils::multiply(n, n);
}
