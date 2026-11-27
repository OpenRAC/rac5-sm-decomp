/* LEVEL_18:0x166EB8 -- placement copy of LEVEL_01_1966F8.c: merges two block fields into the control words, registers a hashed output with its handle, queues the paired outputs and runs setup helper 7. */
extern int D_0024E5C0[];
extern unsigned int D_001BF4BC;
extern unsigned int D_001BF4C0;
extern int D_001BF4C4;
extern int D_001BF4C8;
extern int D_001BF4CC;
extern char D_001BF540[];
extern char D_001BFB40[];

extern void func_18DC10(long long, long long, long long, long long);
extern void func_1946F0(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_0D8868(int index);

void func_166EB8(void)
{
    D_001BF4BC = (D_001BF4BC & 0xF800FFFFu) | ((unsigned int)D_0024E5C0[90] << 16);
    D_001BF4C0 = (D_001BF4C0 & 0xF800FFFFu) | ((unsigned int)D_0024E5C0[128] << 16);
    D_001BF4CC = ((int (*)(unsigned int, char *, char *, void *))func_18DC10)(
        ((unsigned int)D_0024E5C0[127] << 16) | 0x800060D9u, D_001BF540, D_001BFB40, 0);
    func_1946F0(&D_001BF4C4, D_001BF4BC, &D_001BF4C8, D_001BF4C0, 0);
    func_0D8868(7);
}
