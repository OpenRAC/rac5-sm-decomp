/* LEVEL_06:0x0B3A40 -- placement copy of LEVEL_01_0B9140.c: runs the shared reset with 3, then marks slot i active and clears its seven per-slot state entries. */
extern unsigned char D_001EB8D8[];
extern unsigned char D_001EB6B0[];
extern unsigned char D_001EB8E0[];
extern int D_001EB728[];
extern int D_001EB6A8[];
extern unsigned char D_003154C8[];
extern int D_001EB6B8[];
extern void func_0B3A20(void *value);

void func_0B3A40(int i)
{
    func_0B3A20((void *)3);
    D_001EB6B0[i] = 0;
    D_001EB8D8[i] = 1;
    D_001EB8E0[i] = 0;
    D_001EB728[i] = 0;
    D_001EB6A8[i] = 0;
    D_003154C8[i * 0x100] = 0;
    D_001EB6B8[i] = 0;
}
