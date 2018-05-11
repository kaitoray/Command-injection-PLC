/* reference.h
   header file for main.c
*/

#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <windows.h>  /* for timing control */

/* IP address of TCP server to be connected to  */
#define MY_SERVER_IP_ADDRESS     "10.10.10.95"   

/* port no. on TCP server to be connected to */
#define MY_SERVER_PORT_NUMBER       44818     

/* MAC address of TCP server to be connected to  */
#define MY_SERVER_MAC_ADDRESS       "12:34:56:78:90:ab"  

/* MAC address of local host  */
#define LOCAL_MAC_ADDRESS       "01:02:03:04:05:06" 

/* IP version  */
#define IP_VERSION       4 




/* get time. Demonstration only */
/* Note: better error checking and handling required in this function. */
/*
double getTime(void)
{
	LARGE_INTEGER ticksPerSecond;
    LARGE_INTEGER tick;           
    LARGE_INTEGER startTicks;

    /* get the accuracy */
//    if (!QueryPerformanceFrequency(&ticksPerSecond))
//		printf("\tQueryPerformance not present.");

    /* check tick counter */
//   if (!QueryPerformanceCounter(&tick)) 
//		printf("\tTimer tick counter not installed."); 

/*    QueryPerformanceCounter(&startTicks); 
     
	return  (double)startTicks.QuadPart/(double)ticksPerSecond.QuadPart;
}	*/