#include  <string.h>

void main()
{

	char line1[81];
	char line2[81];

	gets("line1");
	gets("line2");

	strcar(line1, line2);

	printf("%s", line1);
}