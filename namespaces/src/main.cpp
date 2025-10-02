#include <iostream>
#include "AdvancedMath.h"
#include "MathUtils.h"

using namespace MathUtils;
using namespace AdvancedMath;
using namespace std;

int main(){
    int x = 4;
    int y = 1;

    cout << add(x, y) << endl;
    cout << multiply(x, y) << endl;
    cout << square(y) << endl;

    return 0;
}
