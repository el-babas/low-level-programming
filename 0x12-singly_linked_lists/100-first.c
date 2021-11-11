#include <stdio.h>
/**
 * myStartupFun - Constructor
 */
void myStartupFun(void) __attribute__ ((constructor));
/**
 * myCleanupFun - Constructor
 */
void myCleanupFun(void) __attribute__ ((constructor));
/**
 * myStartupFun - startup code before main()
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
/**
 * myCleanupFun - Cleanup code after main()
 */
void myCleanupFun(void)
{
}
