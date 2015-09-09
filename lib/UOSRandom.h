#include<cstdlib>
#include<ctime> 

class UOSRandom{ 

private:
  int rand_min;
  int rand_max;
public :
  UOSRandom();
  UOSRandom(int max);
  UOSRandom(int min, int max);
  ~UOSRandom();
  int getRandom();
};
