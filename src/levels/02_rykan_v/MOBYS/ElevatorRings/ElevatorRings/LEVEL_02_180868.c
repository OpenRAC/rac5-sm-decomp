/* LEVEL_02:0x180868 -- allocates the 0x10-entry pool, registers it with the setup helper and publishes the packed id word. */
extern char D_00237BA8[];
extern int D_0021C924;
extern int D_002AF4A0;
extern unsigned int D_003ADBD8;

extern int func_115A38(int a, int b, int c, char *d, int e);
extern void func_0A3080(int pool, int a, int b);

void func_180868(void)
{
    int pool;

    pool = func_115A38(0x10, 0xC60, 0, D_00237BA8, 0xA9);
    D_0021C924 = pool;
    func_0A3080(pool, 0x42, 0x20);
    D_003ADBD8 = (D_002AF4A0 << 16) | 0xC000004Du;
}
