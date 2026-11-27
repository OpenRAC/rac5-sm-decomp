/* LEVEL_07:0x1A8678 -- placement copy of LEVEL_01_1966F8.c: merges two block fields into the control words, registers a hashed output with its handle, queues the paired outputs and runs setup helper 7. */
extern int D_002AD6C0[];
extern unsigned int D_0021D3B4;
extern unsigned int D_0021D3B8;
extern int D_0021D3BC;
extern int D_0021D3C0;
extern int D_0021D3C4;
extern char D_0021D438[];
extern char D_0021DF58[];

extern void func_1E5850(long long, long long, long long, long long);
extern void func_1F26A0(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_0F0548(int index);

void func_1A8678(void)
{
    D_0021D3B4 = (D_0021D3B4 & 0xF800FFFFu) | ((unsigned int)D_002AD6C0[90] << 16);
    D_0021D3B8 = (D_0021D3B8 & 0xF800FFFFu) | ((unsigned int)D_002AD6C0[128] << 16);
    D_0021D3C4 = ((int (*)(unsigned int, char *, char *, void *))func_1E5850)(
        ((unsigned int)D_002AD6C0[127] << 16) | 0x800060D9u, D_0021D438, D_0021DF58, 0);
    func_1F26A0(&D_0021D3BC, D_0021D3B4, &D_0021D3C0, D_0021D3B8, 0);
    func_0F0548(7);
}
