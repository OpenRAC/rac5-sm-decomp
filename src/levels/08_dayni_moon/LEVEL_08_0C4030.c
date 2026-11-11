/* LEVEL_08:0x0C4030 -- placement copy of LEVEL_01_0B9140.c: runs the shared reset with 3, then marks slot i active and clears its seven per-slot state entries. */
extern unsigned char D_00245898[];
extern unsigned char D_00245670[];
extern unsigned char D_002458A0[];
extern int D_002456E8[];
extern int D_00245668[];
extern unsigned char D_003779C8[];
extern int D_00245678[];
extern void func_0C4010(void *value);

void func_0C4030(int i)
{
    func_0C4010((void *)3);
    D_00245670[i] = 0;
    D_00245898[i] = 1;
    D_002458A0[i] = 0;
    D_002456E8[i] = 0;
    D_00245668[i] = 0;
    D_003779C8[i * 0x100] = 0;
    D_00245678[i] = 0;
}
