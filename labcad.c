#include <stdio.h>

struct device {
	char devicename[20];
	char ipaddress[16];
	int deivceid;
} myDevice, devices[80], *devicePtr;

//struct device myDevice;
//struct device devices[80];
//struct device *devicePtr;

int main() {
  printf("Hello Antonio\n");
  return 0;
}
