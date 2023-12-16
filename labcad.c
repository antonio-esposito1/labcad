#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DEVICES 80


struct device {
	const char *devicename; //definisce un puntatore a devicename
	const char *ipaddress;  //definisce un puntatore a ipaddress
	int deivceid;
} myDevice = {"mivpe015", "10.176.1.39", 1}, devices[80], *devicePtr;


typedef struct device Device;

Device router1, router2;

//struct device myDevice;
//struct device devices[80];
//struct device *devicePtr;

int main() {
  printf("Hello Antonio\n");
  printf("%s %s %d\n", myDevice.devicename, myDevice.ipaddress, myDevice.deivceid);
  devicePtr = &myDevice; //assegna l'indirizzo di myDevice a devicePtr
  printf("%s %s %d\n", devicePtr->devicename, devicePtr->ipaddress, devicePtr->deivceid);
  myDevice.devicename = "mivpe016";
  myDevice.ipaddress = "10.176.1.40";
  myDevice.deivceid = 2;
  printf("%s %s %d\n", (*devicePtr).devicename, (*devicePtr).ipaddress, (*devicePtr).deivceid);

  router1.devicename = "mivpe035";
  router1.ipaddress = "10.176.1.41";
  router1.deivceid = 3;

  router2.devicename = "mivpe036";
  router2.ipaddress = "10.176.1.42";
  router2.deivceid = 4;

  devicePtr = &router1;
  printf("%s %s %d\n", devicePtr->devicename, devicePtr->ipaddress, devicePtr->deivceid);
  devicePtr = &router2;
  printf("%s %s %d\n", devicePtr->devicename, devicePtr->ipaddress, devicePtr->deivceid);

  
  return 0;
}
