#include <stdio.h>

struct device {
	const char *devicename;
	const char *ipaddress;
	int deivceid;
} myDevice = {"mivpe015", "10.176.1.39", 1}, devices[80], *devicePtr;

//struct device myDevice;
//struct device devices[80];
//struct device *devicePtr;

int main() {
  printf("Hello Antonio\n");
  printf("%s %s %d\n", myDevice.devicename, myDevice.ipaddress, myDevice.deivceid);
  devicePtr = &myDevice; //assegna l'indirizzo di myDevice a devicePtr
  printf("%s\n", devicePtr->devicename);
  printf("%s\n", devicePtr->ipaddress);
  printf("%d\n", devicePtr->deivceid);
  myDevice.devicename = "mivpe016";
  myDevice.ipaddress = "10.176.1.40";
  myDevice.deivceid = 1;
  printf("%s %s %d\n", (*devicePtr).devicename, (*devicePtr).ipaddress, (*devicePtr).deivceid);
  return 0;
}
