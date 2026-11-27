/* LEVEL_24:0x178BA8 -- placement copy of LEVEL_01_1966F8.c: merges two block fields into the control words, registers a hashed output with its handle, queues the paired outputs and runs setup helper 7. */
extern int D_00263C80[];
extern unsigned int D_001D97E4;
extern unsigned int D_001D97E8;
extern int D_001D97EC;
extern int D_001D97F0;
extern int D_001D97F4;
extern char D_001D9868[];
extern char D_001DA0E8[];

extern void func_1A8E00(long long, long long, long long, long long);
extern void func_1B3578(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_0E7358(int index);

void func_178BA8(void)
{
    D_001D97E4 = (D_001D97E4 & 0xF800FFFFu) | ((unsigned int)D_00263C80[90] << 16);
    D_001D97E8 = (D_001D97E8 & 0xF800FFFFu) | ((unsigned int)D_00263C80[128] << 16);
    D_001D97F4 = ((int (*)(unsigned int, char *, char *, void *))func_1A8E00)(
        ((unsigned int)D_00263C80[127] << 16) | 0x800060D9u, D_001D9868, D_001DA0E8, 0);
    func_1B3578(&D_001D97EC, D_001D97E4, &D_001D97F0, D_001D97E8, 0);
    func_0E7358(7);
}
