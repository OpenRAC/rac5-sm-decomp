/* LEVEL_07:0x1A92F0 -- placement copy of LEVEL_01_1966F8.c: merges two block fields into the control words, registers a hashed output with its handle, queues the paired outputs and runs setup helper 7. */
extern int D_002AD6C0[];
extern unsigned int D_0021D45C;
extern unsigned int D_0021D460;
extern int D_0021D464;
extern int D_0021D468;
extern int D_0021D46C;
extern char D_0021D4E0[];
extern char D_0021DF58[];

extern void func_1E5850(long long, long long, long long, long long);
extern void func_1F26A0(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_0F0548(int index);

void func_1A92F0(void)
{
    D_0021D45C = (D_0021D45C & 0xF800FFFFu) | ((unsigned int)D_002AD6C0[90] << 16);
    D_0021D460 = (D_0021D460 & 0xF800FFFFu) | ((unsigned int)D_002AD6C0[128] << 16);
    D_0021D46C = ((int (*)(unsigned int, char *, char *, void *))func_1E5850)(
        ((unsigned int)D_002AD6C0[127] << 16) | 0x800060D9u, D_0021D4E0, D_0021DF58, 0);
    func_1F26A0(&D_0021D464, D_0021D45C, &D_0021D468, D_0021D460, 0);
    func_0F0548(7);
}
