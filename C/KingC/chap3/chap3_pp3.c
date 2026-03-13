#include <stdio.h>

int main(void)
{
	int GS1, groupID, publisher, item, checkdigit;
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &GS1, &groupID, &publisher, &item, &checkdigit);
	printf("GS1 prefix: %d\n", GS1);
	printf("Group identifier: %d\n", groupID);
	printf("Publisher code: %d\n", publisher);
	printf("Item number: %d\n", item);
	printf("Check digit: %d\n", checkdigit);

	return 0;
}
