/* LEVEL_01:0x0B8F08 -- calls a helper when the second value is set, then forwards a lookup result. */
extern void func_18D4A0(void *);
extern char *func_1324B0(void *);
extern void func_0B8F90(int index, char *name, int flag, int value);

void func_0B8F08(int first, void *enabled, void *third){ char *result;
 if (enabled != 0) func_18D4A0(enabled);
 result = func_1324B0(third);
 if (result != 0) func_0B8F90(first, result, 0, 0x5a); }
