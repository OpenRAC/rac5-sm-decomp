/* LEVEL_01:0x0B9140 -- runs the shared reset with 3, then marks slot i active and clears its seven per-slot state entries. */
extern unsigned char D_001FC9D8[];
extern unsigned char D_001FC7B0[];
extern unsigned char D_001FC9E0[];
extern int D_001FC828[];
extern int D_001FC7A8[];
extern unsigned char D_00328748[];
extern int D_001FC7B8[];
extern void func_0B9120(void *value);

void func_0B9140(int i)
{
    func_0B9120((void *)3);
    D_001FC7B0[i] = 0;
    D_001FC9D8[i] = 1;
    D_001FC9E0[i] = 0;
    D_001FC828[i] = 0;
    D_001FC7A8[i] = 0;
    D_00328748[i * 0x100] = 0;
    D_001FC7B8[i] = 0;
}
