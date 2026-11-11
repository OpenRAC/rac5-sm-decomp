/* LEVEL_19:0x0A7A68 -- placement copy of LEVEL_01_0B9140.c: runs the shared reset with 3, then marks slot i active and clears its seven per-slot state entries. */
extern unsigned char D_001ABBD8[];
extern unsigned char D_001AB9B0[];
extern unsigned char D_001ABBE0[];
extern int D_001ABA28[];
extern int D_001AB9A8[];
extern unsigned char D_00276808[];
extern int D_001AB9B8[];
extern void func_0A7A48(void *value);

void func_0A7A68(int i)
{
    func_0A7A48((void *)3);
    D_001AB9B0[i] = 0;
    D_001ABBD8[i] = 1;
    D_001ABBE0[i] = 0;
    D_001ABA28[i] = 0;
    D_001AB9A8[i] = 0;
    D_00276808[i * 0x100] = 0;
    D_001AB9B8[i] = 0;
}
