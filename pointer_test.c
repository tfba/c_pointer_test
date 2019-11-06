#include <stdio.h>
#include <stdlib.h>

extern void hexdump(void *mem, unsigned int len);

int func1(void)
{
	printf("func1 \n\n");
}


char vowels[][5] = {
    {'A', 'E', 'I', 'O', 'U'},
    {'a', 'e', 'i', 'o', 'u'},
    {'1', '2', '3', '4', '5'},
    {'t', 'r', 'u', 's', 't'},
    {'f', 'a', 'r', 'm', '!'}
};

int a34[3][4] = {  
   {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
   {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
   {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
};


char *hellostr = "Hello world\n";

int a12[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
char hellostrarr[] = "array_Hello world\n";

char *newheapregion = NULL;

int  main()
{
	printf("DataRegion ~ \nhellostr (0x%016llx)= \"%s\" \n hellostrarr = \"%s\"\n", hellostr, hellostr, hellostrarr);
    
    hexdump(vowels, 500);

    hexdump(hellostr, 50);
    
    newheapregion = malloc(100);
    strcpy(newheapregion, "newheapaddress region~~~");
    hexdump(newheapregion, 50);
    

	func1();

    free(newheapregion);
	return 1;
}

