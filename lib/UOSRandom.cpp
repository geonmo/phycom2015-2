#include"UOSRandom.h"

UOSRandom::UOSRandom(){
  rand_max=0;
  srand( time(NULL) );
}

UOSRandom::UOSRandom(int max) {
  rand_max= max;
  srand( time(NULL) );
}
UOSRandom::UOSRandom(int min, int max) {
  rand_min= min;
  rand_max= max;
  srand( time(NULL) );
}

int UOSRandom::getRandom(){
  return rand()%rand_max+rand_min;
}
