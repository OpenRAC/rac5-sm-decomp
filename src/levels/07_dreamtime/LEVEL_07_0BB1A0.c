/* LEVEL_07:0x0BB1A0 -- placement copy of LEVEL_01_0B9140.c: runs the shared reset with 3, then marks slot i active and clears its seven per-slot state entries. */
extern unsigned char D_00210CD8[];
extern unsigned char D_00210AB0[];
extern unsigned char D_00210CE0[];
extern int D_00210B28[];
extern int D_00210AA8[];
extern unsigned char D_0033E048[];
extern int D_00210AB8[];
extern void func_0BB180(void *value);

void func_0BB1A0(int i)
{
    func_0BB180((void *)3);
    D_00210AB0[i] = 0;
    D_00210CD8[i] = 1;
    D_00210CE0[i] = 0;
    D_00210B28[i] = 0;
    D_00210AA8[i] = 0;
    D_0033E048[i * 0x100] = 0;
    D_00210AB8[i] = 0;
}
