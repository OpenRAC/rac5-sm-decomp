/* LEVEL_17:0x0A76D0 -- placement copy of LEVEL_01_0B9140.c: runs the shared reset with 3, then marks slot i active and clears its seven per-slot state entries. */
extern unsigned char D_0019E058[];
extern unsigned char D_0019DE30[];
extern unsigned char D_0019E060[];
extern int D_0019DEA8[];
extern int D_0019DE28[];
extern unsigned char D_00267988[];
extern int D_0019DE38[];
extern void func_0A76B0(void *value);

void func_0A76D0(int i)
{
    func_0A76B0((void *)3);
    D_0019DE30[i] = 0;
    D_0019E058[i] = 1;
    D_0019E060[i] = 0;
    D_0019DEA8[i] = 0;
    D_0019DE28[i] = 0;
    D_00267988[i * 0x100] = 0;
    D_0019DE38[i] = 0;
}
