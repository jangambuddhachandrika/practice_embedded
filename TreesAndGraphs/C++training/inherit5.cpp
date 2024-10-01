#include <iostream>

using namespace std;

class Alpha{ };
class Beta:Alpha{ };
class Beta:protected Alpha{ };
class Beta:public Alpha{ };
