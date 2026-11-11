/* LEVEL_20:0x090408 -- placement copy of LEVEL_16_0A5E88.c: runs six per-slot update steps for two slots. */

extern void func_090230(int slot);
extern void func_090060(int slot);
extern void func_0906B8(int slot, void *obj);
extern void func_090AC0(int slot);
extern void func_090E40(int slot);
extern void func_091568(int slot);
extern void func_092428(int slot);
extern void func_0903A0(int slot);

extern char *D_00104194;

void func_090408(void)
{
	unsigned int i;

	i = 0;
	do {
		func_090230(i);
		func_090060(i);
		func_0906B8(i, *(void **)(D_00104194 + 0x1C68));
		func_090AC0(i);
		func_090E40(i);
		func_091568(i);
		func_092428(i);
		func_0903A0(i);
		i++;
	} while (i < 2);
}
