/* LEVEL_16:0x13CD10 -- clears a pending handle, sets two status bits and tears down when not persisting. */

extern void func_16BF68(char *record);
extern void func_15D478(char *obj, char *handle);
extern void func_186528(char *global, char *obj);
extern char D_002E49A8[];

void func_13CD10(char *a0, int a1, int a2)
{
	char *s1;

	s1 = *(char **)(a0 + 0x54);
	if (*(char **)(s1 + 0x10)) {
		func_16BF68(*(char **)(s1 + 0x10));
	}
	*(int *)(a0 + 0x64) |= 0x200020;
	func_15D478(a0, *(char **)(s1 + 0x10));
	*(int *)(s1 + 0x10) = 0;
	if (!a2) {
		func_186528(D_002E49A8, a0);
	}
}
