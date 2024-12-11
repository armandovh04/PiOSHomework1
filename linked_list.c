#include <stdio.h>
//going to recreate the table into C (memory table)

long buf[256];

struct obj {
  struct obj *next;  //8 bytes
  int playload 1;  //4 bytes
  int payload 2;  //4 bytes	
};


int main () {

  struct obj *pObj = (struct obj*)&buf[4];

  long *ptr = &buf[4];
  
  pObj->next = &buf[6];
  pObj->payload1 = 0xdeadbeef;
  pObj->payload2 = 0xbeefcafe;

  pObj = &buf[6];
  pObj->next = &buf[7]

  pObj->next->next = NULL;

//  head = pObj;    //head = &buff[4] (same thing)
//  buf[4] = &buf[7];  
  
  printf(“sizeof(pObj)= %ld\n”, sizeof(pObj));

  for(int k = 0; k < 10; k++) {
     printf(“[%d @ %p] 0x%lx\n, k, &buf[k], buf[k]);
  }
return 0;
}
