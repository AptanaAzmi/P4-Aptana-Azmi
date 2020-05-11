#include <stdio.h>

int main()
{
	int X = 25, Y = 4, Z;
	printf("nilai awal  : X =%d, Y=%d\n",X,Y);
	printf("ditanayakan : Z = (X < Y)? Y : X\n");
	Z = (X < Y)? Y : X;
	printf ("Nilai terbesar Z = X < adalah %d\n",Z);
	return 0;
}
