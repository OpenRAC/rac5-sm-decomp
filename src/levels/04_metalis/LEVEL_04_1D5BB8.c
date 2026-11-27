/* LEVEL_04:0x1D5BB8 -- returns 1 when any record in the object's list passes the test against other. */

extern int func_1710C0(char *record, void *other);

int func_1D5BB8(char *obj, void *other)
{
	unsigned int i;
	char *info;

	info = *(char **)(obj + 0x58);
	obj = *(char **)(obj + 0x54);
	for (i = 0; i < *(unsigned char *)(info + 0x48); i++) {
		if (func_1710C0(((char **)(obj + 0x40))[i], other)) {
			return 1;
		}
	}
	return 0;
}
