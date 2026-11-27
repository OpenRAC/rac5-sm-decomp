/* LEVEL_24:0x177F30 -- placement copy of LEVEL_01_1966F8.c: merges two block fields into the control words, registers a hashed output with its handle, queues the paired outputs and runs setup helper 7. */
extern int D_00263C80[];
extern unsigned int D_001D973C;
extern unsigned int D_001D9740;
extern int D_001D9744;
extern int D_001D9748;
extern int D_001D974C;
extern char D_001D97C0[];
extern char D_001DA0E8[];

extern void func_1A8E00(long long, long long, long long, long long);
extern void func_1B3578(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_0E7358(int index);

void func_177F30(void)
{
    D_001D973C = (D_001D973C & 0xF800FFFFu) | ((unsigned int)D_00263C80[90] << 16);
    D_001D9740 = (D_001D9740 & 0xF800FFFFu) | ((unsigned int)D_00263C80[128] << 16);
    D_001D974C = ((int (*)(unsigned int, char *, char *, void *))func_1A8E00)(
        ((unsigned int)D_00263C80[127] << 16) | 0x800060D9u, D_001D97C0, D_001DA0E8, 0);
    func_1B3578(&D_001D9744, D_001D973C, &D_001D9748, D_001D9740, 0);
    func_0E7358(7);
}
