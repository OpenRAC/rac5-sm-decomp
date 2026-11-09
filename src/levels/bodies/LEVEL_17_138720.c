/* LEVEL_17:0x138720 -- placement copy of LEVEL_16_13CD10.c: clears a pending handle, sets two status bits and tears down when not persisting. */

extern void func_162708(char *record);
extern void func_1569F8(char *obj, char *handle);
extern void func_179B70(char *global, char *obj);
extern char D_002D5BB8[];

void func_138720(char *a0, int a1, int a2)
{
	char *s1;

	s1 = *(char **)(a0 + 0x54);
	if (*(char **)(s1 + 0x10)) {
		func_162708(*(char **)(s1 + 0x10));
	}
	*(int *)(a0 + 0x64) |= 0x200020;
	func_1569F8(a0, *(char **)(s1 + 0x10));
	*(int *)(s1 + 0x10) = 0;
	if (!a2) {
		func_179B70(D_002D5BB8, a0);
	}
}
