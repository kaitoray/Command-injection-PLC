#define _WINSOCK_DEPRECATED_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <winsock2.h>
#include <windows.h>     /* Note: winsock2.h has included windows.h */
#include <time.h>
#include "reference.h"
#include "message.h"

main()
{
	CreateENetinfo();
	puts("1");
}