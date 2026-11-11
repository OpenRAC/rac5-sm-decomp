/* LEVEL_19:0x1392F0 -- placement copy of LEVEL_16_13CD10.c: clears a pending handle, sets two status bits and tears down when not persisting. */

extern void func_16CE20(char *record);
extern void func_15EF78(char *obj, char *handle);
extern void func_1831C0(char *global, char *obj);
extern char D_002E49E8[];

void func_1392F0(char *a0, int a1, int a2)
{
	char *s1;

	s1 = *(char **)(a0 + 0x54);
	if (*(char **)(s1 + 0x10)) {
		func_16CE20(*(char **)(s1 + 0x10));
	}
	*(int *)(a0 + 0x64) |= 0x200020;
	func_15EF78(a0, *(char **)(s1 + 0x10));
	*(int *)(s1 + 0x10) = 0;
	if (!a2) {
		func_1831C0(D_002E49E8, a0);
	}
}
