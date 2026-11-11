/* LEVEL_18:0x0A4E00 -- placement copy of LEVEL_16_0A5E88.c: runs six per-slot update steps for two slots. */

extern void func_0A4C28(int slot);
extern void func_0A4A58(int slot);
extern void func_0A50B0(int slot, void *obj);
extern void func_0A5500(int slot);
extern void func_0A5898(int slot);
extern void func_0A5FC0(int slot);
extern void func_0A6E80(int slot);
extern void func_0A4D98(int slot);

extern char *D_001A2F34;

void func_0A4E00(void)
{
	unsigned int i;

	i = 0;
	do {
		func_0A4C28(i);
		func_0A4A58(i);
		func_0A50B0(i, *(void **)(D_001A2F34 + 0x1C68));
		func_0A5500(i);
		func_0A5898(i);
		func_0A5FC0(i);
		func_0A6E80(i);
		func_0A4D98(i);
		i++;
	} while (i < 2);
}
