/* LEVEL_17:0x0A5368 -- placement copy of LEVEL_16_0A5E88.c: runs six per-slot update steps for two slots. */

extern void func_0A5190(int slot);
extern void func_0A4FC0(int slot);
extern void func_0A5618(int slot, void *obj);
extern void func_0A5A68(int slot);
extern void func_0A5E00(int slot);
extern void func_0A6528(int slot);
extern void func_0A73E8(int slot);
extern void func_0A5300(int slot);

extern char *D_001950B4;

void func_0A5368(void)
{
	unsigned int i;

	i = 0;
	do {
		func_0A5190(i);
		func_0A4FC0(i);
		func_0A5618(i, *(void **)(D_001950B4 + 0x1C68));
		func_0A5A68(i);
		func_0A5E00(i);
		func_0A6528(i);
		func_0A73E8(i);
		func_0A5300(i);
		i++;
	} while (i < 2);
}
