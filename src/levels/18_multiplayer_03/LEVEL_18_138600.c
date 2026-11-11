/* LEVEL_18:0x138600 -- placement copy of LEVEL_16_13CD10.c: clears a pending handle, sets two status bits and tears down when not persisting. */

extern void func_170C60(char *record);
extern void func_163068(char *obj, char *handle);
extern void func_186B60(char *global, char *obj);
extern char D_002E4C38[];

void func_138600(char *a0, int a1, int a2)
{
	char *s1;

	s1 = *(char **)(a0 + 0x54);
	if (*(char **)(s1 + 0x10)) {
		func_170C60(*(char **)(s1 + 0x10));
	}
	*(int *)(a0 + 0x64) |= 0x200020;
	func_163068(a0, *(char **)(s1 + 0x10));
	*(int *)(s1 + 0x10) = 0;
	if (!a2) {
		func_186B60(D_002E4C38, a0);
	}
}
