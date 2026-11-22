/* LEVEL_20:0x092498 -- placement copy of LEVEL_01_0B8F08.c: calls a helper when the second value is set, then forwards a lookup result. */
extern void func_0F7AA0(void *);
extern char *func_0E2118(void *);
extern void func_092500(int index, char *name, int flag, int value);

void func_092498(int first, void *enabled, void *third){ char *result;
 if (enabled != 0) func_0F7AA0(enabled);
 result = func_0E2118(third);
 if (result != 0) func_092500(first, result, 0, 0x5a); }
