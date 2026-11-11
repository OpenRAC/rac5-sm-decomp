/* LEVEL_16:0x0A5E88 -- runs six per-slot update steps for two slots. */

extern void func_0A5CB0(int slot);
extern void func_0A5AE0(int slot);
extern void func_0A6138(int slot, void *obj);
extern void func_0A6540(int slot);
extern void func_0A68C0(int slot);
extern void func_0A6FE8(int slot);
extern void func_0A7EA8(int slot);
extern void func_0A5E20(int slot);

extern char *D_001A1AB4;

void func_0A5E88(void)
{
	unsigned int i;

	i = 0;
	do {
		func_0A5CB0(i);
		func_0A5AE0(i);
		func_0A6138(i, *(void **)(D_001A1AB4 + 0x1C68));
		func_0A6540(i);
		func_0A68C0(i);
		func_0A6FE8(i);
		func_0A7EA8(i);
		func_0A5E20(i);
		i++;
	} while (i < 2);
}
