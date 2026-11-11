/* LEVEL_18:0x0A7168 -- placement copy of LEVEL_01_0B9140.c: runs the shared reset with 3, then marks slot i active and clears its seven per-slot state entries. */
extern unsigned char D_001ABED8[];
extern unsigned char D_001ABCB0[];
extern unsigned char D_001ABEE0[];
extern int D_001ABD28[];
extern int D_001ABCA8[];
extern unsigned char D_00276A08[];
extern int D_001ABCB8[];
extern void func_0A7148(void *value);

void func_0A7168(int i)
{
    func_0A7148((void *)3);
    D_001ABCB0[i] = 0;
    D_001ABED8[i] = 1;
    D_001ABEE0[i] = 0;
    D_001ABD28[i] = 0;
    D_001ABCA8[i] = 0;
    D_00276A08[i * 0x100] = 0;
    D_001ABCB8[i] = 0;
}
