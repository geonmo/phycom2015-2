#include"UOSRandom.h"

UOSRandom::UOSRandom(){
  srand( time(NULL) );
  rand_min=0;
  rand_max=0;
}

UOSRandom::UOSRandom(int max) {
  srand( time(NULL) );
  rand_min=0;
  rand_max= max;
}
UOSRandom::UOSRandom(int min, int max) {
  srand( time(NULL) );
  rand_min= min;
  rand_max= max;
}

int UOSRandom::getRandom(){
  if ( rand_max !=0 ) {
    return rand()%rand_max+rand_min;
  }
  else {
    return rand()+rand_min;
  }
}
