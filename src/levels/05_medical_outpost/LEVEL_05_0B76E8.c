/* LEVEL_05:0x0B76E8 -- placement copy of LEVEL_01_0B9140.c: runs the shared reset with 3, then marks slot i active and clears its seven per-slot state entries. */
extern unsigned char D_001EBD58[];
extern unsigned char D_001EBB30[];
extern unsigned char D_001EBD60[];
extern int D_001EBBA8[];
extern int D_001EBB28[];
extern unsigned char D_00314608[];
extern int D_001EBB38[];
extern void func_0B76C8(void *value);

void func_0B76E8(int i)
{
    func_0B76C8((void *)3);
    D_001EBB30[i] = 0;
    D_001EBD58[i] = 1;
    D_001EBD60[i] = 0;
    D_001EBBA8[i] = 0;
    D_001EBB28[i] = 0;
    D_00314608[i * 0x100] = 0;
    D_001EBB38[i] = 0;
}
