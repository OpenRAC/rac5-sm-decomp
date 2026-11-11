/* LEVEL_19:0x0A5700 -- placement copy of LEVEL_16_0A5E88.c: runs six per-slot update steps for two slots. */

extern void func_0A5528(int slot);
extern void func_0A5358(int slot);
extern void func_0A59B0(int slot, void *obj);
extern void func_0A5E00(int slot);
extern void func_0A6198(int slot);
extern void func_0A68C0(int slot);
extern void func_0A7780(int slot);
extern void func_0A5698(int slot);

extern char *D_001A2C34;

void func_0A5700(void)
{
	unsigned int i;

	i = 0;
	do {
		func_0A5528(i);
		func_0A5358(i);
		func_0A59B0(i, *(void **)(D_001A2C34 + 0x1C68));
		func_0A5E00(i);
		func_0A6198(i);
		func_0A68C0(i);
		func_0A7780(i);
		func_0A5698(i);
		i++;
	} while (i < 2);
}
